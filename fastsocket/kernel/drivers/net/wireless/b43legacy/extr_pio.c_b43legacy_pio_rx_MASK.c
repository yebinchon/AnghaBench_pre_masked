
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int* data; } ;
struct b43legacy_rxhdr_fw3 {int mac_status; } ;
struct b43legacy_pioqueue {scalar_t__ mmio_base; TYPE_1__* dev; } ;
struct b43legacy_hwtxstatus {int dummy; } ;
typedef int __le16 ;
struct TYPE_3__ {int wl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,struct b43legacy_hwtxstatus*) ;
 int FUNC_1 (struct b43legacy_pioqueue*,int ) ;
 int FUNC_2 (struct b43legacy_pioqueue*,int ,int) ;
 int FUNC_3 (TYPE_1__*,struct sk_buff*,struct b43legacy_rxhdr_fw3*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct b43legacy_pioqueue*,int,char*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;

void FUNC_12(struct b43legacy_pioqueue *VAR_7)
{
 __le16 VAR_8[21] = { 0 };
 struct b43legacy_rxhdr_fw3 *VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 u16 VAR_12;
 int VAR_13;
 int VAR_14;
 struct sk_buff *VAR_15;

 VAR_10 = FUNC_1(VAR_7, VAR_2);
 if (!(VAR_10 & VAR_3))
  return;
 FUNC_2(VAR_7, VAR_2,
       VAR_3);

 for (VAR_13 = 0; VAR_13 < 10; VAR_13++) {
  VAR_10 = FUNC_1(VAR_7, VAR_2);
  if (VAR_10 & VAR_4)
   goto data_ready;
  FUNC_10(10);
 }
 FUNC_4(VAR_7->dev->wl, "PIO RX timed out\n");
 return;
data_ready:

 VAR_11 = FUNC_1(VAR_7, VAR_5);
 if (FUNC_11(VAR_11 > 0x700)) {
  FUNC_8(VAR_7, 0, "len > 0x700");
  return;
 }
 if (FUNC_11(VAR_11 == 0 && VAR_7->mmio_base !=
       VAR_1)) {
  FUNC_8(VAR_7, 0, "len == 0");
  return;
 }
 VAR_8[0] = FUNC_5(VAR_11);
 if (VAR_7->mmio_base == VAR_1)
  VAR_14 = 14 / sizeof(u16);
 else
  VAR_14 = 18 / sizeof(u16);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
  VAR_10 = FUNC_1(VAR_7, VAR_5);
  VAR_8[VAR_13 + 1] = FUNC_5(VAR_10);
 }
 VAR_9 = (struct b43legacy_rxhdr_fw3 *)VAR_8;
 VAR_12 = FUNC_7(VAR_9->mac_status);
 if (VAR_12 & VAR_6) {
  FUNC_8(VAR_7,
        (VAR_7->mmio_base == VAR_0),
        "Frame FCS error");
  return;
 }
 if (VAR_7->mmio_base == VAR_1) {

  struct b43legacy_hwtxstatus *VAR_16;

  VAR_16 = (struct b43legacy_hwtxstatus *)(VAR_8 + 1);
  FUNC_0(VAR_7->dev, VAR_16);

  return;
 }

 VAR_15 = FUNC_6(VAR_11);
 if (FUNC_11(!VAR_15)) {
  FUNC_8(VAR_7, 1, "OOM");
  return;
 }
 FUNC_9(VAR_15, VAR_11);
 for (VAR_13 = 0; VAR_13 < VAR_11 - 1; VAR_13 += 2) {
  VAR_10 = FUNC_1(VAR_7, VAR_5);
  *((__le16 *)(VAR_15->data + VAR_13)) = FUNC_5(VAR_10);
 }
 if (VAR_11 % 2) {
  VAR_10 = FUNC_1(VAR_7, VAR_5);
  VAR_15->data[VAR_11 - 1] = (VAR_10 & 0x00FF);
 }
 FUNC_3(VAR_7->dev, VAR_15, VAR_9);
}
