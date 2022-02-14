
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; TYPE_1__* resource; } ;
struct TYPE_2__ {unsigned long start; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_5)
{
 unsigned long VAR_6;


 VAR_6 = VAR_5->resource[0].start;
 VAR_6 &= VAR_1;
 VAR_4 = FUNC_1(VAR_6, 0x1000);
 if (VAR_4) {
  FUNC_2(0x8160, VAR_4 + VAR_3);
  FUNC_2(0xcffc0020, VAR_4 + VAR_2);
  FUNC_0(&VAR_5->dev, "Using Banshee/Voodoo3 I2C device at %p\n", VAR_4);
  return 0;
 }
 return -VAR_0;
}
