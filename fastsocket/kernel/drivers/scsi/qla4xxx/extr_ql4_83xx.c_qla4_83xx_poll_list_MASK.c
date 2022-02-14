
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla4_83xx_reset_entry_hdr {scalar_t__ count; scalar_t__ delay; } ;
struct qla4_83xx_poll {int test_value; int test_mask; } ;
struct qla4_83xx_entry {int arg2; int arg1; } ;


 scalar_t__ FUNC_0 (struct scsi_qla_host*,int ,long,int ,int ) ;
 int FUNC_1 (struct scsi_qla_host*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct scsi_qla_host *VAR_0,
    struct qla4_83xx_reset_entry_hdr *VAR_1)
{
 long VAR_2;
 struct qla4_83xx_entry *VAR_3;
 struct qla4_83xx_poll *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

 VAR_4 = (struct qla4_83xx_poll *)
   ((char *)VAR_1 + sizeof(struct qla4_83xx_reset_entry_hdr));



 VAR_3 = (struct qla4_83xx_entry *)((char *)VAR_4 +
          sizeof(struct qla4_83xx_poll));

 VAR_2 = (long)VAR_1->delay;
 if (!VAR_2) {
  for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++, VAR_3++) {
   FUNC_0(VAR_0, VAR_3->arg1, VAR_2,
        VAR_4->test_mask,
        VAR_4->test_value);
  }
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_1->count; VAR_5++, VAR_3++) {
   if (FUNC_0(VAR_0, VAR_3->arg1, VAR_2,
            VAR_4->test_mask,
            VAR_4->test_value)) {
    FUNC_1(VAR_0, VAR_3->arg1,
         &VAR_6);
    FUNC_1(VAR_0, VAR_3->arg2,
         &VAR_6);
   }
  }
 }
}
