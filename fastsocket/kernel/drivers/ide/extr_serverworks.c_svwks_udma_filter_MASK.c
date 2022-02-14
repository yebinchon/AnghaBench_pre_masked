
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ device; scalar_t__ revision; int devfn; } ;
struct TYPE_6__ {scalar_t__ media; TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (scalar_t__,int,int*) ;
 int VAR_7 ;
 struct pci_dev* FUNC_4 (int ) ;

__attribute__((used)) static u8 FUNC_5(ide_drive_t *VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_4(VAR_8->hwif->dev);
 u8 VAR_10 = 0;

 if (VAR_9->device == VAR_2)
  return 0x1f;
 if (VAR_9->device == VAR_3) {
  u32 VAR_11 = 0;
  if (VAR_6)
   FUNC_3(VAR_6, 0x64, &VAR_11);




  if(VAR_8->media == VAR_5)
   return 0;

  return ((VAR_11 & 0x00004000) == 0x00004000) ? 0x07 : 0;
 } else if (VAR_9->revision < VAR_4) {
  return 0x07;
 } else if (VAR_9->revision >= VAR_4) {
  u8 VAR_12 = 0, VAR_13;
  FUNC_2(VAR_9, 0x5A, &VAR_12);
  VAR_13 = VAR_12 & 0x3;



  if (VAR_13 > 2 && FUNC_1(VAR_8, VAR_7))
   VAR_13 = 2;

  switch(VAR_13) {
  case 3: VAR_10 = 0x3f; break;
  case 2: VAR_10 = 0x1f; break;
  case 1: VAR_10 = 0x07; break;
  default: VAR_10 = 0x00; break;
  }
 }
 if (((VAR_9->device == VAR_0) ||
      (VAR_9->device == VAR_1)) &&
     (!(FUNC_0(VAR_9->devfn) & 1)))
  VAR_10 = 0x1f;

 return VAR_10;
}
