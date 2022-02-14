
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_sivec; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ,int) ;

unsigned int FUNC_2(void)
{
 int VAR_2;
 unsigned long VAR_3;



        VAR_3 = FUNC_0(&VAR_0->ic_sivec);
        VAR_2 = VAR_3 >> 26;

 if (VAR_2 == 0)
  return(-1);
 return FUNC_1(VAR_1, VAR_2);
}
