
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rev; } ;
struct b43_wldev {TYPE_1__ phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_5,
      bool VAR_6)
{

 if (VAR_6) {
  if (VAR_5->phy.rev >= 2) {
   FUNC_0(VAR_5, VAR_4, 0x83FF);
   FUNC_1(VAR_5, VAR_1, 0x1F00);
   FUNC_0(VAR_5, VAR_0, 0x80FF);
   FUNC_0(VAR_5, VAR_3, 0xDFFF);
   FUNC_1(VAR_5, VAR_2, 0x0808);
  } else {
   FUNC_0(VAR_5, VAR_4, 0xE0FF);
   FUNC_1(VAR_5, VAR_1, 0x1F00);
   FUNC_0(VAR_5, VAR_3, 0xFCFF);
   FUNC_1(VAR_5, VAR_2, 0x0018);
  }
 } else {
  FUNC_0(VAR_5, VAR_1, 0xE0FF);
  if (VAR_5->phy.rev >= 2)
   FUNC_0(VAR_5, VAR_2, 0xF7F7);
  else
   FUNC_0(VAR_5, VAR_2, 0xFFE7);
 }
}
