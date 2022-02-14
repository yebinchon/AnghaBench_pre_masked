
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x {int fw_drv_pulse_wr_seq; scalar_t__ state; scalar_t__ current_interval; int timer; int dev; } ;
struct TYPE_2__ {int mcp_pulse_mb; } ;


 int FUNC_0 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 int FUNC_8 (struct bnx2x*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_6)
{
 struct bnx2x *VAR_7 = (struct bnx2x *) VAR_6;

 if (!FUNC_10(VAR_7->dev))
  return;

 if (FUNC_3(VAR_7) &&
     !FUNC_2(VAR_7)) {
  int VAR_8 = FUNC_1(VAR_7);
  u32 VAR_9;
  u32 VAR_10;

  ++VAR_7->fw_drv_pulse_wr_seq;
  VAR_7->fw_drv_pulse_wr_seq &= VAR_1;

  VAR_9 = VAR_7->fw_drv_pulse_wr_seq;
  FUNC_6(VAR_7);

  VAR_10 = (FUNC_5(VAR_7, VAR_4[VAR_8].mcp_pulse_mb) &
        VAR_2);



  if ((VAR_9 != VAR_10) &&
      (VAR_9 != ((VAR_10 + 1) & VAR_2))) {

   FUNC_0("drv_pulse (0x%x) != mcp_pulse (0x%x)\n",
      VAR_9, VAR_10);
  }
 }

 if (VAR_7->state == VAR_0)
  FUNC_7(VAR_7, VAR_3);


 if (FUNC_4(VAR_7))
  FUNC_8(VAR_7);

 FUNC_9(&VAR_7->timer, VAR_5 + VAR_7->current_interval);
}
