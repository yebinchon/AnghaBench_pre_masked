
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
typedef int inq_data ;


 char VAR_0 ;
 int FUNC_0 (struct scsi_cmnd*,char*,int) ;
 int FUNC_1 (struct scsi_cmnd*,char*,int) ;

__attribute__((used)) static void FUNC_2(struct scsi_cmnd *VAR_1)
{
 char VAR_2;
 FUNC_1(VAR_1, &VAR_2, sizeof(VAR_2));
 if ((VAR_2 & 0x20) && (VAR_2 & 0x1f) == VAR_0) {
  VAR_2 &= 0xdf;
  FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2));
 }
}
