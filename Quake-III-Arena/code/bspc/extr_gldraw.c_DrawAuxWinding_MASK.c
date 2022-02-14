
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,double) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5 (winding_t *VAR_3)
{
 int VAR_4;

 if (!VAR_2)
  return;

 FUNC_1 (0,0,0,0.5);
 FUNC_0 (VAR_0);
 for (VAR_4=0 ; VAR_4<VAR_3->numpoints ; VAR_4++)
  FUNC_4 (VAR_3->p[VAR_4][0],VAR_3->p[VAR_4][1],VAR_3->p[VAR_4][2] );
 FUNC_2 ();

 FUNC_1 (1,0,0,0.3);
 FUNC_0 (VAR_1);
 for (VAR_4=0 ; VAR_4<VAR_3->numpoints ; VAR_4++)
  FUNC_4 (VAR_3->p[VAR_4][0],VAR_3->p[VAR_4][1],VAR_3->p[VAR_4][2] );
 FUNC_2 ();

 FUNC_3 ();
}
