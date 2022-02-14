
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;
struct qla4_83xx_reset_entry_hdr {scalar_t__ delay; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct scsi_qla_host *VAR_0,
       struct qla4_83xx_reset_entry_hdr *VAR_1)
{
 if (VAR_1->delay)
  FUNC_0((uint32_t)((long)VAR_1->delay));
}
