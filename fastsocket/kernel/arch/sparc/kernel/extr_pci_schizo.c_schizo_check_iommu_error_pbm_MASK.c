
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ strbuf_enabled; } ;
struct pci_pbm_info {unsigned long pbm_regs; TYPE_1__ stc; int name; struct iommu* iommu; } ;
struct iommu {int lock; scalar_t__ iommu_control; } ;
typedef enum schizo_error_type { ____Placeholder_schizo_error_type } schizo_error_type ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (struct pci_pbm_info*,int) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pci_pbm_info *VAR_16,
      enum schizo_error_type VAR_17)
{
 struct iommu *VAR_18 = VAR_16->iommu;
 unsigned long VAR_19[16];
 unsigned long VAR_20[16];
 unsigned long VAR_21;
 u64 VAR_22;
 int VAR_23;

 FUNC_2(&VAR_18->lock, VAR_21);
 VAR_22 = FUNC_4(VAR_18->iommu_control);
 if (VAR_22 & VAR_2) {
  unsigned long VAR_24;
  char *VAR_25;


  VAR_22 &= ~VAR_2;
  FUNC_5(VAR_22, VAR_18->iommu_control);

  switch((VAR_22 & VAR_3) >> 25UL) {
  case 0:
   VAR_25 = "Protection Error";
   break;
  case 1:
   VAR_25 = "Invalid Error";
   break;
  case 2:
   VAR_25 = "TimeOut Error";
   break;
  case 3:
  default:
   VAR_25 = "ECC Error";
   break;
  };
  FUNC_1("%s: IOMMU Error, type[%s]\n",
         VAR_16->name, VAR_25);
  FUNC_5(VAR_22 | VAR_1,
      VAR_18->iommu_control);

  VAR_24 = VAR_16->pbm_regs;

  for (VAR_23 = 0; VAR_23 < 16; VAR_23++) {
   VAR_19[VAR_23] =
    FUNC_4(VAR_24 + VAR_8 + (VAR_23 * 8UL));
   VAR_20[VAR_23] =
    FUNC_4(VAR_24 + VAR_4 + (VAR_23 * 8UL));


   FUNC_5(0, VAR_24 + VAR_8 + (VAR_23 * 8UL));
   FUNC_5(0, VAR_24 + VAR_4 + (VAR_23 * 8UL));
  }


  FUNC_5(VAR_22, VAR_18->iommu_control);

  for (VAR_23 = 0; VAR_23 < 16; VAR_23++) {
   unsigned long VAR_26, VAR_27;

   VAR_26 = VAR_19[VAR_23];
   if (!(VAR_26 & VAR_10))
    continue;

   VAR_27 = VAR_20[VAR_23];
   switch((VAR_26 & VAR_11) >> 23UL) {
   case 0:
    VAR_25 = "Protection Error";
    break;
   case 1:
    VAR_25 = "Invalid Error";
    break;
   case 2:
    VAR_25 = "TimeOut Error";
    break;
   case 3:
   default:
    VAR_25 = "ECC Error";
    break;
   };
   FUNC_1("%s: IOMMU TAG(%d)[error(%s) ctx(%x) wr(%d) str(%d) "
          "sz(%dK) vpg(%08lx)]\n",
          VAR_16->name, VAR_23, VAR_25,
          (int)((VAR_26 & VAR_9) >> 25UL),
          ((VAR_26 & VAR_15) ? 1 : 0),
          ((VAR_26 & VAR_13) ? 1 : 0),
          ((VAR_26 & VAR_12) ? 64 : 8),
          (VAR_26 & VAR_14) << VAR_0);
   FUNC_1("%s: IOMMU DATA(%d)[valid(%d) cache(%d) ppg(%016lx)]\n",
          VAR_16->name, VAR_23,
          ((VAR_27 & VAR_7) ? 1 : 0),
          ((VAR_27 & VAR_5) ? 1 : 0),
          (VAR_27 & VAR_6) << VAR_0);
  }
 }
 if (VAR_16->stc.strbuf_enabled)
  FUNC_0(VAR_16, VAR_17);
 FUNC_3(&VAR_18->lock, VAR_21);
}
