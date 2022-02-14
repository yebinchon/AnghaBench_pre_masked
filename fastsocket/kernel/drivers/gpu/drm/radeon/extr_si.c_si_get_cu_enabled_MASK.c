
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u32 FUNC_2(struct radeon_device *VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_6 & 1)
  VAR_6 &= VAR_2;
 else
  VAR_6 = 0;
 VAR_6 |= FUNC_0(VAR_1);

 VAR_6 >>= VAR_3;

 VAR_7 = FUNC_1(VAR_5);

 return ~VAR_6 & VAR_7;
}
