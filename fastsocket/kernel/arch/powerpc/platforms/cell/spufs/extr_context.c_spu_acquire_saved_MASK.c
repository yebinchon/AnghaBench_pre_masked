
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_context {scalar_t__ state; int sched_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct spu_context*) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct spu_context*) ;
 int FUNC_3 (struct spu_context*) ;

int FUNC_4(struct spu_context *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->state != VAR_1) {
  FUNC_0(VAR_0, &VAR_3->sched_flags);
  FUNC_3(VAR_3);
 }

 return 0;
}
