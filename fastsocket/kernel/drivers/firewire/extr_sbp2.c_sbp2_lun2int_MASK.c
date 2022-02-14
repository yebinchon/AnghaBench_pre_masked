
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scsi_lun {int* scsi_lun; } ;
typedef int eight_bytes_lun ;


 int FUNC_0 (struct scsi_lun*,int ,int) ;
 int FUNC_1 (struct scsi_lun*) ;

__attribute__((used)) static int FUNC_2(u16 VAR_0)
{
 struct scsi_lun VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.scsi_lun[0] = (VAR_0 >> 8) & 0xff;
 VAR_1.scsi_lun[1] = VAR_0 & 0xff;

 return FUNC_1(&VAR_1);
}
