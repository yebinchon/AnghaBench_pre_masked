
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int type; int addr; } ;
struct v4l2_dbg_chip_ident {int revision; void* ident; TYPE_1__ match; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {int hwrevision; int * v4l_device; TYPE_2__* pci; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_dbg_chip_ident*) ;
 int FUNC_1 (struct cx23885_dev*,int ,int ,int ,struct v4l2_dbg_chip_ident*) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int VAR_10 ;

int FUNC_3(struct file *VAR_11, void *VAR_12,
    struct v4l2_dbg_chip_ident *VAR_13)
{
 struct cx23885_dev *VAR_14 = ((struct cx23885_fh *)VAR_12)->dev;
 int VAR_15 = 0;
 u8 VAR_16;

 VAR_13->ident = VAR_7;
 VAR_13->revision = 0;
 switch (VAR_13->match.type) {
 case 130:
  switch (VAR_13->match.addr) {
  case 0:
   VAR_16 = FUNC_2(VAR_2) & 0xff;
   switch (VAR_14->pci->device) {
   case 0x8852:

    if (VAR_16 == 0x04)
     VAR_13->ident = VAR_6;
    else
     VAR_13->ident = VAR_4;
    break;
   case 0x8880:
    if (VAR_16 == 0x0e || VAR_16 == 0x0f)
     VAR_13->ident = VAR_5;
    else
     VAR_13->ident = VAR_6;
    break;
   default:
    VAR_13->ident = VAR_8;
    break;
   }
   VAR_13->revision = (VAR_14->pci->device << 16) | (VAR_16 << 8) |
      (VAR_14->hwrevision & 0xff);
   break;
  case 1:
   if (VAR_14->v4l_device != ((void*)0)) {
    VAR_13->ident = VAR_3;
    VAR_13->revision = 0;
   }
   break;
  case 2:







   FUNC_1(VAR_14, VAR_0, VAR_9, VAR_10,
    VAR_13);
   break;
  default:
   VAR_15 = -VAR_1;
   break;
  }
  break;
 case 128:

  FUNC_0(VAR_14, VAR_9, VAR_10, VAR_13);
  break;
 case 129:





  FUNC_0(VAR_14, VAR_9, VAR_10, VAR_13);
  break;
 default:
  VAR_15 = -VAR_1;
  break;
 }
 return VAR_15;
}
