
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {int nr_csrows; struct csrow_info* csrows; } ;
struct csrow_info {int nr_pages; int first_page; int last_page; int edac_mode; int dtype; int mtype; int grain; scalar_t__ page_mask; } ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mem_ctl_info*,int ,char*,int) ;
 int VAR_10 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_11,
       struct pci_dev *VAR_12,
       enum edac_type VAR_13)
{
 struct csrow_info *VAR_14;
 u32 VAR_15;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_11->nr_csrows; VAR_16++) {
  VAR_14 = &VAR_11->csrows[VAR_16];

  FUNC_1(VAR_12,
          VAR_3 + (VAR_16 * 12),
          &VAR_15);

  if (!(VAR_15 & VAR_4))
   continue;

  switch ((VAR_15 & VAR_5) >>
   VAR_6) {
  case 0:
   VAR_14->nr_pages = 128 << (20 - VAR_8);
   break;
  case 1:
   VAR_14->nr_pages = 256 << (20 - VAR_8);
   break;
  case 2:
  case 3:
   VAR_14->nr_pages = 512 << (20 - VAR_8);
   break;
  case 4:
   VAR_14->nr_pages = 1024 << (20 - VAR_8);
   break;
  case 5:
   VAR_14->nr_pages = 2048 << (20 - VAR_8);
   break;
  default:
   FUNC_0(VAR_11, VAR_2,
    "Unrecognized Rank Config. rankcfg=%u\n",
    VAR_15);
   return -VAR_1;
  }

  VAR_14->first_page = VAR_10;
  VAR_14->last_page = VAR_14->first_page + VAR_14->nr_pages - 1;
  VAR_10 += VAR_14->nr_pages;
  VAR_14->page_mask = 0;
  VAR_14->grain = VAR_9;
  VAR_14->mtype = VAR_7;
  VAR_14->dtype = VAR_0;
  VAR_14->edac_mode = VAR_13;
 }
 return 0;
}
