
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla4_83xx_rmw {int dummy; } ;
struct qla4_83xx_reset_entry_hdr {scalar_t__ count; scalar_t__ delay; } ;
struct qla4_83xx_entry {int arg2; int arg1; } ;


 int FUNC_0 (struct scsi_qla_host*,int ,int ,struct qla4_83xx_rmw*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_0,
     struct qla4_83xx_reset_entry_hdr *VAR_1)
{
 struct qla4_83xx_entry *VAR_2;
 struct qla4_83xx_rmw *VAR_3;
 uint32_t VAR_4;

 VAR_3 = (struct qla4_83xx_rmw *)
      ((char *)VAR_1 + sizeof(struct qla4_83xx_reset_entry_hdr));
 VAR_2 = (struct qla4_83xx_entry *)
    ((char *)VAR_3 + sizeof(struct qla4_83xx_rmw));

 for (VAR_4 = 0; VAR_4 < VAR_1->count; VAR_4++, VAR_2++) {
  FUNC_0(VAR_0, VAR_2->arg1, VAR_2->arg2,
          VAR_3);
  if (VAR_1->delay)
   FUNC_1((uint32_t)(VAR_1->delay));
 }
}
