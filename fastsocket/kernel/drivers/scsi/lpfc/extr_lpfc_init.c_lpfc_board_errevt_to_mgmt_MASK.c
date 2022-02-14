
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_hba {int pport; } ;
struct lpfc_board_event_header {int subcategory; int event_type; } ;
struct Scsi_Host {int dummy; } ;
typedef int board_event ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Scsi_Host*,int ,int,char*,int ) ;
 struct Scsi_Host* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_3)
{
 struct lpfc_board_event_header VAR_4;
 struct Scsi_Host *VAR_5;

 VAR_4.event_type = VAR_0;
 VAR_4.subcategory = VAR_1;
 VAR_5 = FUNC_2(VAR_3->pport);
 FUNC_1(VAR_5, FUNC_0(),
      sizeof(VAR_4),
      (char *) &VAR_4,
      VAR_2);
}
