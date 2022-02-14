
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_sli_ring {int txcmplq; } ;
struct lpfc_sli {int num_rings; struct lpfc_sli_ring* ring; } ;
struct lpfc_hba {struct lpfc_sli sli; TYPE_1__* pport; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {int fc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_3 (struct lpfc_hba*,int*,struct completion*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct completion*) ;

__attribute__((used)) static int
FUNC_6(struct lpfc_hba *VAR_6, uint32_t VAR_7)
{
 struct completion VAR_8;
 struct lpfc_sli_ring *VAR_9;
 struct lpfc_sli *VAR_10;
 int VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 if (VAR_6->pport->fc_flag & VAR_2)
  return 0;

 FUNC_0(&VAR_8);
 VAR_14 = FUNC_3(VAR_6, &VAR_11, &VAR_8,
         VAR_5);
 if (VAR_14 == 0)
  return -VAR_1;

 FUNC_5(&VAR_8);

 if (VAR_11 != 0)
  return -VAR_0;

 VAR_10 = &VAR_6->sli;




 for (VAR_13 = 0; VAR_13 < VAR_10->num_rings; VAR_13++) {
  VAR_9 = &VAR_10->ring[VAR_13];
  while (!FUNC_1(&VAR_9->txcmplq)) {
   FUNC_4(10);
   if (VAR_12++ > 500) {
    FUNC_2(VAR_6,
     VAR_3, VAR_4,
     "0466 Outstanding IO when "
     "bringing Adapter offline\n");
    break;
   }
  }
 }

 FUNC_0(&VAR_8);
 VAR_14 = FUNC_3(VAR_6, &VAR_11, &VAR_8, VAR_7);
 if (VAR_14 == 0)
  return -VAR_1;

 FUNC_5(&VAR_8);

 if (VAR_11 != 0)
  return -VAR_0;

 return 0;
}
