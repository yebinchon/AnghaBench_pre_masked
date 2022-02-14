
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct request* last_merge; } ;
struct request {struct bio* bio; int cmd_flags; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct request_queue*,struct bio*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (struct request_queue*,struct request*,struct bio*) ;

int FUNC_6(struct request_queue *VAR_2, struct request *VAR_3,
        struct bio *VAR_4)
{
 if (FUNC_4(VAR_3) + FUNC_1(VAR_4) >
     FUNC_3(VAR_3)) {
  VAR_3->cmd_flags |= VAR_1;
  if (VAR_3 == VAR_2->last_merge)
   VAR_2->last_merge = ((void*)0);
  return 0;
 }
 if (!FUNC_0(VAR_4, VAR_0))
  FUNC_2(VAR_2, VAR_4);
 if (!FUNC_0(VAR_3->bio, VAR_0))
  FUNC_2(VAR_2, VAR_3->bio);

 return FUNC_5(VAR_2, VAR_3, VAR_4);
}
