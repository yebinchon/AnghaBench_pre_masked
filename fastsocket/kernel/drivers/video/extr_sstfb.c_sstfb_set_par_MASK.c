
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int (* set_pll ) (struct fb_info*,int *,int ) ;int (* set_vidmod ) (struct fb_info*,int ) ;} ;
struct sstfb_par {int hSyncOff; int yDim; int vSyncOn; int vSyncOff; int vBackPorch; int tiles_in_X; int pll; TYPE_2__ dac_sw; struct pci_dev* dev; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int xres; int right_margin; int left_margin; int yres; int vsync_len; int lower_margin; int upper_margin; int vmode; int hsync_len; int sync; int bits_per_pixel; int pixclock; } ;
struct fb_info {TYPE_1__ var; struct sstfb_par* par; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (struct sstfb_par*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_1 (int ) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 scalar_t__ VAR_52 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (int ,unsigned int*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct fb_info*,int ) ;
 int FUNC_11 (struct fb_info*,int *,int ) ;

__attribute__((used)) static int FUNC_12(struct fb_info *VAR_53)
{
 struct sstfb_par *VAR_54 = VAR_53->par;
 u32 VAR_55, VAR_56, VAR_57, VAR_58, VAR_59, VAR_60=0;
 struct pci_dev *VAR_61 = VAR_54->dev;
 unsigned int VAR_62;
 int VAR_63;

 VAR_54->hSyncOff = VAR_53->var.xres + VAR_53->var.right_margin + VAR_53->var.left_margin;

 VAR_54->yDim = VAR_53->var.yres;
 VAR_54->vSyncOn = VAR_53->var.vsync_len;
 VAR_54->vSyncOff = VAR_53->var.yres + VAR_53->var.lower_margin + VAR_53->var.upper_margin;
 VAR_54->vBackPorch = VAR_53->var.upper_margin;


 FUNC_4(FUNC_1(VAR_53->var.pixclock), &VAR_62, &VAR_54->pll);

 if (VAR_53->var.vmode & VAR_24)
  VAR_54->vBackPorch += (VAR_54->vBackPorch % 2);
 if (VAR_53->var.vmode & VAR_23) {
  VAR_54->vBackPorch <<= 1;
  VAR_54->yDim <<=1;
  VAR_54->vSyncOn <<=1;
  VAR_54->vSyncOff <<=1;
 }

 if (FUNC_0(VAR_54)) {


  VAR_54->tiles_in_X = (VAR_53->var.xres + 63 ) / 64 * 2;
 } else {

  VAR_54->tiles_in_X = (VAR_53->var.xres + 63 ) / 64;
 }

 FUNC_2("hsync_len hSyncOff vsync_len vSyncOff\n");
 FUNC_2("%-7d %-8d %-7d %-8d\n",
            VAR_53->var.hsync_len, VAR_54->hSyncOff,
            VAR_54->vSyncOn, VAR_54->vSyncOff);
 FUNC_2("left_margin upper_margin xres yres Freq\n");
 FUNC_2("%-10d %-10d %-4d %-4d %-8ld\n",
            VAR_53->var.left_margin, VAR_53->var.upper_margin,
            VAR_53->var.xres, VAR_53->var.yres, FUNC_1(VAR_53->var.pixclock));

 FUNC_9(VAR_35, 0);
 FUNC_8();
 FUNC_3(VAR_61, VAR_38, VAR_37);
 FUNC_6(VAR_13, VAR_48);
 FUNC_6(VAR_12, VAR_19 | VAR_25);
 FUNC_7(VAR_14, VAR_8);
 FUNC_8();



 FUNC_9(VAR_0, VAR_54->vBackPorch << 16 | (VAR_53->var.left_margin - 2));
 FUNC_9(VAR_46, VAR_54->yDim << 16 | (VAR_53->var.xres - 1));
 FUNC_9(VAR_26, (VAR_54->hSyncOff - 1) << 16 | (VAR_53->var.hsync_len - 1));
 FUNC_9(VAR_50, VAR_54->vSyncOff << 16 | VAR_54->vSyncOn);

 VAR_57 = FUNC_5(VAR_14);
 VAR_58 = FUNC_5(VAR_15);


 FUNC_3(VAR_61, VAR_38,
                        VAR_37 | VAR_39 );

 VAR_54->dac_sw.set_vidmod(VAR_53, VAR_53->var.bits_per_pixel);


 VAR_54->dac_sw.set_pll(VAR_53, &VAR_54->pll, VAR_49);


 FUNC_3(VAR_61, VAR_38,
                        VAR_37);


 FUNC_9(VAR_14,VAR_57);
 FUNC_9(VAR_15,VAR_58);

 VAR_56 = (FUNC_5(VAR_13) & VAR_47)
             | VAR_6
             | VAR_4
             | VAR_9
             | VAR_7

             | VAR_40

                                       ;
 VAR_63 = VAR_54->tiles_in_X;
 if (FUNC_0(VAR_54)) {
  VAR_56 |= ((VAR_63 & 0x20) >> 5) << VAR_43
              | ((VAR_63 & 0x1e) >> 1) << VAR_44;




  VAR_60 = (VAR_63 & 0x1) << VAR_42;
 }
 else
  VAR_56 |= VAR_63 << VAR_44;

 switch (VAR_53->var.bits_per_pixel) {
 case 16:
  VAR_56 |= VAR_41;
  break;
 default:
  return -VAR_3;
 }
 FUNC_9(VAR_13, VAR_56);
 if (FUNC_0(VAR_54)) {
  FUNC_9(VAR_18, VAR_60);
  VAR_59=FUNC_5(VAR_16) & VAR_17 ;
  if (VAR_53->var.vmode & VAR_24)
   VAR_59 |= VAR_28;
  if (VAR_53->var.vmode & VAR_23)
   VAR_59 |= VAR_45;
  if (VAR_53->var.sync & VAR_21)
   VAR_59 |= VAR_27;
  if (VAR_53->var.sync & VAR_22)
   VAR_59 |= VAR_51;
  FUNC_9(VAR_16, VAR_59);
 }
 FUNC_8();
 FUNC_7(VAR_13, VAR_48);
 FUNC_7(VAR_12, VAR_19 | VAR_25);
 FUNC_6(VAR_14, VAR_8);

 FUNC_3(VAR_61, VAR_38, VAR_36);



 switch (VAR_53->var.bits_per_pixel) {
 case 16:
  VAR_55 = VAR_30;
  break;
 default:
  return -VAR_3;
 }
 if (VAR_52) {
  FUNC_9(VAR_29, VAR_55 | VAR_10);
  FUNC_2("setting clipping dimensions 0..%d, 0..%d\n",
              VAR_53->var.xres - 1, VAR_54->yDim - 1);

  FUNC_9(VAR_1, VAR_53->var.xres);
  FUNC_9(VAR_2, VAR_54->yDim);
  FUNC_6(VAR_20, VAR_5 | VAR_11);
 } else {

  FUNC_9(VAR_29, VAR_55);
 }
 return 0;
}
