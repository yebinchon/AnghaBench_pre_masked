
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct intel_dvo_device {int dummy; } ;
struct drm_display_mode {int clock; int flags; } ;


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
 int FUNC_0 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_1 (struct intel_dvo_device*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_dvo_device *VAR_12,
       struct drm_display_mode *VAR_13,
       struct drm_display_mode *VAR_14)
{
 uint8_t VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 if (VAR_13->clock <= 65000) {
  VAR_15 = 0x23;
  VAR_16 = 0x08;
  VAR_17 = 0x16;
  VAR_18 = 0x60;
 } else {
  VAR_15 = 0x2d;
  VAR_16 = 0x06;
  VAR_17 = 0x26;
  VAR_18 = 0xa0;
 }

 FUNC_1(VAR_12, VAR_4, 0x00);
 FUNC_1(VAR_12, VAR_9, VAR_15);
 FUNC_1(VAR_12, VAR_6, VAR_16);
 FUNC_1(VAR_12, VAR_7, VAR_17);
 FUNC_1(VAR_12, VAR_8, 0x30);
 FUNC_1(VAR_12, VAR_5, VAR_18);
 FUNC_1(VAR_12, VAR_3, 0x00);

 FUNC_0(VAR_12, VAR_0, &VAR_19);

 VAR_19 &= ~(VAR_1 | VAR_2);
 if (VAR_13->flags & VAR_10)
  VAR_19 |= VAR_1;

 if (VAR_13->flags & VAR_11)
  VAR_19 |= VAR_1;

 FUNC_1(VAR_12, VAR_0, VAR_19);
}
