
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;



__attribute__((used)) static int
FUNC_0 (struct scsi_device *VAR_0, struct block_device *VAR_1,
  sector_t VAR_2, int VAR_3[])
{
 VAR_3[0] = 64;
 VAR_3[1] = 32;
 VAR_3[2] = VAR_2 >> 11;
 return 0;
}
