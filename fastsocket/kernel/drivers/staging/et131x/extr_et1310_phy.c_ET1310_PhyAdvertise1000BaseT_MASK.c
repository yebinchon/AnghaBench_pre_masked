
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct et131x_adapter {int dummy; } ;


 int FUNC_0 (struct et131x_adapter*,int ,int*) ;
 int FUNC_1 (struct et131x_adapter*,int ,int) ;
 int VAR_0 ;





void FUNC_2(struct et131x_adapter *VAR_1,
      uint16_t VAR_2)
{
 uint16_t VAR_3;


 FUNC_0(VAR_1, VAR_0, &VAR_3);


 VAR_3 &= ~0x0300;

 switch (VAR_2) {
 case 128:

  break;

 case 130:

  VAR_3 |= 0x0200;
  break;

 case 129:

  VAR_3 |= 0x0100;
  break;

 case 131:
 default:
  VAR_3 |= 0x0300;
  break;
 }


 FUNC_1(VAR_1, VAR_0, VAR_3);
}
