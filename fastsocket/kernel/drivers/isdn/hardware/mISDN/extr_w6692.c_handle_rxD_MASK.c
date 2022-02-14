
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * rx_skb; int err_rx; int err_crc; } ;
struct w6692_hw {TYPE_1__ dch; int name; } ;


 int FUNC_0 (struct w6692_hw*,int ) ;
 int FUNC_1 (struct w6692_hw*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct w6692_hw*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct w6692_hw *VAR_9) {
 u8 VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(VAR_9, VAR_5);
 if (VAR_10 & (VAR_7 | VAR_6 | VAR_8)) {
  if (VAR_10 & VAR_7) {
   FUNC_4("%s: D-channel RDOV\n", VAR_9->name);



  }
  if (VAR_10 & VAR_6) {
   FUNC_4("%s: D-channel CRC error\n", VAR_9->name);



  }
  if (VAR_10 & VAR_8) {
   FUNC_4("%s: D-channel ABORT\n", VAR_9->name);



  }
  if (VAR_9->dch.rx_skb)
   FUNC_3(VAR_9->dch.rx_skb);
  VAR_9->dch.rx_skb = ((void*)0);
  FUNC_2(VAR_9, VAR_0, VAR_1 | VAR_2);
 } else {
  VAR_11 = FUNC_0(VAR_9, VAR_4) & (VAR_3 - 1);
  if (VAR_11 == 0)
   VAR_11 = VAR_3;
  FUNC_1(VAR_9, VAR_11);
  FUNC_5(&VAR_9->dch);
 }
}
