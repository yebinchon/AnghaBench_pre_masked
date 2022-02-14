
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_hdr {int* addr1; } ;
struct atmel_private {int tx_buff_tail; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (struct atmel_private*,int) ;
 int FUNC_2 (struct atmel_private*,int,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct atmel_private *VAR_2,
         struct ieee80211_hdr *VAR_3,
         u8 *VAR_4, int VAR_5)
{
 u16 VAR_6;
 int VAR_7 = VAR_0 + VAR_5;

 if (!(VAR_6 = FUNC_1(VAR_2, VAR_7)))
  return;

 FUNC_0(VAR_2->dev, VAR_6, (u8 *)VAR_3, VAR_0);
 FUNC_0(VAR_2->dev, VAR_6 + VAR_0, VAR_4, VAR_5);
 VAR_2->tx_buff_tail += VAR_7;
 FUNC_2(VAR_2, VAR_3->addr1[0] & 0x01, VAR_7, VAR_6, VAR_1);
}
