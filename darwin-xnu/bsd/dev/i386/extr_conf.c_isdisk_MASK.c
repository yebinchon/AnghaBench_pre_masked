
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t dev_t ;
struct TYPE_2__ {int d_type; } ;


 int VAR_0 ;
 size_t VAR_1 ;


 TYPE_1__* VAR_2 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;

int
FUNC_2(dev_t VAR_3, int VAR_4)
{
 dev_t VAR_5 = FUNC_1(VAR_3);

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_0(VAR_5);
  if (VAR_5 == VAR_1) {
   break;
  }

 case 129:
  if (VAR_2[VAR_5].d_type == VAR_0) {
   return (1);
  }
  break;
 }
 return(0);
}
