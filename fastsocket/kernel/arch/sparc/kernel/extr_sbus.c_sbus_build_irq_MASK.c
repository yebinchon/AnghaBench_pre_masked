
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct iommu* iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct of_device {TYPE_2__ dev; } ;
struct iommu {int write_complete_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int,unsigned long,unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,unsigned int) ;
 unsigned long FUNC_3 (unsigned long) ;
 unsigned long* VAR_4 ;

__attribute__((used)) static unsigned int FUNC_4(struct of_device *VAR_5, unsigned int VAR_6)
{
 struct iommu *VAR_7 = VAR_5->dev.archdata.iommu;
 unsigned long VAR_8 = VAR_7->write_complete_reg - 0x2000UL;
 unsigned long VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_9 = VAR_4[VAR_6];
 if (VAR_9 == ((unsigned long)-1)) {
  FUNC_2("get_irq_translations: Bad SYSIO INO[%x]\n",
       VAR_6);
  FUNC_1();
 }
 VAR_9 += VAR_8;





 if (VAR_6 >= 0x20) {
  VAR_10 = FUNC_3(VAR_9);
 } else {
  int VAR_12 = (VAR_6 & 0x18)>>3;

  VAR_11 = VAR_6 & 0x7;

  switch(VAR_12) {
  case 0:
   VAR_10 = VAR_8 + VAR_0;
   break;
  case 1:
   VAR_10 = VAR_8 + VAR_1;
   break;
  case 2:
   VAR_10 = VAR_8 + VAR_2;
   break;
  default:
  case 3:
   VAR_10 = VAR_8 + VAR_3;
   break;
  };

  VAR_10 += ((unsigned long)VAR_11 - 1UL) * 8UL;
 }
 return FUNC_0(VAR_11, VAR_10, VAR_9);
}
