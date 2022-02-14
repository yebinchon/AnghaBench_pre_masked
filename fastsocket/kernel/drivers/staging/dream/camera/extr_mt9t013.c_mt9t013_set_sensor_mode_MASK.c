
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static int32_t FUNC_4(int VAR_5, int VAR_6)
{
 int32_t VAR_7 = 0;
 VAR_7 = FUNC_0(VAR_4->addr,
   VAR_3,
   VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_5) {
 case 130:
  VAR_7 = FUNC_3(VAR_5, VAR_6);
  break;

 case 128:
  VAR_7 = FUNC_2(VAR_5);
  break;

 case 129:
  VAR_7 = FUNC_1(VAR_5);
  break;

 default:
  return -VAR_0;
 }


 if (VAR_7 >= 0)
  return FUNC_0(VAR_4->addr,
    VAR_3,
    VAR_2);
 return VAR_7;
}
