
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint ;
typedef scalar_t__ u16 ;
struct wiphy {int dummy; } ;
struct ssb_sprom {int board_rev; int boardflags_lo; int boardflags_hi; int boardflags2_hi; scalar_t__ boardflags2_lo; int revision; } ;
struct shared_phy_params {int unit; size_t corerev; int vid; scalar_t__ did; scalar_t__ boardtype; int boardflags; scalar_t__ boardflags2; scalar_t__ boardrev; int sromrev; int chippkg; int chiprev; scalar_t__ chip; int * physhim; int * sih; } ;
struct pci_dev {int vendor; scalar_t__ device; } ;
struct brcms_hardware {int unit; int _piomode; int vendorid; scalar_t__ deviceid; size_t corerev; int boardflags; int _nbands; int * sih; struct bcma_device* d11core; int etheraddr; TYPE_7__* band; int machwcap; int phy_sh; int * xmtfifo_sz; int machwcap_backup; scalar_t__ boardflags2; scalar_t__ boardrev; int sromrev; int * physhim; TYPE_7__** bandstate; struct brcms_c_info* wlc; } ;
struct brcms_c_info {int vendorid; scalar_t__ deviceid; TYPE_5__* band; struct wiphy* wiphy; TYPE_4__* core; int wl; TYPE_3__* pub; struct brcms_hardware* hw; } ;
struct TYPE_10__ {size_t rev; } ;
struct bcma_device {int core_index; TYPE_2__ id; TYPE_6__* bus; } ;
struct TYPE_15__ {int bandunit; int CWmax; int CWmin; int radiorev; int radioid; scalar_t__ phyrev; int phytype; int * pi; int core_flags; void* abgphy_encore; void* bandtype; } ;
struct TYPE_9__ {int vendor; scalar_t__ type; } ;
struct TYPE_14__ {scalar_t__ hosttype; TYPE_1__ boardinfo; struct ssb_sprom sprom; struct pci_dev* host_pci; } ;
struct TYPE_13__ {int bandunit; int radiorev; int radioid; scalar_t__ phyrev; int phytype; int * pi; void* abgphy_encore; void* bandtype; } ;
struct TYPE_12__ {int coreidx; } ;
struct TYPE_11__ {size_t corerev; int boardflags; int _nbands; scalar_t__ boardflags2; scalar_t__ boardrev; int sromrev; int * sih; } ;


 int VAR_0 ;
 size_t FUNC_0 (int **) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int) ;
 size_t VAR_16 ;
 int * FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct bcma_device*,int ) ;
 int FUNC_15 (struct brcms_c_info*,int,int) ;
 int FUNC_16 (struct brcms_hardware*,int ) ;
 int FUNC_17 (struct brcms_hardware*,int ) ;
 int FUNC_18 (struct brcms_hardware*) ;
 int FUNC_19 (struct brcms_hardware*,int,int ) ;
 int FUNC_20 (struct brcms_hardware*) ;
 int FUNC_21 (struct brcms_hardware*,int ) ;
 int FUNC_22 (struct bcma_device*) ;
 int FUNC_23 (struct brcms_hardware*) ;
 int FUNC_24 (struct brcms_hardware*,int ) ;
 int FUNC_25 (struct brcms_hardware*) ;
 int FUNC_26 (struct brcms_hardware*,int) ;
 int FUNC_27 (struct brcms_hardware*) ;
 int FUNC_28 (struct bcma_device*,char*,int,int,scalar_t__) ;
 scalar_t__ FUNC_29 (int ) ;
 scalar_t__ FUNC_30 (int ) ;
 int VAR_17 ;
 int FUNC_31 (struct wiphy*,char*,int,...) ;
 int * FUNC_32 (int ,struct bcma_device*,void*,struct wiphy*) ;
 int FUNC_33 (int *) ;
 void* FUNC_34 (int *) ;
 int FUNC_35 (int *,int *,scalar_t__*,int *,int *) ;
 int FUNC_36 (int *,int ) ;
 int FUNC_37 (struct shared_phy_params*) ;
 int * FUNC_38 (struct brcms_hardware*,int ,struct brcms_c_info*) ;
 int ** VAR_18 ;

