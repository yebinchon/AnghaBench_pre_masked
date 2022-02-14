
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_single {scalar_t__ exponent; int sign; scalar_t__ significand; } ;
typedef int s32 ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vfp_single*,struct vfp_single*,struct vfp_single*,int ) ;
 int FUNC_4 (struct vfp_single*) ;
 int FUNC_5 (int,struct vfp_single*,int ,int ,char*) ;
 int FUNC_6 (struct vfp_single*,int ) ;

__attribute__((used)) static u32 FUNC_7(int VAR_0, int VAR_1, s32 VAR_2, u32 VAR_3)
{
 struct vfp_single VAR_4, VAR_5, VAR_6;
 u32 VAR_7;
 s32 VAR_8 = FUNC_1(VAR_1);

 FUNC_0("VFP: s%u = %08x\n", VAR_1, VAR_8);

 FUNC_6(&VAR_5, VAR_8);
 if (VAR_5.exponent == 0 && VAR_5.significand)
  FUNC_4(&VAR_5);

 FUNC_6(&VAR_6, VAR_2);
 if (VAR_6.exponent == 0 && VAR_6.significand)
  FUNC_4(&VAR_6);

 VAR_7 = FUNC_3(&VAR_4, &VAR_5, &VAR_6, VAR_3);
 VAR_4.sign = FUNC_2(VAR_4.sign);
 return FUNC_5(VAR_0, &VAR_4, VAR_3, VAR_7, "fnmul");
}
