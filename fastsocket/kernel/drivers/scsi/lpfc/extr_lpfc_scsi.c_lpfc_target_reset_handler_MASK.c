
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct lpfc_vport {int dummy; } ;
struct lpfc_scsi_event_header {int wwnn; int wwpn; scalar_t__ lun; int subcategory; int event_type; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int scsi_event ;
struct TYPE_2__ {unsigned int id; unsigned int lun; struct lpfc_rport_data* hostdata; struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsi_Host*,int ,int,char*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct scsi_cmnd*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_5 (struct lpfc_vport*,unsigned int,unsigned int,int ) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_rport_data*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (int ,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct scsi_cmnd *VAR_9)
{
 struct Scsi_Host *VAR_10 = VAR_9->device->host;
 struct lpfc_vport *VAR_11 = (struct lpfc_vport *) VAR_10->hostdata;
 struct lpfc_rport_data *VAR_12 = VAR_9->device->hostdata;
 struct lpfc_nodelist *VAR_13;
 unsigned VAR_14 = VAR_9->device->id;
 unsigned int VAR_15 = VAR_9->device->lun;
 struct lpfc_scsi_event_header VAR_16;
 int VAR_17 = 0, VAR_18 = VAR_8;

 if (!VAR_12) {
  FUNC_4(VAR_11, VAR_3, VAR_4,
   "0799 Target Reset rport failure: rdata x%p\n", VAR_12);
  return VAR_0;
 }
 VAR_13 = VAR_12->pnode;
 VAR_17 = FUNC_0(VAR_9);
 if (VAR_17 != 0 && VAR_17 != VAR_8)
  return VAR_17;

 VAR_17 = FUNC_3(VAR_11, VAR_9);
 if (VAR_17 == VAR_0) {
  FUNC_4(VAR_11, VAR_3, VAR_4,
   "0722 Target Reset rport failure: rdata x%p\n", VAR_12);
  return VAR_0;
 }

 VAR_16.event_type = VAR_2;
 VAR_16.subcategory = VAR_6;
 VAR_16.lun = 0;
 FUNC_7(VAR_16.wwpn, &VAR_13->nlp_portname, sizeof(struct lpfc_name));
 FUNC_7(VAR_16.wwnn, &VAR_13->nlp_nodename, sizeof(struct lpfc_name));

 FUNC_2(VAR_10, FUNC_1(),
  sizeof(VAR_16), (char *)&VAR_16, VAR_7);

 VAR_17 = FUNC_6(VAR_11, VAR_12, VAR_14, VAR_15,
     VAR_1);

 FUNC_4(VAR_11, VAR_3, VAR_4,
    "0723 SCSI layer issued Target Reset (%d, %d) "
    "return x%x\n", VAR_14, VAR_15, VAR_17);







 VAR_18 = FUNC_5(VAR_11, VAR_14, VAR_15,
       VAR_5);
 return VAR_18;
}
