
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int * FUNC_1 (int,int *) ;
 TYPE_1__* VAR_2 ;

void FUNC_2 (int VAR_3)
{
 u8 *VAR_4;
 u32 VAR_5;

 if (VAR_3 >= VAR_0)
  return;
 VAR_2 [VAR_3].state = VAR_1;


 while ((VAR_4 = FUNC_1(VAR_3, &VAR_5)))
  FUNC_0(VAR_3, VAR_4);
}
