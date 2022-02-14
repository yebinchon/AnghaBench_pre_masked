
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b43legacy_wldev {int dummy; } ;


 scalar_t__ FUNC_0 (struct b43legacy_wldev*) ;

__attribute__((used)) static inline
u8 FUNC_1(struct b43legacy_wldev *VAR_0, u8 VAR_1)
{
 u8 VAR_2;
 if (FUNC_0(VAR_0))
  VAR_2 = VAR_1;
 else {
  if (VAR_1 >= 4)
   VAR_2 = VAR_1 - 4;
  else
   VAR_2 = VAR_1;
 }
 return VAR_2;
}
