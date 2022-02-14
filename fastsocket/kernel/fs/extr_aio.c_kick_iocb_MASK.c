
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tsk; } ;
struct kiocb {TYPE_1__ ki_obj; } ;


 scalar_t__ FUNC_0 (struct kiocb*) ;
 int FUNC_1 (struct kiocb*) ;
 int FUNC_2 (struct kiocb*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct kiocb *VAR_0)
{


 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0);
         FUNC_3(VAR_0->ki_obj.tsk);
  return;
 }

 FUNC_2(VAR_0);
}
