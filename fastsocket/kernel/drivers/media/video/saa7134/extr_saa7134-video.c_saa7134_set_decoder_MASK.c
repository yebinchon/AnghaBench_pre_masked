
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7134_tvnorm {int luma_control; int sync_control; int src_timing; int chroma_ctrl1; int chroma_gain; int chroma_ctrl2; int vgate_misc; } ;
struct saa7134_dev {int ctl_bright; int ctl_contrast; int ctl_saturation; int ctl_hue; scalar_t__ ctl_invert; scalar_t__ nosignal; int ctl_input; struct saa7134_tvnorm* tvnorm; } ;
struct TYPE_2__ {int vmux; } ;


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
 TYPE_1__ FUNC_0 (struct saa7134_dev*,int ) ;
 scalar_t__ VAR_24 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct saa7134_dev *VAR_25)
{
 int VAR_26, VAR_27, VAR_28;

 struct saa7134_tvnorm *VAR_29 = VAR_25->tvnorm;
 VAR_28 = FUNC_0(VAR_25, VAR_25->ctl_input).vmux;

 VAR_26 = VAR_29->luma_control;
 VAR_27 = VAR_29->sync_control;

 if (VAR_28 > 5)
  VAR_26 |= 0x80;
 if (VAR_24 || VAR_25->nosignal)
  VAR_27 |= 0x20;


 FUNC_1(VAR_14, 0x08);
 FUNC_1(VAR_1, 0xc0 | VAR_28);
 FUNC_1(VAR_2, 0x00);

 FUNC_1(VAR_3, 0x90);
 FUNC_1(VAR_4, 0x90);
 FUNC_1(VAR_12, 0xeb);
 FUNC_1(VAR_13, 0xe0);
 FUNC_1(VAR_20, VAR_29->src_timing);

 FUNC_1(VAR_21, VAR_27);
 FUNC_1(VAR_15, VAR_26);
 FUNC_1(VAR_10, VAR_25->ctl_bright);

 FUNC_1(VAR_11,
  VAR_25->ctl_invert ? -VAR_25->ctl_contrast : VAR_25->ctl_contrast);

 FUNC_1(VAR_9,
  VAR_25->ctl_invert ? -VAR_25->ctl_saturation : VAR_25->ctl_saturation);

 FUNC_1(VAR_8, VAR_25->ctl_hue);
 FUNC_1(VAR_5, VAR_29->chroma_ctrl1);
 FUNC_1(VAR_7, VAR_29->chroma_gain);

 FUNC_1(VAR_6, VAR_29->chroma_ctrl2);
 FUNC_1(VAR_17, 0x00);

 FUNC_1(VAR_0, 0x01);
 FUNC_1(VAR_22, 0x11);
 FUNC_1(VAR_23, 0xfe);
 FUNC_1(VAR_16, VAR_29->vgate_misc);
 FUNC_1(VAR_18, 0x40);
 FUNC_1(VAR_19, 0x80);
}
