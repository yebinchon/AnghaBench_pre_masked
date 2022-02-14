
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_lun {int* scsi_lun; } ;
typedef int lun ;



int FUNC_0(struct scsi_lun *VAR_0)
{
 int VAR_1;
 unsigned int VAR_2;

 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < sizeof(VAR_2); VAR_1 += 2)
  VAR_2 = VAR_2 | (((VAR_0->scsi_lun[VAR_1] << 8) |
         VAR_0->scsi_lun[VAR_1 + 1]) << (VAR_1 * 8));
 return VAR_2;
}
