
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u64 ;
typedef int u32 ;
struct cpuinfo_x86 {int x86; int x86_model; } ;
struct amd64_pvt {unsigned int top_mem; unsigned int top_mem2; int nbcap; int dhar; int online_spare; int ecc_sym_sz; int dbam1; int F3; int dchr1; int dclr1; int dchr0; int dclr0; int dbam0; int F1; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct amd64_pvt*,int ,int *) ;
 int FUNC_2 (int ,int ,int*) ;
 struct cpuinfo_x86 VAR_14 ;
 int FUNC_3 (struct amd64_pvt*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct amd64_pvt*,unsigned int) ;
 scalar_t__ FUNC_7 (struct amd64_pvt*,unsigned int) ;
 int FUNC_8 (struct amd64_pvt*,unsigned int) ;
 int FUNC_9 (struct amd64_pvt*,unsigned int) ;
 int FUNC_10 (struct amd64_pvt*) ;
 int FUNC_11 (struct amd64_pvt*,unsigned int) ;
 int FUNC_12 (struct amd64_pvt*,unsigned int) ;
 int FUNC_13 (int ,unsigned int) ;
 int FUNC_14 (struct amd64_pvt*) ;
 int FUNC_15 (struct amd64_pvt*,unsigned int) ;
 int FUNC_16 (struct amd64_pvt*) ;

__attribute__((used)) static void FUNC_17(struct amd64_pvt *VAR_15)
{
 struct cpuinfo_x86 *VAR_16 = &VAR_14;
 u64 VAR_17;
 u32 VAR_18;
 unsigned VAR_19;





 FUNC_13(VAR_11, VAR_15->top_mem);
 FUNC_4("  TOP_MEM:  0x%016llx\n", VAR_15->top_mem);


 FUNC_13(VAR_10, VAR_17);
 if (VAR_17 & (1U << 21)) {
  FUNC_13(VAR_12, VAR_15->top_mem2);
  FUNC_4("  TOP_MEM2: 0x%016llx\n", VAR_15->top_mem2);
 } else
  FUNC_4("  TOP_MEM2 disabled.\n");

 FUNC_2(VAR_15->F3, VAR_13, &VAR_15->nbcap);

 FUNC_16(VAR_15);

 for (VAR_19 = 0; VAR_19 < VAR_7; VAR_19++) {
  u8 VAR_20;


  FUNC_15(VAR_15, VAR_19);

  VAR_20 = FUNC_9(VAR_15, VAR_19);
  if (!VAR_20)
   continue;

  FUNC_5("  DRAM range[%d], base: 0x%016llx; limit: 0x%016llx\n",
   VAR_19,
   FUNC_11(VAR_15, VAR_19),
   FUNC_12(VAR_15, VAR_19));

  FUNC_5("   IntlvEn=%s; Range access: %s%s IntlvSel=%d DstNode=%d\n",
   FUNC_7(VAR_15, VAR_19) ? "Enabled" : "Disabled",
   (VAR_20 & 0x1) ? "R" : "-",
   (VAR_20 & 0x2) ? "W" : "-",
   FUNC_8(VAR_15, VAR_19),
   FUNC_6(VAR_15, VAR_19));
 }

 FUNC_14(VAR_15);

 FUNC_2(VAR_15->F1, VAR_6, &VAR_15->dhar);
 FUNC_1(VAR_15, VAR_0, &VAR_15->dbam0);

 FUNC_2(VAR_15->F3, VAR_9, &VAR_15->online_spare);

 FUNC_1(VAR_15, VAR_4, &VAR_15->dclr0);
 FUNC_1(VAR_15, VAR_2, &VAR_15->dchr0);

 if (!FUNC_3(VAR_15)) {
  FUNC_1(VAR_15, VAR_5, &VAR_15->dclr1);
  FUNC_1(VAR_15, VAR_3, &VAR_15->dchr1);
 }

 VAR_15->ecc_sym_sz = 4;

 if (VAR_16->x86 >= 0x10) {
  FUNC_2(VAR_15->F3, VAR_8, &VAR_18);
  if (VAR_16->x86 != 0x16)

   FUNC_1(VAR_15, VAR_1, &VAR_15->dbam1);


  if ((VAR_16->x86 > 0x10 || VAR_16->x86_model > 7) && VAR_18 & FUNC_0(25))
   VAR_15->ecc_sym_sz = 8;
 }
 FUNC_10(VAR_15);
}
