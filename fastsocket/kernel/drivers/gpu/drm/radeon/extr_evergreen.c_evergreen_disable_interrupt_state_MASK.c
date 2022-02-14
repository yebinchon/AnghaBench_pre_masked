
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; int num_crtc; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_24 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct radeon_device*,int,int) ;

void FUNC_4(struct radeon_device *VAR_25)
{
 u32 VAR_26;

 if (VAR_25->family >= VAR_1) {
  FUNC_3(VAR_25, 0,
      VAR_2 | VAR_3);
  FUNC_3(VAR_25, 1, 0);
  FUNC_3(VAR_25, 2, 0);
  VAR_26 = FUNC_1(VAR_0) & ~VAR_24;
  FUNC_2(VAR_0, VAR_26);
 } else
  FUNC_2(VAR_4, VAR_2 | VAR_3);
 VAR_26 = FUNC_1(VAR_14) & ~VAR_24;
 FUNC_2(VAR_14, VAR_26);
 FUNC_2(VAR_21, 0);
 FUNC_2(VAR_23 + VAR_15, 0);
 FUNC_2(VAR_23 + VAR_16, 0);
 if (VAR_25->num_crtc >= 4) {
  FUNC_2(VAR_23 + VAR_17, 0);
  FUNC_2(VAR_23 + VAR_18, 0);
 }
 if (VAR_25->num_crtc >= 6) {
  FUNC_2(VAR_23 + VAR_19, 0);
  FUNC_2(VAR_23 + VAR_20, 0);
 }

 FUNC_2(VAR_22 + VAR_15, 0);
 FUNC_2(VAR_22 + VAR_16, 0);
 if (VAR_25->num_crtc >= 4) {
  FUNC_2(VAR_22 + VAR_17, 0);
  FUNC_2(VAR_22 + VAR_18, 0);
 }
 if (VAR_25->num_crtc >= 6) {
  FUNC_2(VAR_22 + VAR_19, 0);
  FUNC_2(VAR_22 + VAR_20, 0);
 }


 if (!FUNC_0(VAR_25))
  FUNC_2(VAR_5, 0);
 FUNC_2(VAR_6, 0);

 VAR_26 = FUNC_1(VAR_7) & VAR_13;
 FUNC_2(VAR_7, VAR_26);
 VAR_26 = FUNC_1(VAR_8) & VAR_13;
 FUNC_2(VAR_8, VAR_26);
 VAR_26 = FUNC_1(VAR_9) & VAR_13;
 FUNC_2(VAR_9, VAR_26);
 VAR_26 = FUNC_1(VAR_10) & VAR_13;
 FUNC_2(VAR_10, VAR_26);
 VAR_26 = FUNC_1(VAR_11) & VAR_13;
 FUNC_2(VAR_11, VAR_26);
 VAR_26 = FUNC_1(VAR_12) & VAR_13;
 FUNC_2(VAR_12, VAR_26);

}
