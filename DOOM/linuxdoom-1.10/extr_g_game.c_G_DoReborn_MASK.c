
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* mo; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_6__ {int * player; } ;


 scalar_t__ FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;

void FUNC_3 (int VAR_7)
{
    int VAR_8;

    if (!VAR_4)
    {

 VAR_3 = VAR_2;
    }
    else
    {



 VAR_5[VAR_7].mo->player = ((void*)0);


 if (VAR_1)
 {
     FUNC_1 (VAR_7);
     return;
 }

 if (FUNC_0 (VAR_7, &VAR_6[VAR_7]) )
 {
     FUNC_2 (&VAR_6[VAR_7]);
     return;
 }


 for (VAR_8=0 ; VAR_8<VAR_0 ; VAR_8++)
 {
     if (FUNC_0 (VAR_7, &VAR_6[VAR_8]) )
     {
  VAR_6[VAR_8].type = VAR_7+1;
  FUNC_2 (&VAR_6[VAR_8]);
  VAR_6[VAR_8].type = VAR_8+1;
  return;
     }

 }
 FUNC_2 (&VAR_6[VAR_7]);
    }
}
