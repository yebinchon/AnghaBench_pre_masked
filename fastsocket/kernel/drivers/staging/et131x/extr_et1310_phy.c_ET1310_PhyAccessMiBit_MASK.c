
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct et131x_adapter {int dummy; } ;


 int FUNC_0 (struct et131x_adapter*,int,int*) ;
 int FUNC_1 (struct et131x_adapter*,int,int) ;




void FUNC_2(struct et131x_adapter *VAR_0, uint16_t VAR_1,
      uint16_t VAR_2, uint16_t VAR_3, uint8_t *VAR_4)
{
 uint16_t VAR_5;
 uint16_t VAR_6 = 0;


 VAR_6 = 0x0001 << VAR_3;


 FUNC_0(VAR_0, VAR_2, &VAR_5);

 switch (VAR_1) {
 case 129:
  if (VAR_4 != ((void*)0))
   *VAR_4 = (VAR_5 & VAR_6) >> VAR_3;
  break;

 case 128:
  VAR_5 |= VAR_6;
  FUNC_1(VAR_0, VAR_2, VAR_5);
  break;

 case 130:
  VAR_5 &= ~VAR_6;
  FUNC_1(VAR_0, VAR_2, VAR_5);
  break;

 default:
  break;
 }
}
