
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_mac_vals {int bmac_addr; int umac_addr; int xmac_addr; int emac_addr; int* bmac_val; void* umac_val; void* xmac_val; void* emac_val; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_18,
     struct bnx2x_mac_vals *VAR_19)
{
 u32 VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 bool VAR_25 = 0;
 u8 VAR_26 = FUNC_1(VAR_18);


 VAR_19->bmac_addr = 0;
 VAR_19->umac_addr = 0;
 VAR_19->xmac_addr = 0;
 VAR_19->emac_addr = 0;

 VAR_24 = FUNC_4(VAR_18, VAR_10);

 if (!FUNC_3(VAR_18)) {
  VAR_20 = FUNC_4(VAR_18, VAR_11 + VAR_26 * 4);
  VAR_23 = VAR_7 << VAR_26;
  if ((VAR_23 & VAR_24) && VAR_20) {
   u32 VAR_27[2];
   FUNC_0("Disable bmac Rx\n");
   VAR_21 = FUNC_1(VAR_18) ? VAR_13
      : VAR_12;
   VAR_22 = FUNC_2(VAR_18) ? VAR_0
      : VAR_1;







   VAR_27[0] = FUNC_4(VAR_18, VAR_21 + VAR_22);
   VAR_27[1] = FUNC_4(VAR_18, VAR_21 + VAR_22 + 0x4);
   VAR_19->bmac_addr = VAR_21 + VAR_22;
   VAR_19->bmac_val[0] = VAR_27[0];
   VAR_19->bmac_val[1] = VAR_27[1];
   VAR_27[0] &= ~VAR_2;
   FUNC_5(VAR_18, VAR_19->bmac_addr, VAR_27[0]);
   FUNC_5(VAR_18, VAR_19->bmac_addr + 0x4, VAR_27[1]);
  }
  FUNC_0("Disable emac Rx\n");
  VAR_19->emac_addr = VAR_14 + FUNC_1(VAR_18)*4;
  VAR_19->emac_val = FUNC_4(VAR_18, VAR_19->emac_addr);
  FUNC_5(VAR_18, VAR_19->emac_addr, 0);
  VAR_25 = 1;
 } else {
  if (VAR_24 & VAR_9) {
   FUNC_0("Disable xmac Rx\n");
   VAR_21 = FUNC_1(VAR_18) ? VAR_6 : VAR_5;
   VAR_20 = FUNC_4(VAR_18, VAR_21 + VAR_17);
   FUNC_5(VAR_18, VAR_21 + VAR_17,
          VAR_20 & ~(1 << 1));
   FUNC_5(VAR_18, VAR_21 + VAR_17,
          VAR_20 | (1 << 1));
   VAR_19->xmac_addr = VAR_21 + VAR_16;
   VAR_19->xmac_val = FUNC_4(VAR_18, VAR_19->xmac_addr);
   FUNC_5(VAR_18, VAR_19->xmac_addr, 0);
   VAR_25 = 1;
  }
  VAR_23 = VAR_8 << VAR_26;
  if (VAR_23 & VAR_24) {
   FUNC_0("Disable umac Rx\n");
   VAR_21 = FUNC_1(VAR_18) ? VAR_4 : VAR_3;
   VAR_19->umac_addr = VAR_21 + VAR_15;
   VAR_19->umac_val = FUNC_4(VAR_18, VAR_19->umac_addr);
   FUNC_5(VAR_18, VAR_19->umac_addr, 0);
   VAR_25 = 1;
  }
 }

 if (VAR_25)
  FUNC_6(20);
}
