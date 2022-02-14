
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct intel_dp {int lane_count; int dpcd; int DP; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_dp*,int *) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*,int ,int) ;
 int FUNC_8 (struct intel_dp*,int *) ;
 int FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct intel_dp*,int *) ;

void
FUNC_11(struct intel_dp *VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6, VAR_7;
 uint32_t VAR_8 = VAR_4->DP;


 VAR_6 = 0;
 VAR_7 = 0;
 VAR_5 = 0;
 for (;;) {
  uint8_t VAR_9[VAR_1];

  if (VAR_7 > 5) {
   FUNC_1("failed to train DP, aborting\n");
   FUNC_6(VAR_4);
   break;
  }

  FUNC_8(VAR_4, &VAR_8);


  if (!FUNC_7(VAR_4, VAR_8,
          VAR_2 |
          VAR_0))
   break;

  FUNC_4(VAR_4->dpcd);
  if (!FUNC_5(VAR_4, VAR_9))
   break;


  if (!FUNC_3(VAR_9, VAR_4->lane_count)) {
   FUNC_9(VAR_4);
   VAR_7++;
   continue;
  }

  if (FUNC_2(VAR_9, VAR_4->lane_count)) {
   VAR_5 = 1;
   break;
  }


  if (VAR_6 > 5) {
   FUNC_6(VAR_4);
   FUNC_9(VAR_4);
   VAR_6 = 0;
   VAR_7++;
   continue;
  }


  FUNC_10(VAR_4, VAR_9);
  ++VAR_6;
 }

 if (VAR_5)
  FUNC_0("Channel EQ done. DP Training successfull\n");

 FUNC_7(VAR_4, VAR_8, VAR_3);
}
