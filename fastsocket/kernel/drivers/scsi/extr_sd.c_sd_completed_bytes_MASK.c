
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct scsi_cmnd {TYPE_1__* device; int sense_buffer; TYPE_2__* request; } ;
struct TYPE_4__ {scalar_t__ cmd_type; } ;
struct TYPE_3__ {int sector_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static unsigned int FUNC_6(struct scsi_cmnd *VAR_2)
{
 u64 VAR_3 = FUNC_0(VAR_2->request);
 u64 VAR_4 = FUNC_0(VAR_2->request) + (FUNC_3(VAR_2) / 512);
 u64 VAR_5;
 int VAR_6;




 unsigned int VAR_7 = FUNC_3(VAR_2) - FUNC_4(VAR_2);
 unsigned int VAR_8;

 if (VAR_2->request->cmd_type != VAR_0)
  return 0;

 VAR_6 = FUNC_5(VAR_2->sense_buffer,
          VAR_1,
          &VAR_5);
 if (!VAR_6)
  return 0;

 if (FUNC_3(VAR_2) <= VAR_2->device->sector_size)
  return 0;

 if (VAR_2->device->sector_size < 512) {

  VAR_3 <<= 1;
  VAR_4 <<= 1;
 } else {

  u64 VAR_9 = VAR_2->device->sector_size / 512;
  FUNC_1(VAR_3, VAR_9);
  FUNC_1(VAR_4, VAR_9);
 }




 if (VAR_5 < VAR_3 || VAR_5 >= VAR_4)
  return 0;




 VAR_8 = (VAR_5 - VAR_3) * VAR_2->device->sector_size;
 return FUNC_2(VAR_8, VAR_7);
}
