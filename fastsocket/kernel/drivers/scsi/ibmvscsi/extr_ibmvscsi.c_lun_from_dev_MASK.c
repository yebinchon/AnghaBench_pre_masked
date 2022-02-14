
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scsi_device {int id; int channel; int lun; } ;



__attribute__((used)) static inline u16 FUNC_0(struct scsi_device *VAR_0)
{
 return (0x2 << 14) | (VAR_0->id << 8) | (VAR_0->channel << 5) | VAR_0->lun;
}
