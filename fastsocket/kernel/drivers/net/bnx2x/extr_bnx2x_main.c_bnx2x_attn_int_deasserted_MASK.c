
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ int_block; } ;
struct bnx2x {int attn_state; TYPE_1__ common; struct attn_route* attn_group; int sp_rtnl_task; int recovery_state; } ;
struct attn_route {int* sig; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,scalar_t__) ;
 int FUNC_8 (struct bnx2x*,int) ;
 int FUNC_9 (struct bnx2x*,int) ;
 int FUNC_10 (struct bnx2x*,int) ;
 int FUNC_11 (struct bnx2x*,int) ;
 int FUNC_12 (struct bnx2x*,int) ;
 scalar_t__ FUNC_13 (struct bnx2x*,int*,int) ;
 int FUNC_14 (struct bnx2x*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct bnx2x*) ;
 int FUNC_17 (struct bnx2x*,scalar_t__) ;
 int FUNC_18 (int *,int ) ;

__attribute__((used)) static void FUNC_19(struct bnx2x *VAR_16, u32 VAR_17)
{
 struct attn_route VAR_18, *VAR_19;
 int VAR_20 = FUNC_1(VAR_16);
 int VAR_21;
 u32 VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 bool VAR_25 = 0;



 FUNC_6(VAR_16);

 if (FUNC_13(VAR_16, &VAR_25, 1)) {

  VAR_16->recovery_state = VAR_1;
  FUNC_18(&VAR_16->sp_rtnl_task, 0);

  FUNC_14(VAR_16);






  FUNC_16(VAR_16);
  return;
 }

 VAR_18.sig[0] = FUNC_4(VAR_16, VAR_8 + VAR_20*4);
 VAR_18.sig[1] = FUNC_4(VAR_16, VAR_9 + VAR_20*4);
 VAR_18.sig[2] = FUNC_4(VAR_16, VAR_10 + VAR_20*4);
 VAR_18.sig[3] = FUNC_4(VAR_16, VAR_11 + VAR_20*4);
 if (!FUNC_2(VAR_16))
  VAR_18.sig[4] =
        FUNC_4(VAR_16, VAR_12 + VAR_20*4);
 else
  VAR_18.sig[4] = 0;

 FUNC_3(VAR_15, "attn: %08x %08x %08x %08x %08x\n",
    VAR_18.sig[0], VAR_18.sig[1], VAR_18.sig[2], VAR_18.sig[3], VAR_18.sig[4]);

 for (VAR_21 = 0; VAR_21 < VAR_7; VAR_21++) {
  if (VAR_17 & (1 << VAR_21)) {
   VAR_19 = &VAR_16->attn_group[VAR_21];

   FUNC_3(VAR_15, "group[%d]: %08x %08x %08x %08x %08x\n",
      VAR_21,
      VAR_19->sig[0], VAR_19->sig[1],
      VAR_19->sig[2], VAR_19->sig[3],
      VAR_19->sig[4]);

   FUNC_12(VAR_16,
     VAR_18.sig[4] & VAR_19->sig[4]);
   FUNC_11(VAR_16,
     VAR_18.sig[3] & VAR_19->sig[3]);
   FUNC_9(VAR_16,
     VAR_18.sig[1] & VAR_19->sig[1]);
   FUNC_10(VAR_16,
     VAR_18.sig[2] & VAR_19->sig[2]);
   FUNC_8(VAR_16,
     VAR_18.sig[0] & VAR_19->sig[0]);
  }
 }

 FUNC_16(VAR_16);

 if (VAR_16->common.int_block == VAR_6)
  VAR_22 = (VAR_3 + VAR_20*32 +
       VAR_2);
 else
  VAR_22 = (VAR_0 + VAR_5*8);

 VAR_23 = ~VAR_17;
 FUNC_3(VAR_15, "about to mask 0x%08x at %s addr 0x%x\n", VAR_23,
    (VAR_16->common.int_block == VAR_6) ? "HC" : "IGU", VAR_22);
 FUNC_5(VAR_16, VAR_22, VAR_23);

 if (~VAR_16->attn_state & VAR_17)
  FUNC_0("IGU ERROR\n");

 VAR_22 = VAR_20 ? VAR_14 :
     VAR_13;

 FUNC_7(VAR_16, VAR_4 + VAR_20);
 VAR_24 = FUNC_4(VAR_16, VAR_22);

 FUNC_3(VAR_15, "aeu_mask %x  newly deasserted %x\n",
    VAR_24, VAR_17);
 VAR_24 |= (VAR_17 & 0x3ff);
 FUNC_3(VAR_15, "new mask %x\n", VAR_24);

 FUNC_5(VAR_16, VAR_22, VAR_24);
 FUNC_17(VAR_16, VAR_4 + VAR_20);

 FUNC_3(VAR_15, "attn_state %x\n", VAR_16->attn_state);
 VAR_16->attn_state &= ~VAR_17;
 FUNC_3(VAR_15, "new state %x\n", VAR_16->attn_state);
}
