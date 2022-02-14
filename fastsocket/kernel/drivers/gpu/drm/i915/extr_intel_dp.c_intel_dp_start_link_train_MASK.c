
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct intel_dp {int* train_set; int lane_count; int DP; int dpcd; int link_configuration; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct drm_encoder base; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 TYPE_2__* FUNC_3 (struct intel_dp*) ;
 scalar_t__ FUNC_4 (int*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct intel_dp*,int ,int ,int ) ;
 int FUNC_8 (struct intel_dp*,int*) ;
 int FUNC_9 (struct intel_dp*,int ,int) ;
 int FUNC_10 (struct intel_dp*,int *) ;
 int FUNC_11 (struct intel_dp*,int*) ;
 int FUNC_12 (int*,int ,int) ;

void
FUNC_13(struct intel_dp *VAR_8)
{
 struct drm_encoder *VAR_9 = &FUNC_3(VAR_8)->base.base;
 struct drm_device *VAR_10 = VAR_9->dev;
 int VAR_11;
 uint8_t VAR_12;
 bool VAR_13 = 0;
 int VAR_14, VAR_15;
 uint32_t VAR_16 = VAR_8->DP;

 if (FUNC_2(VAR_10))
  FUNC_6(VAR_9);


 FUNC_7(VAR_8, VAR_0,
      VAR_8->link_configuration,
      VAR_1);

 VAR_16 |= VAR_4;

 FUNC_12(VAR_8->train_set, 0, 4);
 VAR_12 = 0xff;
 VAR_14 = 0;
 VAR_15 = 0;
 VAR_13 = 0;
 for (;;) {

  uint8_t VAR_17[VAR_3];

  FUNC_10(VAR_8, &VAR_16);


  if (!FUNC_9(VAR_8, VAR_16,
          VAR_5 |
          VAR_2))
   break;

  FUNC_5(VAR_8->dpcd);
  if (!FUNC_8(VAR_8, VAR_17)) {
   FUNC_1("failed to get link status\n");
   break;
  }

  if (FUNC_4(VAR_17, VAR_8->lane_count)) {
   FUNC_0("clock recovery OK\n");
   VAR_13 = 1;
   break;
  }


  for (VAR_11 = 0; VAR_11 < VAR_8->lane_count; VAR_11++)
   if ((VAR_8->train_set[VAR_11] & VAR_6) == 0)
    break;
  if (VAR_11 == VAR_8->lane_count) {
   ++VAR_15;
   if (VAR_15 == 5) {
    FUNC_0("too many full retries, give up\n");
    break;
   }
   FUNC_12(VAR_8->train_set, 0, 4);
   VAR_14 = 0;
   continue;
  }


  if ((VAR_8->train_set[0] & VAR_7) == VAR_12) {
   ++VAR_14;
   if (VAR_14 == 5) {
    FUNC_0("too many voltage retries, give up\n");
    break;
   }
  } else
   VAR_14 = 0;
  VAR_12 = VAR_8->train_set[0] & VAR_7;


  FUNC_11(VAR_8, VAR_17);
 }

 VAR_8->DP = VAR_16;
}
