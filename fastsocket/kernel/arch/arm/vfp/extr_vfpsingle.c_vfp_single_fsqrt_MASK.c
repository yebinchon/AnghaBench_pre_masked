
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vfp_single {scalar_t__ sign; int exponent; int significand; } ;
typedef int s64 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct vfp_single*,struct vfp_single*,int *,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 struct vfp_single VAR_6 ;
 int FUNC_5 (char*,struct vfp_single*) ;
 int FUNC_6 (struct vfp_single*) ;
 int FUNC_7 (int,struct vfp_single*,int,int ,char*) ;
 int FUNC_8 (struct vfp_single*) ;
 int FUNC_9 (struct vfp_single*) ;
 int FUNC_10 (struct vfp_single*,int ) ;

__attribute__((used)) static u32 FUNC_11(int VAR_7, int VAR_8, s32 VAR_9, u32 VAR_10)
{
 struct vfp_single VAR_11, VAR_12;
 int VAR_13, VAR_14;

 FUNC_10(&VAR_11, VAR_9);
 VAR_14 = FUNC_9(&VAR_11);
 if (VAR_14 & (VAR_3|VAR_2)) {
  struct vfp_single *VAR_15 = &VAR_12;

  if (VAR_14 & VAR_3)
   VAR_13 = FUNC_2(VAR_15, &VAR_11, ((void*)0), VAR_10);
  else if (VAR_11.sign == 0) {
 sqrt_copy:
   VAR_15 = &VAR_11;
   VAR_13 = 0;
  } else {
 sqrt_invalid:
   VAR_15 = &VAR_6;
   VAR_13 = VAR_0;
  }
  FUNC_3(FUNC_8(VAR_15), VAR_7);
  return VAR_13;
 }




 if (VAR_14 & VAR_5)
  goto sqrt_copy;




 if (VAR_14 & VAR_1)
  FUNC_6(&VAR_11);




 if (VAR_11.sign)
  goto sqrt_invalid;

 FUNC_5("sqrt", &VAR_11);




 VAR_12.sign = 0;
 VAR_12.exponent = ((VAR_11.exponent - 127) >> 1) + 127;
 VAR_12.significand = FUNC_1(VAR_11.exponent, VAR_11.significand) + 2;

 FUNC_5("sqrt estimate", &VAR_12);




 if ((VAR_12.significand & VAR_4) <= 5) {
  if (VAR_12.significand < 2) {
   VAR_12.significand = 0xffffffff;
  } else {
   u64 VAR_16;
   s64 VAR_17;
   VAR_11.significand <<= !(VAR_11.exponent & 1);
   VAR_16 = (u64)VAR_12.significand * VAR_12.significand;
   VAR_17 = ((u64)VAR_11.significand << 32) - VAR_16;

   FUNC_0("VFP: term=%016llx rem=%016llx\n", VAR_16, VAR_17);

   while (VAR_17 < 0) {
    VAR_12.significand -= 1;
    VAR_17 += ((u64)VAR_12.significand << 1) | 1;
   }
   VAR_12.significand |= VAR_17 != 0;
  }
 }
 VAR_12.significand = FUNC_4(VAR_12.significand, 1);

 return FUNC_7(VAR_7, &VAR_12, VAR_10, 0, "fsqrt");
}
