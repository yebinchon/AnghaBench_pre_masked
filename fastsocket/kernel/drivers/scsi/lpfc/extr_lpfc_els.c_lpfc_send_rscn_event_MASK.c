
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_rscn_event_header {int payload_length; int rscn_payload; int event_type; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_els_event_header {int dummy; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Scsi_Host*,int ,int,char*,int ) ;
 int FUNC_3 (struct lpfc_rscn_event_header*) ;
 struct lpfc_rscn_event_header* FUNC_4 (int,int ) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*) ;
 struct Scsi_Host* FUNC_6 (struct lpfc_vport*) ;
 int FUNC_7 (int ,int*,int) ;

__attribute__((used)) static void
FUNC_8(struct lpfc_vport *VAR_6,
  struct lpfc_iocbq *VAR_7)
{
 struct lpfc_dmabuf *VAR_8;
 struct Scsi_Host *VAR_9 = FUNC_6(VAR_6);
 uint32_t *VAR_10;
 uint32_t VAR_11;
 struct lpfc_rscn_event_header *VAR_12;

 VAR_8 = (struct lpfc_dmabuf *) VAR_7->context2;
 VAR_10 = (uint32_t *) VAR_8->virt;
 VAR_11 = FUNC_0(*VAR_10 & ~VAR_0);

 VAR_12 = FUNC_4(sizeof(struct lpfc_rscn_event_header) +
  VAR_11, VAR_2);
 if (!VAR_12) {
  FUNC_5(VAR_6, VAR_3, VAR_4,
   "0147 Failed to allocate memory for RSCN event\n");
  return;
 }
 VAR_12->event_type = VAR_1;
 VAR_12->payload_length = VAR_11;
 FUNC_7(VAR_12->rscn_payload, VAR_10,
  VAR_11);

 FUNC_2(VAR_9,
  FUNC_1(),
  sizeof(struct lpfc_els_event_header) + VAR_11,
  (char *)VAR_12,
  VAR_5);

 FUNC_3(VAR_12);
}
