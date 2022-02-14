
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int rev; } ;
struct b43_wldev {TYPE_2__ phy; TYPE_1__* dev; int wl; } ;
struct TYPE_3__ {int chip_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;

__attribute__((used)) static const u32 *FUNC_1(struct b43_wldev *VAR_5)
{
 if (FUNC_0(VAR_5->wl) == VAR_0) {
  if (VAR_5->phy.rev >= 6) {
   if (VAR_5->dev->chip_id == 47162)
    return VAR_3;
   return VAR_4;
  } else if (VAR_5->phy.rev >= 5) {
   return VAR_3;
  } else {
   return VAR_1;
  }
 } else {
  return VAR_2;
 }
}
