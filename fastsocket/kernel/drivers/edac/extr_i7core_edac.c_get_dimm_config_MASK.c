
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mem_ctl_info {struct csrow_info* csrows; struct i7core_pvt* pvt_info; } ;
struct TYPE_7__ {int mc_control; int mc_status; int max_dod; int ch_map; } ;
struct i7core_pvt {int** csrow_map; TYPE_2__* i7core_dev; TYPE_4__* channel; TYPE_3__ info; struct pci_dev*** pci_ch; struct pci_dev** pci_mcr; } ;
struct csrow_info {unsigned long first_page; unsigned long last_page; int nr_pages; int grain; int csrow_idx; int nr_channels; int edac_mode; int mtype; TYPE_1__* channels; int dtype; scalar_t__ page_mask; } ;
typedef enum mem_type { ____Placeholder_mem_type } mem_type ;
typedef enum edac_type { ____Placeholder_edac_type } edac_type ;
struct TYPE_8__ {int ranks; int dimms; } ;
struct TYPE_6__ {int socket; } ;
struct TYPE_5__ {int chan_idx; int label; scalar_t__ ce_count; } ;


 int FUNC_0 (struct i7core_pvt*,int) ;
 scalar_t__ FUNC_1 (struct i7core_pvt*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct i7core_pvt*) ;
 scalar_t__ FUNC_4 (struct i7core_pvt*) ;
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
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
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
 int FUNC_9 (int) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,int,...) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (struct pci_dev*,int ,int*) ;
 int FUNC_21 (int ,int,char*,int,int,int) ;

