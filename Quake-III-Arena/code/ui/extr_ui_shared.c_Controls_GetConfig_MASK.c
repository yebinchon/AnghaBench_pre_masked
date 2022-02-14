
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bind1; int bind2; int command; } ;


 int FUNC_0 (int ,int*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1( void )
{
 int VAR_2;
 int VAR_3[2];


 for (VAR_2=0; VAR_2 < VAR_0; VAR_2++)
 {

  FUNC_0(VAR_1[VAR_2].command, VAR_3);

  VAR_1[VAR_2].bind1 = VAR_3[0];
  VAR_1[VAR_2].bind2 = VAR_3[1];
 }
}
