
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int,int) ;
 int* VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct b43_wldev *VAR_6, u8 VAR_7)
{
 int VAR_8;

 if (VAR_6->phy.rev < 3) {
  if (VAR_7)
   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    FUNC_0(VAR_6,
     VAR_0, VAR_8, 0xFFF8);
    FUNC_0(VAR_6,
     VAR_1, VAR_8, 0xFFF8);
   }
  else
   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
    FUNC_0(VAR_6,
     VAR_0, VAR_8, VAR_4[VAR_8]);
    FUNC_0(VAR_6,
     VAR_1, VAR_8, VAR_4[VAR_8]);
   }
 } else {
  if (VAR_7)
   for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
    FUNC_0(VAR_6,
     VAR_1, VAR_8, 0x0820);
  else
   for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
    FUNC_0(VAR_6,
     VAR_1, VAR_8, VAR_5[VAR_8]);
 }
}
