
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_single {int sign; int exponent; int significand; } ;
typedef int s32 ;


 int FUNC_0 (int,struct vfp_single*,int ,int ,char*) ;

__attribute__((used)) static u32 FUNC_1(int VAR_0, int VAR_1, s32 VAR_2, u32 VAR_3)
{
 struct vfp_single VAR_4;

 VAR_4.sign = (VAR_2 & 0x80000000) >> 16;
 VAR_4.exponent = 127 + 31 - 1;
 VAR_4.significand = VAR_4.sign ? -VAR_2 : VAR_2;

 return FUNC_0(VAR_0, &VAR_4, VAR_3, 0, "fsito");
}
