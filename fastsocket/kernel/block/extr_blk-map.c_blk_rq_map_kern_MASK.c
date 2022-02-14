
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int * buffer; int bio; int cmd_flags; } ;
struct bio {int bi_rw; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct bio* FUNC_2 (struct request_queue*,void*,unsigned int,int ,int) ;
 struct bio* FUNC_3 (struct request_queue*,void*,unsigned int,int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct request_queue*,int *) ;
 int FUNC_6 (struct request_queue*,void*,unsigned int) ;
 int FUNC_7 (struct request_queue*,struct request*,struct bio*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (struct request_queue*) ;
 scalar_t__ FUNC_10 (struct request*) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct request_queue *VAR_5, struct request *VAR_6, void *VAR_7,
      unsigned int VAR_8, gfp_t VAR_9)
{
 int VAR_10 = FUNC_10(VAR_6) == VAR_2;
 int VAR_11 = 0;
 struct bio *VAR_12;
 int VAR_13;

 if (VAR_8 > (FUNC_9(VAR_5) << 9))
  return -VAR_1;
 if (!VAR_8 || !VAR_7)
  return -VAR_1;

 VAR_11 = !FUNC_6(VAR_5, VAR_7, VAR_8) || FUNC_8(VAR_7);
 if (VAR_11)
  VAR_12 = FUNC_2(VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);
 else
  VAR_12 = FUNC_3(VAR_5, VAR_7, VAR_8, VAR_9);

 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 if (FUNC_10(VAR_6) == VAR_4)
  VAR_12->bi_rw |= (1 << VAR_0);

 if (VAR_11)
  VAR_6->cmd_flags |= VAR_3;

 VAR_13 = FUNC_7(VAR_5, VAR_6, VAR_12);
 if (FUNC_11(VAR_13)) {

  FUNC_4(VAR_12);
  return VAR_13;
 }

 FUNC_5(VAR_5, &VAR_6->bio);
 VAR_6->buffer = ((void*)0);
 return 0;
}
