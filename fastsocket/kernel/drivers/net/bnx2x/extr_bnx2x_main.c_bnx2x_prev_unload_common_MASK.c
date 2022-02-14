
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x_mac_vals {int * bmac_val; scalar_t__ bmac_addr; int emac_val; scalar_t__ emac_addr; int umac_val; scalar_t__ umac_addr; int xmac_val; scalar_t__ xmac_addr; } ;
struct bnx2x {int link_params; } ;
typedef int mac_vals ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct bnx2x*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct bnx2x*,scalar_t__) ;
 int FUNC_5 (struct bnx2x*,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int) ;
 int FUNC_8 (struct bnx2x*) ;
 int FUNC_9 (struct bnx2x*,struct bnx2x_mac_vals*) ;
 int FUNC_10 (struct bnx2x*,int ,int) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct bnx2x_mac_vals*,int ,int) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct bnx2x *VAR_7)
{
 u32 VAR_8, VAR_9 = 0, VAR_10;
 bool VAR_11 = 0;
 struct bnx2x_mac_vals VAR_12;





 FUNC_0("Common unload Flow\n");

 FUNC_13(&VAR_12, 0, sizeof(VAR_12));

 if (FUNC_6(VAR_7))
  return FUNC_8(VAR_7);

 VAR_8 = FUNC_4(VAR_7, VAR_4);


 if (VAR_8 & VAR_2) {
  u32 VAR_13 = 1000;


  FUNC_9(VAR_7, &VAR_12);


  FUNC_12(&VAR_7->link_params, 0);




  if (VAR_8 & VAR_3) {
   VAR_9 = FUNC_4(VAR_7, VAR_1);
   if (VAR_9 == 0x7) {
    FUNC_0("UNDI previously loaded\n");
    VAR_11 = 1;

    FUNC_5(VAR_7, VAR_1, 0);

    FUNC_4(VAR_7, VAR_5);
   }
  }
  if (!FUNC_3(VAR_7))

   FUNC_5(VAR_7, VAR_6, 0);


  VAR_9 = FUNC_4(VAR_7, VAR_0);
  while (VAR_13) {
   u32 VAR_14 = VAR_9;

   VAR_9 = FUNC_4(VAR_7, VAR_0);
   if (!VAR_9)
    break;

   FUNC_0("BRB still has 0x%08x\n", VAR_9);


   if (VAR_14 > VAR_9)
    VAR_13 = 1000;
   else
    VAR_13--;


   if (VAR_11)
    FUNC_10(VAR_7, FUNC_2(VAR_7), 1);

   FUNC_14(10);
  }

  if (!VAR_13)
   FUNC_1("Failed to empty BRB, hope for the best\n");
 }


 FUNC_11(VAR_7);

 if (VAR_12.xmac_addr)
  FUNC_5(VAR_7, VAR_12.xmac_addr, VAR_12.xmac_val);
 if (VAR_12.umac_addr)
  FUNC_5(VAR_7, VAR_12.umac_addr, VAR_12.umac_val);
 if (VAR_12.emac_addr)
  FUNC_5(VAR_7, VAR_12.emac_addr, VAR_12.emac_val);
 if (VAR_12.bmac_addr) {
  FUNC_5(VAR_7, VAR_12.bmac_addr, VAR_12.bmac_val[0]);
  FUNC_5(VAR_7, VAR_12.bmac_addr + 4, VAR_12.bmac_val[1]);
 }

 VAR_10 = FUNC_7(VAR_7, VAR_11);
 if (VAR_10) {
  FUNC_8(VAR_7);
  return VAR_10;
 }

 return FUNC_8(VAR_7);
}
