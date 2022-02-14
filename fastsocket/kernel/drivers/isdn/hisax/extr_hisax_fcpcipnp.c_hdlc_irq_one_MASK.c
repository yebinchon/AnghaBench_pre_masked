
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritz_bcs {int channel; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fritz_bcs*,int) ;
 int FUNC_2 (struct fritz_bcs*) ;
 int FUNC_3 (struct fritz_bcs*) ;

__attribute__((used)) static void FUNC_4(struct fritz_bcs *VAR_3, u32 VAR_4)
{
 FUNC_0(0x10, "ch%d stat %#x", VAR_3->channel, VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_0(0x10, "RPR");
  FUNC_1(VAR_3, VAR_4);
 }
 if (VAR_4 & VAR_1) {
  FUNC_0(0x10, "XDU");
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
  return;
 }
 if (VAR_4 & VAR_2) {
  FUNC_0(0x10, "XPR");
  FUNC_3(VAR_3);
 }
}
