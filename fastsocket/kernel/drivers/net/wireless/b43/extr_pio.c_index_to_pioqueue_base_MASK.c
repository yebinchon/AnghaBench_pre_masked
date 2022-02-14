
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u16 ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {int core_rev; } ;


 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(struct b43_wldev *VAR_0,
      unsigned int VAR_1)
{
 static const u16 VAR_2[] = {
  135,
  134,
  133,
  132,
  131,
  130,
  129,
  128,
 };
 static const u16 VAR_3[] = {
  141,
  140,
  139,
  138,
  137,
  136,
 };

 if (VAR_0->dev->core_rev >= 11) {
  FUNC_1(VAR_1 >= FUNC_0(VAR_3));
  return VAR_3[VAR_1];
 }
 FUNC_1(VAR_1 >= FUNC_0(VAR_2));
 return VAR_2[VAR_1];
}
