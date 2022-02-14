
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_cmnd*,char*) ;

void FUNC_1(struct scsi_cmnd *VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_2) {
  FUNC_0(VAR_5, "unrecovered SCSI parity error.\n");
 }
 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_5, "extraneous data discarded.\n");
 }
 if (VAR_6 & VAR_0) {
  FUNC_0(VAR_5, "illegal scsi phase (4/5).\n");
 }
 if (VAR_6 & VAR_3) {
  FUNC_0(VAR_5, "ODD transfer in DATA OUT phase.\n");
 }
 if (VAR_6 & VAR_4) {
  FUNC_0(VAR_5, "ODD transfer in DATA IN phase.\n");
 }
}