__attribute__((used)) static int FUNC_22(const struct mem_ctl_info *VAR_31)
{
 struct i7core_pvt *VAR_32 = VAR_31->pvt_info;
 struct csrow_info *VAR_33;
 struct pci_dev *VAR_34;
 int VAR_35, VAR_36;
 int VAR_37 = 0;
 unsigned long VAR_38 = 0;
 enum edac_type VAR_39;
 enum mem_type VAR_40;


 VAR_34 = VAR_32->pci_mcr[0];
 if (!VAR_34)
  return -VAR_7;


 FUNC_20(VAR_34, VAR_10, &VAR_32->info.mc_control);
 FUNC_20(VAR_34, VAR_23, &VAR_32->info.mc_status);
 FUNC_20(VAR_34, VAR_14, &VAR_32->info.max_dod);
 FUNC_20(VAR_34, VAR_9, &VAR_32->info.ch_map);

 FUNC_13("QPI %d control=0x%08x status=0x%08x dod=0x%08x map=0x%08x\n",
  VAR_32->i7core_dev->socket, VAR_32->info.mc_control, VAR_32->info.mc_status,
  VAR_32->info.max_dod, VAR_32->info.ch_map);

 if (FUNC_3(VAR_32)) {
  FUNC_13("ECC enabled with x%d SDCC\n", FUNC_4(VAR_32) ? 8 : 4);
  if (FUNC_4(VAR_32))
   VAR_39 = VAR_6;
  else
   VAR_39 = VAR_5;
 } else {
  FUNC_13("ECC disabled\n");
  VAR_39 = VAR_4;
 }


 FUNC_13("DOD Max limits: DIMMS: %d, %d-ranked, %d-banked "
  "x%x x 0x%x\n",
  FUNC_17(VAR_32->info.max_dod),
  FUNC_18(VAR_32->info.max_dod >> 2),
  FUNC_15(VAR_32->info.max_dod >> 4),
  FUNC_19(VAR_32->info.max_dod >> 6),
  FUNC_16(VAR_32->info.max_dod >> 9));

 for (VAR_35 = 0; VAR_35 < VAR_26; VAR_35++) {
  u32 VAR_41, VAR_42[3], VAR_43[8];

  if (!VAR_32->pci_ch[VAR_35][0])
   continue;

  if (!FUNC_0(VAR_32, VAR_35)) {
   FUNC_13("Channel %i is not active\n", VAR_35);
   continue;
  }
  if (FUNC_1(VAR_32, VAR_35)) {
   FUNC_13("Channel %i is disabled\n", VAR_35);
   continue;
  }


  FUNC_20(VAR_32->pci_ch[VAR_35][0],
    VAR_8, &VAR_41);

  VAR_32->channel[VAR_35].ranks = (VAR_41 & VAR_27) ?
      4 : 2;

  if (VAR_41 & VAR_28)
   VAR_40 = VAR_25;
  else
   VAR_40 = VAR_24;
  FUNC_20(VAR_32->pci_ch[VAR_35][1],
    VAR_11, &VAR_42[0]);
  FUNC_20(VAR_32->pci_ch[VAR_35][1],
    VAR_12, &VAR_42[1]);
  FUNC_20(VAR_32->pci_ch[VAR_35][1],
    VAR_13, &VAR_42[2]);

  FUNC_13("Ch%d phy rd%d, wr%d (0x%08x): "
   "%d ranks, %cDIMMs\n",
   VAR_35,
   FUNC_11(VAR_32->info.ch_map, VAR_35), FUNC_12(VAR_32->info.ch_map, VAR_35),
   VAR_41,
   VAR_32->channel[VAR_35].ranks,
   (VAR_41 & VAR_28) ? 'R' : 'U');

  for (VAR_36 = 0; VAR_36 < 3; VAR_36++) {
   u32 VAR_44, VAR_45, VAR_46, VAR_47;
   u32 VAR_48, VAR_49;

   if (!FUNC_2(VAR_42[VAR_36]))
    continue;

   VAR_44 = FUNC_15(FUNC_5(VAR_42[VAR_36]));
   VAR_45 = FUNC_18(FUNC_7(VAR_42[VAR_36]));
   VAR_46 = FUNC_19(FUNC_8(VAR_42[VAR_36]));
   VAR_47 = FUNC_16(FUNC_6(VAR_42[VAR_36]));


   VAR_48 = (VAR_46 * VAR_47 * VAR_44 * VAR_45) >> (20 - 3);

   VAR_32->channel[VAR_35].dimms++;

   FUNC_13("\tdimm %d %d Mb offset: %x, "
    "bank: %d, rank: %d, row: %#x, col: %#x\n",
    VAR_36, VAR_48,
    FUNC_10(VAR_42[VAR_36]),
    VAR_44, VAR_45, VAR_46, VAR_47);

   VAR_49 = FUNC_9(VAR_48);

   VAR_33 = &VAR_31->csrows[VAR_37];
   VAR_33->first_page = VAR_38 + 1;
   VAR_38 += VAR_49;
   VAR_33->last_page = VAR_38;
   VAR_33->nr_pages = VAR_49;

   VAR_33->page_mask = 0;
   VAR_33->grain = 8;
   VAR_33->csrow_idx = VAR_37;
   VAR_33->nr_channels = 1;

   VAR_33->channels[0].chan_idx = VAR_35;
   VAR_33->channels[0].ce_count = 0;

   VAR_32->csrow_map[VAR_35][VAR_36] = VAR_37;

   switch (VAR_44) {
   case 4:
    VAR_33->dtype = VAR_2;
    break;
   case 8:
    VAR_33->dtype = VAR_3;
    break;
   case 16:
    VAR_33->dtype = VAR_1;
    break;
   default:
    VAR_33->dtype = VAR_0;
   }

   VAR_33->edac_mode = VAR_39;
   VAR_33->mtype = VAR_40;
   FUNC_21(VAR_33->channels[0].label,
     sizeof(VAR_33->channels[0].label),
     "CPU#%uChannel#%u_DIMM#%u",
     VAR_32->i7core_dev->socket, VAR_35, VAR_36);

   VAR_37++;
  }

  FUNC_20(VAR_34, VAR_15, &VAR_43[0]);
  FUNC_20(VAR_34, VAR_16, &VAR_43[1]);
  FUNC_20(VAR_34, VAR_17, &VAR_43[2]);
  FUNC_20(VAR_34, VAR_18, &VAR_43[3]);
  FUNC_20(VAR_34, VAR_19, &VAR_43[4]);
  FUNC_20(VAR_34, VAR_20, &VAR_43[5]);
  FUNC_20(VAR_34, VAR_21, &VAR_43[6]);
  FUNC_20(VAR_34, VAR_22, &VAR_43[7]);
  FUNC_14("\t[%i] DIVBY3\tREMOVED\tOFFSET\n", VAR_35);
  for (VAR_36 = 0; VAR_36 < 8; VAR_36++)
   FUNC_14("\t\t%#x\t%#x\t%#x\n",
    (VAR_43[VAR_36] >> 27) & 0x1,
    (VAR_43[VAR_36] >> 24) & 0x7,
    (VAR_43[VAR_36] & ((1 << 24) - 1)));
 }

 return 0;
}
