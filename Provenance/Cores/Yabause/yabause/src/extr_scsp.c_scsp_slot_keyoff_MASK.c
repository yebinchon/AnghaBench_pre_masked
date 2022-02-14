
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ecurp; void* ecnt; int enxt; void* ecmp; int eincr; int * einc; } ;
typedef TYPE_1__ slot_t ;
struct TYPE_5__ {TYPE_1__* slot; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1 (slot_t *VAR_5)
{

  if (VAR_5->ecurp != VAR_2)
    {
      FUNC_0 ("key off slot %d\n", VAR_5 - &(VAR_3.slot[0]));


      if (VAR_5->ecurp == VAR_0)
        VAR_5->ecnt = VAR_1 - VAR_5->ecnt;
      VAR_5->einc = &VAR_5->eincr;
      VAR_5->ecmp = VAR_1;
      VAR_5->ecurp = VAR_2;
      VAR_5->enxt = VAR_4;
    }
}
