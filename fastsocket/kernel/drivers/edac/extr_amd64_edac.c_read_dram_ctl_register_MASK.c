
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amd64_pvt {char* dct_sel_lo; char* dct_sel_hi; } ;
struct TYPE_2__ {int x86; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd64_pvt*,int ,char**) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_1 (struct amd64_pvt*) ;
 scalar_t__ FUNC_2 (struct amd64_pvt*) ;
 scalar_t__ FUNC_3 (struct amd64_pvt*) ;
 scalar_t__ FUNC_4 (struct amd64_pvt*) ;
 scalar_t__ FUNC_5 (struct amd64_pvt*) ;
 char* FUNC_6 (struct amd64_pvt*) ;
 char* FUNC_7 (struct amd64_pvt*) ;
 int FUNC_8 (char*,char*,...) ;

__attribute__((used)) static void FUNC_9(struct amd64_pvt *VAR_3)
{

 if (VAR_2.x86 == 0xf)
  return;

 if (!FUNC_0(VAR_3, VAR_1, &VAR_3->dct_sel_lo)) {
  FUNC_8("F2x110 (DCTSelLow): 0x%08x, High range addrs at: 0x%x\n",
   VAR_3->dct_sel_lo, FUNC_6(VAR_3));

  FUNC_8("  DCTs operate in %s mode.\n",
   (FUNC_2(VAR_3) ? "ganged" : "unganged"));

  if (!FUNC_2(VAR_3))
   FUNC_8("  Address range split per DCT: %s\n",
    (FUNC_3(VAR_3) ? "yes" : "no"));

  FUNC_8("  data interleave for ECC: %s, "
   "DRAM cleared since last warm reset: %s\n",
   (FUNC_1(VAR_3) ? "enabled" : "disabled"),
   (FUNC_5(VAR_3) ? "yes" : "no"));

  FUNC_8("  channel interleave: %s, "
   "interleave bits selector: 0x%x\n",
   (FUNC_4(VAR_3) ? "enabled" : "disabled"),
   FUNC_7(VAR_3));
 }

 FUNC_0(VAR_3, VAR_0, &VAR_3->dct_sel_hi);
}
