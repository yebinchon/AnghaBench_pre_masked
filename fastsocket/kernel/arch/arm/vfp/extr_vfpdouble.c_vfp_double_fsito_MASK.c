
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_double {int sign; int exponent; int significand; } ;


 int FUNC_0 (int,struct vfp_double*,int,int ,char*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(int VAR_0, int VAR_1, int VAR_2, u32 VAR_3)
{
 struct vfp_double VAR_4;
 u32 VAR_5 = FUNC_1(VAR_2);

 VAR_4.sign = (VAR_5 & 0x80000000) >> 16;
 VAR_4.exponent = 1023 + 63 - 1;
 VAR_4.significand = VAR_4.sign ? -VAR_5 : VAR_5;

 return FUNC_0(VAR_0, &VAR_4, VAR_3, 0, "fsito");
}
