
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;


 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ifnet*,int ) ;

u_int16_t
FUNC_3(
 struct ifnet *VAR_9)
{
 u_int16_t VAR_10 = 0;
 u_int32_t VAR_11 = FUNC_2(VAR_9, VAR_0);


 FUNC_1(0 <= VAR_11 && VAR_11 <= VAR_1);

 switch (VAR_11)
 {
 case 131:
  VAR_10 |= VAR_6;
  break;
 case 132:
  VAR_10 |= VAR_5;
  break;
 case 128:
 case 133:
  VAR_10 |= VAR_8;
  break;
 case 129:
  VAR_10 |= VAR_7;
  break;
 case 130:
  VAR_10 |= VAR_7;
  VAR_10 |= VAR_2;
  break;
 case 134:
  VAR_10 |= VAR_3;
  break;
 }

 if (FUNC_0(VAR_9))
 {
  VAR_10 |= VAR_4;
 }

 return VAR_10;
}
