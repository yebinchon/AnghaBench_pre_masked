
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qlen; } ;
struct async_chainiv_ctx {int err; int postponed; int state; TYPE_1__ queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct async_chainiv_ctx *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->err;

 if (!VAR_2->queue.qlen) {
  FUNC_3();
  FUNC_1(VAR_0, &VAR_2->state);

  if (!VAR_2->queue.qlen ||
      FUNC_4(VAR_0, &VAR_2->state))
   goto out;
 }

 VAR_3 = FUNC_2(VAR_1, &VAR_2->postponed);
 FUNC_0(!VAR_3);

out:
 return VAR_4;
}
