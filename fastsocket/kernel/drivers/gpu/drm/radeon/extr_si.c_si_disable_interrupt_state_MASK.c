
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int num_crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
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
 scalar_t__ VAR_24 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_25 ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_26)
{
 u32 VAR_27;

 FUNC_1(VAR_2, VAR_0 | VAR_1);
 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_4, 0);
 VAR_27 = FUNC_0(VAR_15 + VAR_13) & ~VAR_25;
 FUNC_1(VAR_15 + VAR_13, VAR_27);
 VAR_27 = FUNC_0(VAR_15 + VAR_14) & ~VAR_25;
 FUNC_1(VAR_15 + VAR_14, VAR_27);
 FUNC_1(VAR_22, 0);
 FUNC_1(VAR_24 + VAR_16, 0);
 FUNC_1(VAR_24 + VAR_17, 0);
 if (VAR_26->num_crtc >= 4) {
  FUNC_1(VAR_24 + VAR_18, 0);
  FUNC_1(VAR_24 + VAR_19, 0);
 }
 if (VAR_26->num_crtc >= 6) {
  FUNC_1(VAR_24 + VAR_20, 0);
  FUNC_1(VAR_24 + VAR_21, 0);
 }

 FUNC_1(VAR_23 + VAR_16, 0);
 FUNC_1(VAR_23 + VAR_17, 0);
 if (VAR_26->num_crtc >= 4) {
  FUNC_1(VAR_23 + VAR_18, 0);
  FUNC_1(VAR_23 + VAR_19, 0);
 }
 if (VAR_26->num_crtc >= 6) {
  FUNC_1(VAR_23 + VAR_20, 0);
  FUNC_1(VAR_23 + VAR_21, 0);
 }

 FUNC_1(VAR_5, 0);

 VAR_27 = FUNC_0(VAR_6) & VAR_12;
 FUNC_1(VAR_6, VAR_27);
 VAR_27 = FUNC_0(VAR_7) & VAR_12;
 FUNC_1(VAR_7, VAR_27);
 VAR_27 = FUNC_0(VAR_8) & VAR_12;
 FUNC_1(VAR_8, VAR_27);
 VAR_27 = FUNC_0(VAR_9) & VAR_12;
 FUNC_1(VAR_9, VAR_27);
 VAR_27 = FUNC_0(VAR_10) & VAR_12;
 FUNC_1(VAR_10, VAR_27);
 VAR_27 = FUNC_0(VAR_11) & VAR_12;
 FUNC_1(VAR_11, VAR_27);

}
