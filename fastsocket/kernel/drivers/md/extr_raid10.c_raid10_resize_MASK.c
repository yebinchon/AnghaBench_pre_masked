
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int far_copies; int far_offset; } ;
struct r10conf {scalar_t__ dev_sectors; TYPE_1__ geo; } ;
struct mddev {scalar_t__ reshape_position; scalar_t__ array_sectors; scalar_t__ dev_sectors; scalar_t__ recovery_cp; scalar_t__ resync_max_sectors; int recovery; int gendisk; scalar_t__ bitmap; scalar_t__ external_size; struct r10conf* private; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (struct r10conf*,scalar_t__) ;
 int FUNC_2 (struct mddev*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mddev*,scalar_t__,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_4, sector_t VAR_5)
{
 struct r10conf *VAR_6 = VAR_4->private;
 sector_t VAR_7, VAR_8;

 if (VAR_4->reshape_position != VAR_3)
  return -VAR_0;

 if (VAR_6->geo.far_copies > 1 && !VAR_6->geo.far_offset)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_4, 0, 0);
 VAR_8 = FUNC_3(VAR_4, VAR_5, 0);
 if (VAR_4->external_size &&
     VAR_4->array_sectors > VAR_8)
  return -VAR_1;
 if (VAR_4->bitmap) {
  int VAR_9 = FUNC_0(VAR_4->bitmap, VAR_8, 0, 0);
  if (VAR_9)
   return VAR_9;
 }
 FUNC_2(VAR_4, VAR_8);
 FUNC_6(VAR_4->gendisk, VAR_4->array_sectors);
 FUNC_4(VAR_4->gendisk);
 if (VAR_5 > VAR_4->dev_sectors &&
     VAR_4->recovery_cp > VAR_7) {
  VAR_4->recovery_cp = VAR_7;
  FUNC_5(VAR_2, &VAR_4->recovery);
 }
 FUNC_1(VAR_6, VAR_5);
 VAR_4->dev_sectors = VAR_6->dev_sectors;
 VAR_4->resync_max_sectors = VAR_8;
 return 0;
}
