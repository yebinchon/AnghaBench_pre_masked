
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int make_request_fn; } ;
struct block_device {int * bd_disk; } ;
struct bio {int bi_sector; int * bi_private; struct block_device* bi_bdev; int bi_end_io; } ;
typedef int sector_t ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct request_queue* FUNC_1 (struct block_device*) ;
 struct bio* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (int ,struct bio*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;

int FUNC_8(struct block_device *VAR_6, gfp_t VAR_7,
  sector_t *VAR_8)
{
 FUNC_0(VAR_5);
 struct request_queue *VAR_9;
 struct bio *VAR_10;
 int VAR_11 = 0;

 if (VAR_6->bd_disk == ((void*)0))
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_6);
 if (!VAR_9)
  return -VAR_2;







 if (!VAR_9->make_request_fn)
  return -VAR_2;

 VAR_10 = FUNC_2(VAR_7, 0);
 VAR_10->bi_end_io = VAR_4;
 VAR_10->bi_bdev = VAR_6;
 VAR_10->bi_private = &VAR_5;

 FUNC_4(VAR_10);
 FUNC_6(VAR_3, VAR_10);
 FUNC_7(&VAR_5);






 if (VAR_8)
               *VAR_8 = VAR_10->bi_sector;

 if (!FUNC_3(VAR_10, VAR_0))
  VAR_11 = -VAR_1;

 FUNC_5(VAR_10);
 return VAR_11;
}
