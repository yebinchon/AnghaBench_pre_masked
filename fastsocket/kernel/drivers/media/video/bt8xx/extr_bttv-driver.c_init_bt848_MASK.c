
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t type; } ;
struct bttv {int saturation; int contrast; int hue; int bright; scalar_t__ opt_lumafilter; scalar_t__ opt_adc_crush; scalar_t__ opt_chroma_agc; TYPE_1__ c; } ;
struct TYPE_4__ {scalar_t__ no_video; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct bttv*,int ) ;
 int FUNC_1 (struct bttv*,int ) ;
 int FUNC_2 (struct bttv*,int ) ;
 int FUNC_3 (struct bttv*,int ) ;
 TYPE_2__* VAR_25 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct bttv*) ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_6(struct bttv *VAR_28)
{
 int VAR_29;

 if (VAR_25[VAR_28->c.type].no_video) {

  FUNC_5(VAR_28);
  return;
 }

 FUNC_4(0x00, VAR_3);
 FUNC_4(VAR_5, VAR_4);
 FUNC_4(VAR_18 | VAR_17, VAR_16);



 FUNC_4(VAR_13|
  VAR_14|
  VAR_15|
  VAR_11|
  VAR_12,
  VAR_10);

 VAR_29 = VAR_28->opt_chroma_agc ? VAR_22 : 0;
 FUNC_4(VAR_29, VAR_8);
 FUNC_4(VAR_29, VAR_20);

 FUNC_4(0x20, VAR_9);
 FUNC_4(0x20, VAR_21);
 FUNC_4(VAR_2 | (VAR_28->opt_adc_crush ? VAR_1 : 0),
  VAR_0);

 FUNC_4(VAR_27, VAR_24);
 FUNC_4(VAR_26, VAR_23);

 if (VAR_28->opt_lumafilter) {
  FUNC_4(0, VAR_7);
  FUNC_4(0, VAR_19);
 } else {
  FUNC_4(VAR_6, VAR_7);
  FUNC_4(VAR_6, VAR_19);
 }

 FUNC_0(VAR_28, VAR_28->bright);
 FUNC_2(VAR_28, VAR_28->hue);
 FUNC_1(VAR_28, VAR_28->contrast);
 FUNC_3(VAR_28, VAR_28->saturation);


 FUNC_5(VAR_28);
}
