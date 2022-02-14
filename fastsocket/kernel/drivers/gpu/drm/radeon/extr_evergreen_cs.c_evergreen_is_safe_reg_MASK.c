
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_cs_parser {int dev; TYPE_1__* rdev; } ;
struct TYPE_2__ {scalar_t__ family; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int* VAR_2 ;

__attribute__((used)) static bool FUNC_2(struct radeon_cs_parser *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 if (VAR_3->rdev->family >= VAR_0)
  VAR_6 = FUNC_0(VAR_1);
 else
  VAR_6 = FUNC_0(VAR_2);

 VAR_8 = (VAR_4 >> 7);
 if (VAR_8 >= VAR_6) {
  FUNC_1(VAR_3->dev, "forbidden register 0x%08x at %d\n", VAR_4, VAR_5);
  return 0;
 }
 VAR_7 = 1 << ((VAR_4 >> 2) & 31);
 if (VAR_3->rdev->family >= VAR_0) {
  if (!(VAR_1[VAR_8] & VAR_7))
   return 1;
 } else {
  if (!(VAR_2[VAR_8] & VAR_7))
   return 1;
 }
 FUNC_1(VAR_3->dev, "forbidden register 0x%08x at %d\n", VAR_4, VAR_5);
 return 0;
}
