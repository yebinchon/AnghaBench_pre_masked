
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_single {int exponent; scalar_t__ significand; int sign; } ;
struct vfp_double {int significand; int exponent; int sign; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,struct vfp_double*,int ,int ,char*) ;
 int FUNC_1 (struct vfp_double*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct vfp_single*) ;
 int FUNC_4 (struct vfp_single*) ;
 int FUNC_5 (struct vfp_single*,int ) ;

__attribute__((used)) static u32 FUNC_6(int VAR_8, int VAR_9, s32 VAR_10, u32 VAR_11)
{
 struct vfp_single VAR_12;
 struct vfp_double VAR_13;
 int VAR_14;
 u32 VAR_15 = 0;

 FUNC_5(&VAR_12, VAR_10);

 VAR_14 = FUNC_4(&VAR_12);




 if (VAR_14 == VAR_6)
  VAR_15 = VAR_0;

 if (VAR_14 & VAR_1)
  FUNC_3(&VAR_12);

 VAR_13.sign = VAR_12.sign;
 VAR_13.significand = (u64)VAR_12.significand << 32;




 if (VAR_14 & (VAR_3|VAR_4)) {
  VAR_13.exponent = 2047;
  if (VAR_14 == VAR_5)
   VAR_13.significand |= VAR_2;
  goto pack_nan;
 } else if (VAR_14 & VAR_7)
  VAR_13.exponent = 0;
 else
  VAR_13.exponent = VAR_12.exponent + (1023 - 127);

 return FUNC_0(VAR_8, &VAR_13, VAR_11, VAR_15, "fcvtd");

 pack_nan:
 FUNC_2(FUNC_1(&VAR_13), VAR_8);
 return VAR_15;
}
