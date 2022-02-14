
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int* mf_config; int flags; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_7, u32 VAR_8)
{
 FUNC_1(VAR_0, "dcc_event 0x%x\n", VAR_8);

 if (VAR_8 & VAR_4) {






  if (VAR_7->mf_config[FUNC_0(VAR_7)] & VAR_5) {
   FUNC_1(VAR_0, "mf_cfg function disabled\n");
   VAR_7->flags |= VAR_6;

   FUNC_3(VAR_7);
  } else {
   FUNC_1(VAR_0, "mf_cfg function enabled\n");
   VAR_7->flags &= ~VAR_6;

   FUNC_4(VAR_7);
  }
  VAR_8 &= ~VAR_4;
 }
 if (VAR_8 & VAR_3) {
  FUNC_2(VAR_7);
  VAR_8 &= ~VAR_3;
 }


 if (VAR_8)
  FUNC_5(VAR_7, VAR_1, 0);
 else
  FUNC_5(VAR_7, VAR_2, 0);
}
