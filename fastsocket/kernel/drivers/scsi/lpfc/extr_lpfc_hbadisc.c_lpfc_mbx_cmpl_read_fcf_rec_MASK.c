
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int fcf_flag; } ;
struct lpfc_hba {scalar_t__ link_state; TYPE_1__ fcf; } ;
struct fcf_record {int dummy; } ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct fcf_record*) ;
 int VAR_4 ;
 int FUNC_1 (struct lpfc_hba*,struct fcf_record*,int *,int *,int *) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_3 (struct lpfc_hba*,int ,struct fcf_record*) ;
 struct fcf_record* FUNC_4 (struct lpfc_hba*,int *,int *) ;
 int FUNC_5 (struct lpfc_hba*,struct fcf_record*,int ,int ) ;
 int FUNC_6 (struct lpfc_hba*,int *) ;

void
FUNC_7(struct lpfc_hba *VAR_5, LPFC_MBOXQ_t *VAR_6)
{
 struct fcf_record *VAR_7;
 uint32_t VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11;
 uint16_t VAR_12;
 int VAR_13;


 if (VAR_5->link_state < VAR_3)
  goto out;


 if (!(VAR_5->fcf.fcf_flag & VAR_0))
  goto out;


 VAR_7 = FUNC_4(VAR_5, VAR_6,
            &VAR_11);
 if (!VAR_7) {
  FUNC_2(VAR_5, VAR_1, VAR_2,
    "2767 Mailbox command READ_FCF_RECORD "
    "failed to retrieve a FCF record.\n");
  goto out;
 }


 VAR_13 = FUNC_1(VAR_5, VAR_7, &VAR_8,
          &VAR_9, &VAR_12);


 FUNC_5(VAR_5, VAR_7, VAR_12,
          VAR_11);

 if (!VAR_13)
  goto out;


 VAR_10 = FUNC_0(VAR_4, VAR_7);

 VAR_13 = FUNC_3(VAR_5, VAR_10, VAR_7);

out:
 FUNC_6(VAR_5, VAR_6);
}
