
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x {int* mf_config; int flags; } ;
struct TYPE_2__ {int config; } ;


 int FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 size_t FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_8(struct bnx2x *VAR_6)
{
 int VAR_7, VAR_8 = (FUNC_5(VAR_6) ? 2 : 1);

 if (FUNC_1(VAR_6))
  return;
 for (VAR_7 = VAR_4; VAR_7 < FUNC_0(VAR_6); VAR_7++) {
  int VAR_9 = VAR_8 * (2 * VAR_7 + FUNC_3(VAR_6)) + FUNC_2(VAR_6);

  if (VAR_9 >= VAR_0)
   break;

  VAR_6->mf_config[VAR_7] =
   FUNC_7(VAR_6, VAR_5[VAR_9].config);
 }
 if (VAR_6->mf_config[FUNC_4(VAR_6)] & VAR_1) {
  FUNC_6(VAR_3, "mf_cfg function disabled\n");
  VAR_6->flags |= VAR_2;
 } else {
  FUNC_6(VAR_3, "mf_cfg function enabled\n");
  VAR_6->flags &= ~VAR_2;
 }
}
