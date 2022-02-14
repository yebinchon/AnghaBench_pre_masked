
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct radeon_device *VAR_3)
{
 u32 VAR_4 = (FUNC_0(VAR_2) & VAR_0) >>
  VAR_1;
 int VAR_5 = VAR_4 & 0xff;

 if (VAR_4 & 0x100)
  VAR_5 -= 256;

 return VAR_5 * 1000;
}
