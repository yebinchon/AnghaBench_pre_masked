
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int sector_size; } ;



__attribute__((used)) static u8 FUNC_0(struct scsi_device *VAR_0)
{
 switch (VAR_0->sector_size) {
 case 512:
  return 0;
 case 1024:
  return 1;
 case 4096:
  return 3;
 default:
  return 0xff;
 }
}
