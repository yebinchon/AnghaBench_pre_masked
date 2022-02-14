
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gendisk {int dummy; } ;
struct TYPE_6__ {int sense_key; int asc; int ascq; struct gendisk* disk; } ;
typedef TYPE_1__ idetape_tape_t ;
struct TYPE_7__ {int atapi_flags; TYPE_1__* driver_data; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,struct gendisk*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,struct gendisk*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,unsigned long) ;

__attribute__((used)) static int FUNC_6(ide_drive_t *VAR_5, unsigned long VAR_6)
{
 idetape_tape_t *VAR_7 = VAR_5->driver_data;
 struct gendisk *VAR_8 = VAR_7->disk;
 int VAR_9 = 0;


 FUNC_4(FUNC_2(VAR_3), &VAR_5->atapi_flags);
 VAR_6 += VAR_4;
 while (FUNC_5(VAR_4, VAR_6)) {
  if (FUNC_1(VAR_5, VAR_8) == 0)
   return 0;
  if ((VAR_7->sense_key == 2 && VAR_7->asc == 4 && VAR_7->ascq == 2)
      || (VAR_7->asc == 0x3A)) {

   if (VAR_9)
    return -VAR_1;
   FUNC_0(VAR_5, VAR_8, VAR_2);
   VAR_9 = 1;

  } else if (!(VAR_7->sense_key == 2 && VAR_7->asc == 4 &&
        (VAR_7->ascq == 1 || VAR_7->ascq == 8)))
   return -VAR_0;
  FUNC_3(100);
 }
 return -VAR_0;
}
