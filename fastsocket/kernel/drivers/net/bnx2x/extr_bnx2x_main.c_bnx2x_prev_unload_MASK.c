
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int feature_config_flags; } ;
struct bnx2x {TYPE_1__ link_params; } ;
struct TYPE_4__ {scalar_t__ aer; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (struct bnx2x*,int,int) ;
 int FUNC_6 (struct bnx2x*,int ,int ) ;
 scalar_t__ FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*) ;
 TYPE_2__* FUNC_9 (struct bnx2x*) ;
 int VAR_12 ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct bnx2x *VAR_13)
{
 int VAR_14 = 10;
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 FUNC_0("Entering Previous Unload Flow\n");




 FUNC_8(VAR_13);


 VAR_17 = (FUNC_2(VAR_13) <= 5) ?
        (VAR_10 + FUNC_2(VAR_13) * 8) :
        (VAR_11 + (FUNC_2(VAR_13) - 6) * 8);

 VAR_18 = FUNC_4(VAR_13, VAR_17);
 if (VAR_18) {
  if (VAR_18 & VAR_5) {
   FUNC_0("Release Previously held NVRAM lock\n");
   FUNC_5(VAR_13, VAR_9,
          (VAR_7 << FUNC_3(VAR_13)));
  }

  FUNC_0("Release Previously held hw lock\n");
  FUNC_5(VAR_13, VAR_17, 0xffffffff);
 } else
  FUNC_0("No need to release hw/nvram locks\n");

 if (VAR_6 & FUNC_4(VAR_13, VAR_8)) {
  FUNC_0("Release previously held alr\n");
  FUNC_12(VAR_13);
 }

 do {
  int VAR_19 = 0;

  VAR_16 = FUNC_6(VAR_13, VAR_1, 0);
  if (!VAR_16) {
   FUNC_1("MCP response failure, aborting\n");
   VAR_15 = -VAR_2;
   break;
  }

  VAR_15 = FUNC_13(&VAR_12);
  if (VAR_15) {
   FUNC_1("Cannot check for AER; Received %d when tried to take lock\n",
      VAR_15);
  } else {

   VAR_19 = !!(FUNC_9(VAR_13) &&
     FUNC_9(VAR_13)->aer);
   FUNC_15(&VAR_12);
  }

  if (VAR_16 == VAR_4 || VAR_19) {
   VAR_15 = FUNC_10(VAR_13);
   break;
  }


  VAR_15 = FUNC_11(VAR_13);
  if (VAR_15 != VAR_0)
   break;

  FUNC_14(20);
 } while (--VAR_14);

 if (!VAR_14 || VAR_15) {
  FUNC_1("Failed unloading previous driver, aborting\n");
  VAR_15 = -VAR_2;
 }


 if (FUNC_7(VAR_13))
  VAR_13->link_params.feature_config_flags |=
   VAR_3;

 FUNC_0("Finished Previous Unload Flow [%d]\n", VAR_15);

 return VAR_15;
}
