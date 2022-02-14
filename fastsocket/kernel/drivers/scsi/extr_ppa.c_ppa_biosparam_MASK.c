
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;



__attribute__((used)) static int FUNC_0(struct scsi_device *VAR_0, struct block_device *VAR_1,
       sector_t VAR_2, int VAR_3[])
{
 VAR_3[0] = 0x40;
 VAR_3[1] = 0x20;
 VAR_3[2] = ((unsigned long) VAR_2 + 1) / (VAR_3[0] * VAR_3[1]);
 if (VAR_3[2] > 1024) {
  VAR_3[0] = 0xff;
  VAR_3[1] = 0x3f;
  VAR_3[2] = ((unsigned long) VAR_2 + 1) / (VAR_3[0] * VAR_3[1]);
  if (VAR_3[2] > 1023)
   VAR_3[2] = 1023;
 }
 return 0;
}
