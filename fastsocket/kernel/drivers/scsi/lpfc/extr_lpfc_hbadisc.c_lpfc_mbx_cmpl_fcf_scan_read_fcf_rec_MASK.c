
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct lpfc_fcf_rec {scalar_t__ fcf_indx; int flag; scalar_t__ priority; } ;
struct TYPE_4__ {int fcf_flag; int eligible_fcf_cnt; struct lpfc_fcf_rec current_rec; struct lpfc_fcf_rec failover_rec; } ;
struct lpfc_hba {int hba_flag; scalar_t__ cfg_fcf_failover_policy; int hbalock; TYPE_2__ fcf; int fcoe_eventtag_at_fcf_scan; TYPE_1__* pport; } ;
struct fcf_record {scalar_t__ fip_priority; } ;
struct TYPE_3__ {int fc_flag; int port_state; } ;
typedef int LPFC_MBOXQ_t ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_fcf_rec*,struct fcf_record*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ,struct fcf_record*) ;
 int VAR_18 ;
 scalar_t__ FUNC_3 (struct lpfc_hba*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct lpfc_hba*,struct fcf_record*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_6 (struct lpfc_hba*) ;
 int FUNC_7 (struct lpfc_hba*,scalar_t__,struct fcf_record*) ;
 int FUNC_8 (struct lpfc_hba*,scalar_t__) ;
 struct fcf_record* FUNC_9 (struct lpfc_hba*,int *,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct lpfc_hba*,struct lpfc_fcf_rec*,struct fcf_record*,scalar_t__) ;
 int FUNC_11 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_12 (struct lpfc_hba*,struct fcf_record*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct lpfc_hba*,int *) ;
 int FUNC_14 (struct lpfc_hba*,int) ;
 int FUNC_15 (struct lpfc_hba*) ;
 int FUNC_16 (struct lpfc_hba*) ;
 int FUNC_17 (struct lpfc_fcf_rec*,struct lpfc_fcf_rec*,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (scalar_t__) ;

void
FUNC_21(struct lpfc_hba *VAR_23, LPFC_MBOXQ_t *VAR_24)
{
 struct fcf_record *VAR_25;
 uint32_t VAR_26, VAR_27;
 uint16_t VAR_28, VAR_29;
 struct lpfc_fcf_rec *VAR_30 = ((void*)0);
 uint16_t VAR_31;
 uint32_t VAR_32;
 bool VAR_33;
 int VAR_34;


 if (FUNC_3(VAR_23, VAR_16)) {
  FUNC_13(VAR_23, VAR_24);
  return;
 }


 VAR_25 = FUNC_9(VAR_23, VAR_24,
            &VAR_29);
 if (!VAR_25) {
  FUNC_5(VAR_23, VAR_8, VAR_11,
    "2765 Mailbox command READ_FCF_RECORD "
    "failed to retrieve a FCF record.\n");

  FUNC_18(&VAR_23->hbalock);
  VAR_23->hba_flag &= ~VAR_6;
  FUNC_19(&VAR_23->hbalock);
  FUNC_13(VAR_23, VAR_24);
  return;
 }


 VAR_34 = FUNC_4(VAR_23, VAR_25, &VAR_26,
          &VAR_27, &VAR_31);


 FUNC_12(VAR_23, VAR_25, VAR_31,
          VAR_29);






 if (!VAR_34) {
  FUNC_8(VAR_23,
     FUNC_2(VAR_20,
            VAR_25));
  FUNC_5(VAR_23, VAR_10, VAR_11,
    "2781 FCF (x%x) failed connection "
    "list check: (x%x/x%x/%x)\n",
    FUNC_2(VAR_20,
           VAR_25),
    FUNC_2(VAR_19,
           VAR_25),
    FUNC_2(VAR_22,
           VAR_25),
    FUNC_2(VAR_21,
           VAR_25));
  if ((VAR_23->fcf.fcf_flag & VAR_2) &&
      FUNC_10(VAR_23, &VAR_23->fcf.current_rec,
      VAR_25, VAR_15)) {
   if (FUNC_2(VAR_20, VAR_25) !=
       VAR_23->fcf.current_rec.fcf_indx) {
    FUNC_5(VAR_23, VAR_8, VAR_11,
     "2862 FCF (x%x) matches property "
     "of in-use FCF (x%x)\n",
     FUNC_2(VAR_20,
            VAR_25),
     VAR_23->fcf.current_rec.fcf_indx);
    goto read_next_fcf;
   }






   if (!(VAR_23->fcf.fcf_flag & VAR_5) &&
       !(VAR_23->fcf.fcf_flag & VAR_4)) {
    FUNC_5(VAR_23, VAR_10, VAR_11,
      "2835 Invalid in-use FCF "
      "(x%x), enter FCF failover "
      "table scan.\n",
      VAR_23->fcf.current_rec.fcf_indx);
    FUNC_18(&VAR_23->hbalock);
    VAR_23->fcf.fcf_flag |= VAR_4;
    FUNC_19(&VAR_23->hbalock);
    FUNC_13(VAR_23, VAR_24);
    FUNC_11(VAR_23,
      VAR_13);
    return;
   }
  }
  goto read_next_fcf;
 } else {
  VAR_28 = FUNC_2(VAR_20, VAR_25);
  VAR_34 = FUNC_7(VAR_23, VAR_28,
       VAR_25);
  if (VAR_34)
   goto read_next_fcf;
 }







 FUNC_18(&VAR_23->hbalock);
 if (VAR_23->fcf.fcf_flag & VAR_2) {
  if (VAR_23->cfg_fcf_failover_policy == VAR_12 &&
   FUNC_10(VAR_23, &VAR_23->fcf.current_rec,
      VAR_25, VAR_31)) {
   if (FUNC_2(VAR_20, VAR_25) ==
       VAR_23->fcf.current_rec.fcf_indx) {
    VAR_23->fcf.fcf_flag |= VAR_1;
    if (VAR_23->fcf.fcf_flag & VAR_5)

     FUNC_0(
         VAR_23);
    else if (VAR_23->fcf.fcf_flag & VAR_4)

     VAR_23->fcf.fcf_flag &= ~VAR_4;
    FUNC_19(&VAR_23->hbalock);
    FUNC_5(VAR_23, VAR_9, VAR_11,
      "2836 New FCF matches in-use "
      "FCF (x%x), port_state:x%x, "
      "fc_flag:x%x\n",
      VAR_23->fcf.current_rec.fcf_indx,
      VAR_23->pport->port_state,
      VAR_23->pport->fc_flag);
    goto out;
   } else
    FUNC_5(VAR_23, VAR_8, VAR_11,
     "2863 New FCF (x%x) matches "
     "property of in-use FCF (x%x)\n",
     FUNC_2(VAR_20,
            VAR_25),
     VAR_23->fcf.current_rec.fcf_indx);
  }







  if (!(VAR_23->fcf.fcf_flag & VAR_4)) {
   FUNC_19(&VAR_23->hbalock);
   goto read_next_fcf;
  }
 }




 if (VAR_23->fcf.fcf_flag & VAR_4)
  VAR_30 = &VAR_23->fcf.failover_rec;
 else
  VAR_30 = &VAR_23->fcf.current_rec;

 if (VAR_23->fcf.fcf_flag & VAR_1) {





  if (VAR_26 && !(VAR_30->flag & VAR_0)) {

   FUNC_5(VAR_23, VAR_9, VAR_11,
     "2837 Update current FCF record "
     "(x%x) with new FCF record (x%x)\n",
     VAR_30->fcf_indx,
     FUNC_2(VAR_20,
     VAR_25));
   FUNC_1(VAR_23, VAR_30, VAR_25,
     VAR_27, VAR_31, VAR_0);
   FUNC_19(&VAR_23->hbalock);
   goto read_next_fcf;
  }





  if (!VAR_26 && (VAR_30->flag & VAR_0)) {
   FUNC_19(&VAR_23->hbalock);
   goto read_next_fcf;
  }




  if (VAR_25->fip_priority < VAR_30->priority) {

   FUNC_5(VAR_23, VAR_9, VAR_11,
     "2838 Update current FCF record "
     "(x%x) with new FCF record (x%x)\n",
     VAR_30->fcf_indx,
     FUNC_2(VAR_20,
            VAR_25));
   FUNC_1(VAR_23, VAR_30, VAR_25,
     VAR_27, VAR_31, 0);

   VAR_23->fcf.eligible_fcf_cnt = 1;
  } else if (VAR_25->fip_priority == VAR_30->priority) {

   VAR_23->fcf.eligible_fcf_cnt++;
   VAR_33 = FUNC_14(VAR_23,
      VAR_23->fcf.eligible_fcf_cnt);
   if (VAR_33) {
    FUNC_5(VAR_23, VAR_9, VAR_11,
     "2839 Update current FCF record "
     "(x%x) with new FCF record (x%x)\n",
     VAR_30->fcf_indx,
     FUNC_2(VAR_20,
            VAR_25));

    FUNC_1(VAR_23, VAR_30,
        VAR_25,
        VAR_27, VAR_31, 0);
   }
  }
  FUNC_19(&VAR_23->hbalock);
  goto read_next_fcf;
 }




 if (VAR_30) {
  FUNC_5(VAR_23, VAR_9, VAR_11,
    "2840 Update initial FCF candidate "
    "with FCF (x%x)\n",
    FUNC_2(VAR_20,
           VAR_25));
  FUNC_1(VAR_23, VAR_30, VAR_25,
      VAR_27, VAR_31, (VAR_26 ?
      VAR_0 : 0));
  VAR_23->fcf.fcf_flag |= VAR_1;

  VAR_23->fcf.eligible_fcf_cnt = 1;

  VAR_32 = (uint32_t)(0xFFFFFFFF & VAR_18);
  FUNC_20(VAR_32);
 }
 FUNC_19(&VAR_23->hbalock);
 goto read_next_fcf;

read_next_fcf:
 FUNC_13(VAR_23, VAR_24);
 if (VAR_29 == VAR_14 || VAR_29 == 0) {
  if (VAR_23->fcf.fcf_flag & VAR_4) {
   if (!(VAR_23->fcf.failover_rec.flag & VAR_17)) {
    FUNC_5(VAR_23, VAR_10, VAR_11,
            "2782 No suitable FCF found: "
            "(x%x/x%x)\n",
            VAR_23->fcoe_eventtag_at_fcf_scan,
            FUNC_2(VAR_20,
            VAR_25));
    FUNC_18(&VAR_23->hbalock);
    if (VAR_23->hba_flag & VAR_7) {
     VAR_23->hba_flag &= ~VAR_6;
     FUNC_19(&VAR_23->hbalock);

     FUNC_5(VAR_23, VAR_9,
       VAR_11,
       "2864 On devloss tmo "
       "unreg in-use FCF and "
       "rescan FCF table\n");
     FUNC_16(VAR_23);
     return;
    }



    VAR_23->hba_flag &= ~VAR_6;
    FUNC_19(&VAR_23->hbalock);
    return;
   }
   FUNC_15(VAR_23);


   FUNC_5(VAR_23, VAR_9, VAR_11,
     "2842 Replace in-use FCF (x%x) "
     "with failover FCF (x%x)\n",
     VAR_23->fcf.current_rec.fcf_indx,
     VAR_23->fcf.failover_rec.fcf_indx);
   FUNC_17(&VAR_23->fcf.current_rec,
          &VAR_23->fcf.failover_rec,
          sizeof(struct lpfc_fcf_rec));





   FUNC_18(&VAR_23->hbalock);
   VAR_23->fcf.fcf_flag &= ~VAR_4;
   FUNC_19(&VAR_23->hbalock);

   FUNC_6(VAR_23);
  } else {




   if ((VAR_23->fcf.fcf_flag & VAR_3) ||
       (VAR_23->fcf.fcf_flag & VAR_5))
    return;

   if (VAR_23->cfg_fcf_failover_policy == VAR_12 &&
    VAR_23->fcf.fcf_flag & VAR_2) {






    FUNC_5(VAR_23, VAR_9, VAR_11,
      "2841 In-use FCF record (x%x) "
      "not reported, entering fast "
      "FCF failover mode scanning.\n",
      VAR_23->fcf.current_rec.fcf_indx);
    FUNC_18(&VAR_23->hbalock);
    VAR_23->fcf.fcf_flag |= VAR_4;
    FUNC_19(&VAR_23->hbalock);
    FUNC_11(VAR_23,
      VAR_13);
    return;
   }

   FUNC_6(VAR_23);
  }
 } else
  FUNC_11(VAR_23, VAR_29);
 return;

out:
 FUNC_13(VAR_23, VAR_24);
 FUNC_6(VAR_23);

 return;
}
