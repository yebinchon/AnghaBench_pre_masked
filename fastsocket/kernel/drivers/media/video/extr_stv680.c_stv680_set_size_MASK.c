
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_stv {int streaming; int vwidth; int vheight; int maxwidth; int maxheight; int QVGA; int CIF; } ;


 int FUNC_0 (int,char*,int,int,...) ;
 int FUNC_1 (struct usb_stv*) ;
 int FUNC_2 (struct usb_stv*) ;

__attribute__((used)) static int FUNC_3 (struct usb_stv *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->streaming;


 if ((VAR_0->vwidth == VAR_1) && (VAR_0->vheight == VAR_2))
  return 0;

 FUNC_0 (1, "STV(i): size request for %i x %i", VAR_1, VAR_2);

 if ((!VAR_1 || !VAR_2) || ((VAR_1 & 1) || (VAR_2 & 1))) {
  FUNC_0 (1, "STV(e): set_size error: request: v.width = %i, v.height = %i  actual: stv.width = %i, stv.height = %i", VAR_1, VAR_2, VAR_0->vwidth, VAR_0->vheight);
  return 1;
 }

 if ((VAR_1 < (VAR_0->maxwidth / 2)) || (VAR_2 < (VAR_0->maxheight / 2))) {
  VAR_1 = VAR_0->maxwidth / 2;
  VAR_2 = VAR_0->maxheight / 2;
 } else if ((VAR_1 >= 158) && (VAR_1 <= 166) && (VAR_0->QVGA == 1)) {
  VAR_1 = 160;
  VAR_2 = 120;
 } else if ((VAR_1 >= 172) && (VAR_1 <= 180) && (VAR_0->CIF == 1)) {
  VAR_1 = 176;
  VAR_2 = 144;
 } else if ((VAR_1 >= 318) && (VAR_1 <= 350) && (VAR_0->QVGA == 1)) {
  VAR_1 = 320;
  VAR_2 = 240;
 } else if ((VAR_1 >= 350) && (VAR_1 <= 358) && (VAR_0->CIF == 1)) {
  VAR_1 = 352;
  VAR_2 = 288;
 } else {
  FUNC_0 (1, "STV(e): request for non-supported size: request: v.width = %i, v.height = %i  actual: stv.width = %i, stv.height = %i", VAR_1, VAR_2, VAR_0->vwidth, VAR_0->vheight);
  return 1;
 }


 if (VAR_3)
  FUNC_2 (VAR_0);
 VAR_0->vwidth = VAR_1;
 VAR_0->vheight = VAR_2;
 FUNC_0 (1, "STV(i): size set to %i x %i", VAR_0->vwidth, VAR_0->vheight);
 if (VAR_3)
  FUNC_1 (VAR_0);

 return 0;
}
