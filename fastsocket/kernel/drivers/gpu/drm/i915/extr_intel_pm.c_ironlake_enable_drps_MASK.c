
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int fmax; int fstart; int max_delay; int min_delay; int cur_delay; int last_count1; int last_count2; int last_time2; int last_time1; } ;
struct drm_i915_private {TYPE_1__ ips; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_0 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*,int) ;
 int VAR_25 ;
 int FUNC_8 (int ) ;
 int VAR_26 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int,int) ;

__attribute__((used)) static void FUNC_13(struct drm_device *VAR_27)
{
 struct drm_i915_private *VAR_28 = VAR_27->dev_private;
 u32 VAR_29 = FUNC_2(VAR_6);
 u8 VAR_30, VAR_31, VAR_32, VAR_33;

 FUNC_10(&VAR_26);


 FUNC_4(VAR_14, FUNC_2(VAR_14) | VAR_0);
 FUNC_4(VAR_22, FUNC_2(VAR_22) | VAR_23);


 FUNC_3(VAR_21, 100000);
 FUNC_3(VAR_20, 100000);


 FUNC_3(VAR_18, 90000);
 FUNC_3(VAR_19, 80000);

 FUNC_3(VAR_2, 1);


 VAR_30 = (VAR_29 & VAR_7) >> VAR_8;
 VAR_31 = (VAR_29 & VAR_9);
 VAR_32 = (VAR_29 & VAR_10) >>
  VAR_11;

 VAR_33 = (FUNC_2(VAR_15 + (VAR_32 * 4)) & VAR_16) >>
  VAR_17;

 VAR_28->ips.fmax = VAR_30;
 VAR_28->ips.fstart = VAR_32;

 VAR_28->ips.max_delay = VAR_32;
 VAR_28->ips.min_delay = VAR_31;
 VAR_28->ips.cur_delay = VAR_32;

 FUNC_0("fmax: %d, fmin: %d, fstart: %d\n",
    VAR_30, VAR_31, VAR_32);

 FUNC_3(VAR_3, VAR_4 | VAR_5);





 FUNC_3(VAR_24, VAR_33);
 FUNC_5(VAR_24);

 VAR_29 |= VAR_12;
 FUNC_3(VAR_6, VAR_29);

 if (FUNC_12((FUNC_2(VAR_13) & VAR_1) == 0, 10))
  FUNC_1("stuck trying to change perf mode\n");
 FUNC_9(1);

 FUNC_7(VAR_27, VAR_32);

 VAR_28->ips.last_count1 = FUNC_2(0x112e4) + FUNC_2(0x112e8) +
  FUNC_2(0x112e0);
 VAR_28->ips.last_time1 = FUNC_8(VAR_25);
 VAR_28->ips.last_count2 = FUNC_2(0x112f4);
 FUNC_6(&VAR_28->ips.last_time2);

 FUNC_11(&VAR_26);
}
