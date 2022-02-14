
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* v3_cpuresume ) (int) ;} ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;

int
FUNC_4(int VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_0, VAR_5);
 switch(VAR_1) {
 case 130:
 case 129:
 default:
  VAR_4 = -1;
  break;
 case 128:
  VAR_4 = (*(VAR_2->v3_cpuresume))(VAR_3);
  break;
 };
 FUNC_0();
 FUNC_2(&VAR_0, VAR_5);

 return VAR_4;
}
