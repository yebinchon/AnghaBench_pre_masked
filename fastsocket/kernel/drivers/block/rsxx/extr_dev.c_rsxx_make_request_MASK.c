
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rsxx_cardinfo {int halt; int dma_fault; int gendisk; } ;
struct rsxx_bio_meta {int pending_dmas; int start_time; int error; struct bio* bio; } ;
struct request_queue {struct rsxx_cardinfo* queuedata; } ;
struct bio {scalar_t__ bi_sector; int bi_size; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int VAR_4 ;
 int FUNC_3 (struct bio*,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,char,struct rsxx_bio_meta*,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct rsxx_cardinfo*,struct bio*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_6 ;
 struct rsxx_bio_meta* FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct rsxx_bio_meta*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct rsxx_cardinfo*,struct bio*,int *,int ,struct rsxx_bio_meta*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct request_queue *VAR_7, struct bio *VAR_8)
{
 struct rsxx_cardinfo *VAR_9 = VAR_7->queuedata;
 struct rsxx_bio_meta *VAR_10;
 int VAR_11 = -VAR_1;

 FUNC_10();

 if (!VAR_9)
  goto req_err;

 if (VAR_8->bi_sector + (VAR_8->bi_size >> 9) > FUNC_7(VAR_9->gendisk))
  goto req_err;

 if (FUNC_12(VAR_9->halt)) {
  VAR_11 = -VAR_0;
  goto req_err;
 }

 if (FUNC_12(VAR_9->dma_fault)) {
  VAR_11 = (-VAR_0);
  goto req_err;
 }

 if (VAR_8->bi_size == 0) {
  FUNC_5(FUNC_0(VAR_9), "size zero BIO!\n");
  goto req_err;
 }

 VAR_10 = FUNC_8(VAR_5, VAR_3);
 if (!VAR_10) {
  VAR_11 = -VAR_2;
  goto req_err;
 }

 VAR_10->bio = VAR_8;
 FUNC_1(&VAR_10->error, 0);
 FUNC_1(&VAR_10->pending_dmas, 0);
 VAR_10->start_time = VAR_6;

 if (!FUNC_12(VAR_9->halt))
  FUNC_6(VAR_9, VAR_8);

 FUNC_4(FUNC_0(VAR_9), "BIO[%c]: meta: %p addr8: x%llx size: %d\n",
   FUNC_2(VAR_8) ? 'W' : 'R', VAR_10,
   (u64)VAR_8->bi_sector << 9, VAR_8->bi_size);

 VAR_11 = FUNC_11(VAR_9, VAR_8, &VAR_10->pending_dmas,
        VAR_4, VAR_10);
 if (VAR_11)
  goto queue_err;

 return 0;

queue_err:
 FUNC_9(VAR_5, VAR_10);
req_err:
 FUNC_3(VAR_8, VAR_11);

 return 0;
}
