
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct b43legacy_wldev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,scalar_t__) ;
 int FUNC_3 (struct b43legacy_wldev*,scalar_t__,int) ;

__attribute__((used)) static u64 FUNC_4(struct b43legacy_wldev *VAR_2)
{
 u32 VAR_3;
 u16 VAR_4;

 VAR_4 = FUNC_1(0, 0);
 FUNC_3(VAR_2,
   VAR_4 + VAR_1,
   VAR_0);
 VAR_3 = FUNC_2(VAR_2, VAR_4 +
          VAR_1);
 if (VAR_3 & VAR_0)
  return FUNC_0(32);

 return FUNC_0(30);
}
