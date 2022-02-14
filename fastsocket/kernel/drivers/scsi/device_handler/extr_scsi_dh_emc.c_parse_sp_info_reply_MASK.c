
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct clariion_dh_data {int* buffer; int default_sp; int lun_state; int current_sp; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct scsi_device*,char*,int ,...) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_6,
          struct clariion_dh_data *VAR_7)
{
 int VAR_8 = VAR_5;


 if (VAR_7->buffer[48] != 0) {
  FUNC_0(VAR_1, VAR_6, "%s: Detected in-progress "
       "ucode upgrade NDU operation while finding "
       "current active SP.", VAR_0);
  VAR_8 = VAR_3;
  goto out;
 }
 if (VAR_7->buffer[4] > 2) {

  FUNC_0(VAR_1, VAR_6,
       "%s: invalid VPD page 0xC0 format\n",
       VAR_0);
  VAR_8 = VAR_4;
  goto out;
 }
 switch (VAR_7->buffer[28] & 0x0f) {
 case 6:
  FUNC_0(VAR_1, VAR_6,
       "%s: ALUA failover mode detected\n",
       VAR_0);
  break;
 case 4:

  break;
 default:
  FUNC_0(VAR_2, VAR_6,
       "%s: Invalid failover mode %d\n",
       VAR_0, VAR_7->buffer[28] & 0x0f);
  VAR_8 = VAR_4;
  goto out;
 }

 VAR_7->default_sp = VAR_7->buffer[5];
 VAR_7->lun_state = VAR_7->buffer[4];
 VAR_7->current_sp = VAR_7->buffer[8];
 VAR_7->port = VAR_7->buffer[7];

out:
 return VAR_8;
}
