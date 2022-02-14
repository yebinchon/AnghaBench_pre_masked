
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct iommu* iommu; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;
struct of_device {int node; TYPE_2__ dev; } ;
struct iommu {int write_complete_reg; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,...) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_13, void *VAR_14)
{
 struct of_device *VAR_15 = VAR_14;
 struct iommu *VAR_16 = VAR_15->dev.archdata.iommu;
 unsigned long VAR_17 = VAR_16->write_complete_reg - 0x2000UL;
 unsigned long VAR_18, VAR_19;
 unsigned long VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24;

 VAR_18 = VAR_17 + VAR_12;
 VAR_19 = VAR_17 + VAR_11;


 VAR_20 = FUNC_2(VAR_18);
 VAR_21 = FUNC_2(VAR_19);


 VAR_22 = VAR_20 &
  (VAR_6 | VAR_4 | VAR_5 |
   VAR_10 | VAR_7 | VAR_8);
 FUNC_3(VAR_22, VAR_18);

 VAR_24 = FUNC_0(VAR_15->node, "portid", -1);

 FUNC_1("SYSIO[%x]: Correctable ECC Error, primary error type[%s]\n",
        VAR_24,
        (((VAR_22 & VAR_6) ?
   "PIO" :
   ((VAR_22 & VAR_4) ?
    "DVMA Read" :
    ((VAR_22 & VAR_5) ?
     "DVMA Write" : "???")))));




 FUNC_1("SYSIO[%x]: DOFF[%lx] ECC Syndrome[%lx] Size[%lx] MID[%lx]\n",
        VAR_24,
        (VAR_20 & VAR_1) >> 45UL,
        (VAR_20 & VAR_2) >> 48UL,
        (VAR_20 & VAR_9) >> 42UL,
        (VAR_20 & VAR_3) >> 37UL);
 FUNC_1("SYSIO[%x]: AFAR[%016lx]\n", VAR_24, VAR_21);

 FUNC_1("SYSIO[%x]: Secondary CE errors [", VAR_24);
 VAR_23 = 0;
 if (VAR_20 & VAR_10) {
  VAR_23++;
  FUNC_1("(PIO)");
 }
 if (VAR_20 & VAR_7) {
  VAR_23++;
  FUNC_1("(DVMA Read)");
 }
 if (VAR_20 & VAR_8) {
  VAR_23++;
  FUNC_1("(DVMA Write)");
 }
 if (!VAR_23)
  FUNC_1("(none)");
 FUNC_1("]\n");

 return VAR_0;
}
