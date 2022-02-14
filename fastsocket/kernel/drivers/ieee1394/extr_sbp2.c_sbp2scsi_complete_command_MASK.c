
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_cmnd {int result; } ;
struct sbp2_lu {int ne; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;







 int FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_3(struct sbp2_lu *VAR_5, u32 VAR_6,
          struct scsi_cmnd *VAR_7,
          void (*VAR_8)(struct scsi_cmnd *))
{
 if (!VAR_7) {
  FUNC_0("SCpnt is NULL");
  return;
 }

 switch (VAR_6) {
 case 130:
  VAR_7->result = VAR_4 << 16;
  break;

 case 134:
  FUNC_0("SBP2_SCSI_STATUS_BUSY");
  VAR_7->result = VAR_1 << 16;
  break;

 case 133:
  VAR_7->result = VAR_0 << 1 | VAR_4 << 16;
  break;

 case 128:
  FUNC_0("SBP2_SCSI_STATUS_SELECTION_TIMEOUT");
  VAR_7->result = VAR_3 << 16;
  FUNC_2(VAR_7);
  break;

 case 131:
 case 129:
 case 132:
  FUNC_0("Bad SCSI status = %x", VAR_6);
  VAR_7->result = VAR_2 << 16;
  FUNC_2(VAR_7);
  break;

 default:
  FUNC_0("Unsupported SCSI status = %x", VAR_6);
  VAR_7->result = VAR_2 << 16;
 }



 if (!FUNC_1(VAR_5->ne)
     && (VAR_6 != 130)) {
  FUNC_0("Completing command with busy (bus reset)");
  VAR_7->result = VAR_1 << 16;
 }


 VAR_8(VAR_7);
}