__attribute__((used)) static int FUNC_39(struct brcms_c_info *VAR_19, struct bcma_device *VAR_20,
     uint VAR_21, bool VAR_22)
{
 struct brcms_hardware *VAR_23;
 uint VAR_24 = 0;
 uint VAR_25;
 bool VAR_26 = 0;
 struct shared_phy_params VAR_27;
 struct wiphy *VAR_28 = VAR_19->wiphy;
 struct pci_dev *VAR_29 = VAR_20->bus->host_pci;
 struct ssb_sprom *VAR_30 = &VAR_20->bus->sprom;

 if (VAR_20->bus->hosttype == VAR_6)
  FUNC_28(VAR_20, "wl%d: vendor 0x%x device 0x%x\n", VAR_21,
          VAR_29->vendor,
          VAR_29->device);
 else
  FUNC_28(VAR_20, "wl%d: vendor 0x%x device 0x%x\n", VAR_21,
          VAR_20->bus->boardinfo.vendor,
          VAR_20->bus->boardinfo.type);

 VAR_26 = 1;

 VAR_23 = VAR_19->hw;
 VAR_23->wlc = VAR_19;
 VAR_23->unit = VAR_21;
 VAR_23->band = VAR_23->bandstate[0];
 VAR_23->_piomode = VAR_22;


 FUNC_18(VAR_23);





 VAR_23->sih = FUNC_7(VAR_20->bus);
 if (VAR_23->sih == ((void*)0)) {
  FUNC_31(VAR_28, "wl%d: brcms_b_attach: si_attach failed\n",
     VAR_21);
  VAR_24 = 11;
  goto fail;
 }


 if (!FUNC_22(VAR_20)) {
  FUNC_31(VAR_28, "wl%d: brcms_b_attach: Unsupported device\n",
    VAR_21);
  VAR_24 = 12;
  goto fail;
 }

 if (VAR_20->bus->hosttype == VAR_6) {
  VAR_23->vendorid = VAR_29->vendor;
  VAR_23->deviceid = VAR_29->device;
 } else {
  VAR_23->vendorid = VAR_20->bus->boardinfo.vendor;
  VAR_23->deviceid = VAR_20->bus->boardinfo.type;
 }

 VAR_23->d11core = VAR_20;
 VAR_23->corerev = VAR_20->id.rev;


 if (!FUNC_25(VAR_23)) {
  VAR_24 = 13;
  goto fail;
 }


 FUNC_8(VAR_23->sih);







 FUNC_16(VAR_23, VAR_5);
 FUNC_17(VAR_23, VAR_11);

 if (!FUNC_20(VAR_23)) {
  FUNC_31(VAR_28, "wl%d: brcms_b_attach: validate_chip_access "
   "failed\n", VAR_21);
  VAR_24 = 14;
  goto fail;
 }


 VAR_25 = VAR_30->board_rev;

 if (VAR_25 == VAR_8)
  VAR_25 = VAR_9;
 VAR_23->boardrev = (u16) VAR_25;
 if (!FUNC_27(VAR_23)) {
  FUNC_31(VAR_28, "wl%d: brcms_b_attach: Unsupported Broadcom "
     "board type (0x%x)" " or revision level (0x%x)\n",
     VAR_21, FUNC_9(VAR_23->sih),
     VAR_23->boardrev);
  VAR_24 = 15;
  goto fail;
 }
 VAR_23->sromrev = VAR_30->revision;
 VAR_23->boardflags = VAR_30->boardflags_lo + (VAR_30->boardflags_hi << 16);
 VAR_23->boardflags2 = VAR_30->boardflags2_lo + (VAR_30->boardflags2_hi << 16);

 if (VAR_23->boardflags & VAR_7)
  FUNC_19(VAR_23, 1, VAR_10);


 if (VAR_23->deviceid == VAR_2 ||
     VAR_23->deviceid == VAR_3 ||
     VAR_23->deviceid == VAR_1)

  VAR_23->_nbands = 2;
 else
  VAR_23->_nbands = 1;

 if ((FUNC_10(VAR_23->sih) == VAR_4))
  VAR_23->_nbands = 1;




 VAR_19->vendorid = VAR_23->vendorid;
 VAR_19->deviceid = VAR_23->deviceid;
 VAR_19->pub->sih = VAR_23->sih;
 VAR_19->pub->corerev = VAR_23->corerev;
 VAR_19->pub->sromrev = VAR_23->sromrev;
 VAR_19->pub->boardrev = VAR_23->boardrev;
 VAR_19->pub->boardflags = VAR_23->boardflags;
 VAR_19->pub->boardflags2 = VAR_23->boardflags2;
 VAR_19->pub->_nbands = VAR_23->_nbands;

 VAR_23->physhim = FUNC_38(VAR_23, VAR_19->wl, VAR_19);

 if (VAR_23->physhim == ((void*)0)) {
  FUNC_31(VAR_28, "wl%d: brcms_b_attach: wlc_phy_shim_attach "
   "failed\n", VAR_21);
  VAR_24 = 25;
  goto fail;
 }


 VAR_27.sih = VAR_23->sih;
 VAR_27.physhim = VAR_23->physhim;
 VAR_27.unit = VAR_21;
 VAR_27.corerev = VAR_23->corerev;
 VAR_27.vid = VAR_23->vendorid;
 VAR_27.did = VAR_23->deviceid;
 VAR_27.chip = FUNC_10(VAR_23->sih);
 VAR_27.chiprev = FUNC_12(VAR_23->sih);
 VAR_27.chippkg = FUNC_11(VAR_23->sih);
 VAR_27.sromrev = VAR_23->sromrev;
 VAR_27.boardtype = FUNC_9(VAR_23->sih);
 VAR_27.boardrev = VAR_23->boardrev;
 VAR_27.boardflags = VAR_23->boardflags;
 VAR_27.boardflags2 = VAR_23->boardflags2;


 VAR_23->phy_sh = FUNC_37(&VAR_27);
 if (!VAR_23->phy_sh) {
  VAR_24 = 16;
  goto fail;
 }


 for (VAR_25 = 0; VAR_25 < VAR_23->_nbands; VAR_25++) {





  FUNC_26(VAR_23, VAR_25);

  VAR_23->band->bandunit = VAR_25;
  VAR_23->band->bandtype = VAR_25 ? VAR_13 : VAR_12;
  VAR_19->band->bandunit = VAR_25;
  VAR_19->band->bandtype = VAR_25 ? VAR_13 : VAR_12;
  VAR_19->core->coreidx = VAR_20->core_index;

  VAR_23->machwcap = FUNC_14(VAR_20, FUNC_3(VAR_17));
  VAR_23->machwcap_backup = VAR_23->machwcap;


  FUNC_6((VAR_23->corerev - VAR_16) < 0 ||
   (VAR_23->corerev - VAR_16) >
    FUNC_0(VAR_18));
  VAR_23->xmtfifo_sz =
      VAR_18[(VAR_23->corerev - VAR_16)];
  FUNC_6(!VAR_23->xmtfifo_sz[0]);


  VAR_23->band->pi =
   FUNC_32(VAR_23->phy_sh, VAR_20,
           VAR_23->band->bandtype,
           VAR_19->wiphy);
  if (VAR_23->band->pi == ((void*)0)) {
   FUNC_31(VAR_28, "wl%d: brcms_b_attach: wlc_phy_"
      "attach failed\n", VAR_21);
   VAR_24 = 17;
   goto fail;
  }

  FUNC_36(VAR_23->band->pi, VAR_23->machwcap);

  FUNC_35(VAR_23->band->pi, &VAR_23->band->phytype,
           &VAR_23->band->phyrev,
           &VAR_23->band->radioid,
           &VAR_23->band->radiorev);
  VAR_23->band->abgphy_encore =
      FUNC_34(VAR_23->band->pi);
  VAR_19->band->abgphy_encore = FUNC_34(VAR_23->band->pi);
  VAR_23->band->core_flags =
      FUNC_33(VAR_23->band->pi);


  if (FUNC_2(VAR_23->band)) {
   if (FUNC_5(VAR_23->band->phyrev))
    goto good_phy;
   else
    goto bad_phy;
  } else if (FUNC_1(VAR_23->band)) {
   if (FUNC_4(VAR_23->band->phyrev))
    goto good_phy;
   else
    goto bad_phy;
  } else {
 bad_phy:
   FUNC_31(VAR_28, "wl%d: brcms_b_attach: unsupported "
      "phy type/rev (%d/%d)\n", VAR_21,
      VAR_23->band->phytype, VAR_23->band->phyrev);
   VAR_24 = 18;
   goto fail;
  }

 good_phy:
  VAR_19->band->pi = VAR_23->band->pi;
  VAR_19->band->phytype = VAR_23->band->phytype;
  VAR_19->band->phyrev = VAR_23->band->phyrev;
  VAR_19->band->radioid = VAR_23->band->radioid;
  VAR_19->band->radiorev = VAR_23->band->radiorev;


  VAR_23->band->CWmin = VAR_0;
  VAR_23->band->CWmax = VAR_15;

  if (!FUNC_15(VAR_19, VAR_25, VAR_26)) {
   VAR_24 = 19;
   goto fail;
  }
 }


 FUNC_23(VAR_23);


 FUNC_13(VAR_23->sih);


 FUNC_21(VAR_23, VAR_14);
 FUNC_24(VAR_23, VAR_23->etheraddr);

 if (FUNC_29(VAR_23->etheraddr) ||
     FUNC_30(VAR_23->etheraddr)) {
  FUNC_31(VAR_28, "wl%d: brcms_b_attach: bad macaddr\n",
     VAR_21);
  VAR_24 = 22;
  goto fail;
 }

 FUNC_28(VAR_23->d11core, "deviceid 0x%x nbands %d board 0x%x\n",
         VAR_23->deviceid, VAR_23->_nbands,
         FUNC_9(VAR_23->sih));

 return VAR_24;

 fail:
 FUNC_31(VAR_28, "wl%d: brcms_b_attach: failed with err %d\n", VAR_21,
    VAR_24);
 return VAR_24;
}
