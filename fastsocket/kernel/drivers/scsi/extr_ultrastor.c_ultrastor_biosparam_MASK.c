
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {unsigned int heads; unsigned int sectors; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(struct scsi_device *VAR_1, struct block_device *VAR_2,
  sector_t VAR_3, int * VAR_4)
{
    int VAR_5 = VAR_3;
    unsigned int VAR_6 = VAR_0.heads * VAR_0.sectors;

    VAR_4[0] = VAR_0.heads;
    VAR_4[1] = VAR_0.sectors;
    VAR_4[2] = VAR_5 / VAR_6;




    return 0;
}
