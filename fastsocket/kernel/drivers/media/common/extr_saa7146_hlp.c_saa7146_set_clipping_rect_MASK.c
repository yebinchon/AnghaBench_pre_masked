
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_video_dma {int base_even; int base_odd; int prot_addr; int base_page; int pitch; int num_line_byte; } ;
struct TYPE_3__ {int field; } ;
struct TYPE_4__ {scalar_t__ nclips; TYPE_1__ win; } ;
struct saa7146_fh {TYPE_2__ ov; struct saa7146_dev* dev; } ;
struct saa7146_dev {int dummy; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


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
 int FUNC_0 (struct saa7146_dev*,struct saa7146_fh*,struct saa7146_video_dma*,int*,int*,int) ;
 int FUNC_1 (struct saa7146_dev*) ;
 int FUNC_2 (struct saa7146_dev*,int ) ;
 int FUNC_3 (struct saa7146_dev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct saa7146_fh *VAR_15)
{
 struct saa7146_dev *VAR_16 = VAR_15->dev;
 enum v4l2_field VAR_17 = VAR_15->ov.win.field;
 struct saa7146_video_dma VAR_18;
 u32 VAR_19;
 u32 VAR_20;


 if( VAR_15->ov.nclips == 0 ) {
  FUNC_1(VAR_16);
  return;
 }

 VAR_19 = FUNC_2(VAR_16, VAR_3);
 VAR_20 = FUNC_2(VAR_16, VAR_11);

 FUNC_0(VAR_16, VAR_15, &VAR_18, &VAR_19, &VAR_20, VAR_17);


 VAR_19 &= 0xffff0008;
 VAR_19 |= (VAR_14 << 4);


 FUNC_3(VAR_16, VAR_0, VAR_18);
 FUNC_3(VAR_16, VAR_1, VAR_18);
 FUNC_3(VAR_16, VAR_13, VAR_18);
 FUNC_3(VAR_16, VAR_2, VAR_18);
 FUNC_3(VAR_16, VAR_12, VAR_18);
 FUNC_3(VAR_16, VAR_10, VAR_18);


 FUNC_3(VAR_16, VAR_3,VAR_19);
 FUNC_3(VAR_16, VAR_11, VAR_20);


 FUNC_3(VAR_16, VAR_9, (VAR_5 | VAR_7 | VAR_4 | VAR_6));
 FUNC_3(VAR_16, VAR_8, (VAR_5 | VAR_7));
}
