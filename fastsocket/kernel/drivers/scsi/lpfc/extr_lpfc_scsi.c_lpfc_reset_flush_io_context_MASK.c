
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct lpfc_vport {int cfg_devloss_tmo; struct lpfc_hba* phba; } ;
struct TYPE_2__ {size_t fcp_ring; int * ring; } ;
struct lpfc_hba {TYPE_1__ sli; } ;
typedef int lpfc_ctx_cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,char*,int) ;
 int FUNC_1 (struct lpfc_vport*,int *,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,int ,int ,int ) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_vport *VAR_8, uint16_t VAR_9,
   uint64_t VAR_10, lpfc_ctx_cmd VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_8->phba;
 unsigned long VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_14)
  FUNC_1(VAR_8, &VAR_12->sli.ring[VAR_12->sli.fcp_ring],
        VAR_9, VAR_10, VAR_11);
 VAR_13 = FUNC_3(2 * VAR_8->cfg_devloss_tmo * 1000) + VAR_7;
 while (FUNC_5(VAR_13, VAR_7) && VAR_14) {
  FUNC_4(FUNC_3(20));
  VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 }
 if (VAR_14) {
  FUNC_0(VAR_8, VAR_1, VAR_2,
   "0724 I/O flush failure for context %s : cnt x%x\n",
   ((VAR_11 == VAR_4) ? "LUN" :
    ((VAR_11 == VAR_5) ? "TGT" :
     ((VAR_11 == VAR_3) ? "HOST" : "Unknown"))),
   VAR_14);
  return VAR_0;
 }
 return VAR_6;
}
