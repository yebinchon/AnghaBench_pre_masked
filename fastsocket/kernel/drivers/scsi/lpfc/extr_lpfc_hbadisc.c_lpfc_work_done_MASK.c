
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int work_port_events; int work_port_lock; } ;
struct lpfc_sli_ring {int flag; int txq; } ;
struct TYPE_4__ {struct lpfc_sli_ring* ring; } ;
struct TYPE_3__ {int fcf_flag; } ;
struct lpfc_hba {int work_ha; scalar_t__ pci_dev_grp; int hba_flag; int max_vports; scalar_t__ link_state; scalar_t__ sli_rev; int hbalock; int HCregaddr; int data_flags; TYPE_2__ sli; struct lpfc_vport* pport; TYPE_1__ fcf; } ;


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
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int *) ;
 struct lpfc_vport** FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (struct lpfc_hba*,char*,int,int,int ) ;
 int FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_vport**) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_vport*) ;
 int FUNC_8 (struct lpfc_vport*) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_hba*) ;
 int FUNC_13 (struct lpfc_hba*) ;
 int FUNC_14 (struct lpfc_hba*) ;
 int FUNC_15 (struct lpfc_hba*) ;
 int FUNC_16 (struct lpfc_hba*) ;
 int FUNC_17 (struct lpfc_hba*) ;
 int FUNC_18 (struct lpfc_hba*) ;
 int FUNC_19 (struct lpfc_hba*) ;
 int FUNC_20 (struct lpfc_hba*) ;
 int FUNC_21 (struct lpfc_hba*) ;
 int FUNC_22 (struct lpfc_hba*,struct lpfc_sli_ring*,int) ;
 int FUNC_23 (struct lpfc_hba*,int ) ;
 int FUNC_24 (struct lpfc_hba*) ;
 int FUNC_25 (struct lpfc_hba*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int,int ) ;

__attribute__((used)) static void
FUNC_31(struct lpfc_hba *VAR_30)
{
 struct lpfc_sli_ring *VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34, VAR_35;
 struct lpfc_vport **VAR_36;
 struct lpfc_vport *VAR_37;
 int VAR_38;

 FUNC_28(&VAR_30->hbalock);
 VAR_32 = VAR_30->work_ha;
 VAR_30->work_ha = 0;
 FUNC_29(&VAR_30->hbalock);


 if (VAR_30->pci_dev_grp == VAR_17)
  FUNC_20(VAR_30);

 if (VAR_32 & VAR_4)

  FUNC_9(VAR_30);

 if (VAR_32 & VAR_6)
  FUNC_21(VAR_30);

 if (VAR_32 & VAR_5)
  FUNC_10(VAR_30);


 if (VAR_30->pci_dev_grp == VAR_17) {
  if (VAR_30->hba_flag & VAR_9)
   FUNC_11(VAR_30);
  if (VAR_30->hba_flag & VAR_3)
   FUNC_19(VAR_30);
  if (VAR_30->hba_flag & VAR_1)
   FUNC_17(VAR_30);
  if (VAR_30->hba_flag & VAR_0)
   FUNC_16(VAR_30);
  if (VAR_30->hba_flag & VAR_8) {
   FUNC_28(&VAR_30->hbalock);
   VAR_30->hba_flag &= ~VAR_8;
   FUNC_29(&VAR_30->hbalock);
   FUNC_23(VAR_30, VAR_14);
  }
  if (VAR_30->fcf.fcf_flag & VAR_2)
   FUNC_18(VAR_30);
 }

 VAR_36 = FUNC_1(VAR_30);
 if (VAR_36 != ((void*)0))
  for (VAR_38 = 0; VAR_38 <= VAR_30->max_vports; VAR_38++) {




   if (VAR_36[VAR_38] == ((void*)0) && VAR_38 == 0)
    VAR_37 = VAR_30->pport;
   else
    VAR_37 = VAR_36[VAR_38];
   if (VAR_37 == ((void*)0))
    break;
   FUNC_28(&VAR_37->work_port_lock);
   VAR_35 = VAR_37->work_port_events;
   VAR_37->work_port_events &= ~VAR_35;
   FUNC_29(&VAR_37->work_port_lock);
   if (VAR_35 & VAR_22)
    FUNC_5(VAR_37);
   if (VAR_35 & VAR_23)
    FUNC_7(VAR_37);
   if (VAR_35 & VAR_26)
    FUNC_12(VAR_30);
   if (VAR_35 & VAR_27)
    FUNC_13(VAR_30);
   if (VAR_35 & VAR_24)
    FUNC_24(VAR_30);
   if (VAR_35 & VAR_25)
    FUNC_8(VAR_37);
   if (VAR_35 & VAR_28)
    FUNC_14(VAR_30);
   if (VAR_35 & VAR_29)
    FUNC_15(VAR_30);
   if (VAR_35 & VAR_21)
    FUNC_3(VAR_37);
  }
 FUNC_4(VAR_30, VAR_36);

 VAR_31 = &VAR_30->sli.ring[VAR_15];
 VAR_33 = (VAR_32 & (VAR_7 << (4*VAR_15)));
 VAR_33 >>= (4*VAR_15);
 if ((VAR_33 & VAR_7) ||
     (VAR_31->flag & VAR_13) ||
     (VAR_30->hba_flag & VAR_10)) {
  if (VAR_31->flag & VAR_20) {
   VAR_31->flag |= VAR_13;

   FUNC_27(VAR_12, &VAR_30->data_flags);
  } else {
   if (VAR_30->link_state >= VAR_16) {
    VAR_31->flag &= ~VAR_13;
    FUNC_22(VAR_30, VAR_31,
        (VAR_33 &
        VAR_7));
   }
  }
  if ((VAR_30->sli_rev == VAR_19) &
     (!FUNC_0(&VAR_31->txq)))
   FUNC_6(VAR_30);



  if (VAR_30->sli_rev <= VAR_18) {
   FUNC_28(&VAR_30->hbalock);
   VAR_34 = FUNC_26(VAR_30->HCregaddr);
   if (!(VAR_34 & (VAR_11 << VAR_15))) {
    FUNC_2(VAR_30,
     "WRK Enable ring: cntl:x%x hacopy:x%x",
     VAR_34, VAR_32, 0);

    VAR_34 |= (VAR_11 << VAR_15);
    FUNC_30(VAR_34, VAR_30->HCregaddr);
    FUNC_26(VAR_30->HCregaddr);
   } else {
    FUNC_2(VAR_30,
     "WRK Ring ok:     cntl:x%x hacopy:x%x",
     VAR_34, VAR_32, 0);
   }
   FUNC_29(&VAR_30->hbalock);
  }
 }
 FUNC_25(VAR_30);
}
