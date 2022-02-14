
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int panpos; } ;
struct matrox_fb_info {TYPE_1__ crtc1; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct matrox_fb_info *VAR_1)
{
 if (VAR_1->crtc1.panpos >= 0) {
  unsigned long VAR_2;
  int VAR_3;

  FUNC_0(VAR_2);
  VAR_3 = VAR_1->crtc1.panpos;
  if (VAR_3 >= 0) {
   unsigned int VAR_4;

   VAR_1->crtc1.panpos = -1;
   VAR_4 = FUNC_2(VAR_0);
   FUNC_4(VAR_0, 0x00, VAR_3);
   if (VAR_4 != 0x00) {
    FUNC_3(VAR_0, VAR_4);
   }
  }
  FUNC_1(VAR_2);
 }
}
