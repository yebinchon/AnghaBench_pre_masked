
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {int load_flag; scalar_t__ port_state; scalar_t__ fc_map_cnt; scalar_t__ fc_prli_sent; scalar_t__ num_disc_nodes; struct lpfc_hba* phba; } ;
struct TYPE_2__ {int sli_flag; } ;
struct lpfc_hba {scalar_t__ link_state; TYPE_1__ sli; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct Scsi_Host *VAR_6, unsigned long VAR_7)
{
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *) VAR_6->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 int VAR_10 = 0;

 FUNC_2(VAR_6->host_lock);

 if (VAR_8->load_flag & VAR_0) {
  VAR_10 = 1;
  goto finished;
 }
 if (VAR_7 >= FUNC_1(30 * 1000)) {
  FUNC_0(VAR_9, VAR_1, VAR_2,
    "0461 Scanning longer than 30 "
    "seconds.  Continuing initialization\n");
  VAR_10 = 1;
  goto finished;
 }
 if (VAR_7 >= FUNC_1(15 * 1000) &&
     VAR_9->link_state <= VAR_3) {
  FUNC_0(VAR_9, VAR_1, VAR_2,
    "0465 Link down longer than 15 "
    "seconds.  Continuing initialization\n");
  VAR_10 = 1;
  goto finished;
 }

 if (VAR_8->port_state != VAR_5)
  goto finished;
 if (VAR_8->num_disc_nodes || VAR_8->fc_prli_sent)
  goto finished;
 if (VAR_8->fc_map_cnt == 0 && VAR_7 < FUNC_1(2 * 1000))
  goto finished;
 if ((VAR_9->sli.sli_flag & VAR_4) != 0)
  goto finished;

 VAR_10 = 1;

finished:
 FUNC_3(VAR_6->host_lock);
 return VAR_10;
}
