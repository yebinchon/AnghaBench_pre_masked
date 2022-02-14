
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {scalar_t__ dirty_tx; scalar_t__ cur_tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct rtl8169_private *VAR_1)
{
 FUNC_0(VAR_1, VAR_1->dirty_tx, VAR_0);
 VAR_1->cur_tx = VAR_1->dirty_tx = 0;
}
