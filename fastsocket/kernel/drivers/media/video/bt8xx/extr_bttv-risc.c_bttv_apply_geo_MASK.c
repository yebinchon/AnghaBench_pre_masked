
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv_geometry {int vtc; int hscale; int vscale; int width; int hdelay; int sheight; int vdelay; int crop; int vtotal; scalar_t__ comb; } ;
struct bttv {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bttv *VAR_13, struct bttv_geometry *VAR_14, int VAR_15)
{
 int VAR_16 = VAR_15 ? 0x80 : 0x00;

 if (VAR_14->comb)
  FUNC_2(VAR_10, VAR_7+VAR_16);
 else
  FUNC_0(~VAR_10, VAR_7+VAR_16);

 FUNC_3(VAR_14->vtc, VAR_9+VAR_16);
 FUNC_3(VAR_14->hscale >> 8, VAR_3+VAR_16);
 FUNC_3(VAR_14->hscale & 0xff, VAR_4+VAR_16);
 FUNC_1((VAR_14->vscale>>8), 0xe0, VAR_7+VAR_16);
 FUNC_3(VAR_14->vscale & 0xff, VAR_8+VAR_16);
 FUNC_3(VAR_14->width & 0xff, VAR_1+VAR_16);
 FUNC_3(VAR_14->hdelay & 0xff, VAR_2+VAR_16);
 FUNC_3(VAR_14->sheight & 0xff, VAR_5+VAR_16);
 FUNC_3(VAR_14->vdelay & 0xff, VAR_6+VAR_16);
 FUNC_3(VAR_14->crop, VAR_0+VAR_16);
 FUNC_3(VAR_14->vtotal>>8, VAR_11);
 FUNC_3(VAR_14->vtotal & 0xff, VAR_12);
}
