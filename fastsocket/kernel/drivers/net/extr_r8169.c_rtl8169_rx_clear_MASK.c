
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ RxDescArray; scalar_t__* Rx_databuff; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->Rx_databuff[VAR_2]) {
   FUNC_0(VAR_1, VAR_1->Rx_databuff + VAR_2,
         VAR_1->RxDescArray + VAR_2);
  }
 }
}
