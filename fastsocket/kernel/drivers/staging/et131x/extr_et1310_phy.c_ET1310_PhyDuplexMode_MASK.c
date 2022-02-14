
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct et131x_adapter {int dummy; } ;


 int FUNC_0 (struct et131x_adapter*,int ,scalar_t__*) ;
 int FUNC_1 (struct et131x_adapter*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2(struct et131x_adapter *VAR_2, uint16_t VAR_3)
{
 uint16_t VAR_4;

 FUNC_0(VAR_2, VAR_0, &VAR_4);

 if (VAR_3 == VAR_1) {

  VAR_4 |= 0x100;
  FUNC_1(VAR_2, VAR_0, VAR_4);
 } else {

  VAR_4 &= ~0x100;
  FUNC_1(VAR_2, VAR_0, VAR_4);
 }
}
