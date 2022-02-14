
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int x86; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, int VAR_2)
{
 FUNC_1("F2x%d90 (DRAM Cfg Low): 0x%08x\n", VAR_2, VAR_1);

 FUNC_1("  DIMM type: %sbuffered; all DIMMs support ECC: %s\n",
  (VAR_1 & FUNC_0(16)) ? "un" : "",
  (VAR_1 & FUNC_0(19)) ? "yes" : "no");

 FUNC_1("  PAR/ERR parity: %s\n",
  (VAR_1 & FUNC_0(8)) ? "enabled" : "disabled");

 if (VAR_0.x86 == 0x10)
  FUNC_1("  DCT 128bit mode width: %s\n",
   (VAR_1 & FUNC_0(11)) ? "128b" : "64b");

 FUNC_1("  x4 logical DIMMs present: L0: %s L1: %s L2: %s L3: %s\n",
  (VAR_1 & FUNC_0(12)) ? "yes" : "no",
  (VAR_1 & FUNC_0(13)) ? "yes" : "no",
  (VAR_1 & FUNC_0(14)) ? "yes" : "no",
  (VAR_1 & FUNC_0(15)) ? "yes" : "no");
}
