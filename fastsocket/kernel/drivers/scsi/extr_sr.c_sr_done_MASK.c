
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int* sense_buffer; TYPE_2__* request; } ;
struct scsi_cd {int disk; int capacity; TYPE_1__* device; } ;
struct TYPE_4__ {int * bio; int rq_disk; } ;
struct TYPE_3__ {int sector_size; } ;






 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 long FUNC_3 (int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct scsi_cmnd*) ;
 struct scsi_cd* FUNC_6 (int ) ;
 int FUNC_7 (int ,long) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_0)
{
 int VAR_1 = VAR_0->result;
 int VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = (VAR_1 == 0 ? VAR_2 : 0);
 int VAR_4 = 0;
 long VAR_5;
 struct scsi_cd *VAR_6 = FUNC_6(VAR_0->request->rq_disk);
 if (FUNC_2(VAR_1) != 0 &&
     (VAR_0->sense_buffer[0] & 0x7f) == 0x70) {
  switch (VAR_0->sense_buffer[2]) {
  case 130:
  case 128:
  case 131:
   if (!(VAR_0->sense_buffer[0] & 0x90))
    break;
   VAR_5 = (VAR_0->sense_buffer[3] << 24) |
    (VAR_0->sense_buffer[4] << 16) |
    (VAR_0->sense_buffer[5] << 8) |
    VAR_0->sense_buffer[6];
   if (VAR_0->request->bio != ((void*)0))
    VAR_4 =
     FUNC_0(VAR_0->request->bio);
   if (VAR_4 < 4)
    VAR_4 = 4;
   if (VAR_6->device->sector_size == 2048)
    VAR_5 <<= 2;
   VAR_5 &= ~(VAR_4 - 1);
   VAR_3 = (VAR_5 -
          FUNC_1(VAR_0->request)) << 9;
   if (VAR_3 < 0 || VAR_3 >= VAR_2)
    VAR_3 = 0;
   if (VAR_5 < FUNC_3(VAR_6->disk) &&
       VAR_6->capacity - VAR_5 < 4 * 75)
    FUNC_7(VAR_6->disk, VAR_5);
   break;

  case 129:
   VAR_3 = VAR_2;
   break;

  default:
   break;
  }
 }

 return VAR_3;
}
