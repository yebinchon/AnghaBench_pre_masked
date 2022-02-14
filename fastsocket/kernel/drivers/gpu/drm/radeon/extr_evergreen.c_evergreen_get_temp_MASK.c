
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_1(struct radeon_device *VAR_10)
{
 u32 VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_10->family == VAR_5) {
  VAR_12 = (FUNC_0(VAR_3) & VAR_6) >>
   VAR_7;
  VAR_11 = (FUNC_0(VAR_4) & VAR_8) >>
   VAR_9;

  if (VAR_12 & 0x100)
   VAR_13 = VAR_11 / 2 - (0x200 - VAR_12);
  else
   VAR_13 = VAR_11 / 2 + VAR_12;

  VAR_13 = VAR_13 * 1000;

 } else {
  VAR_11 = (FUNC_0(VAR_2) & VAR_0) >>
   VAR_1;

  if (VAR_11 & 0x400)
   VAR_13 = -256;
  else if (VAR_11 & 0x200)
   VAR_13 = 255;
  else if (VAR_11 & 0x100) {
   VAR_13 = VAR_11 & 0x1ff;
   VAR_13 |= ~0x1ff;
  } else
   VAR_13 = VAR_11 & 0xff;

  VAR_13 = (VAR_13 * 1000) / 2;
 }

 return VAR_13;
}
