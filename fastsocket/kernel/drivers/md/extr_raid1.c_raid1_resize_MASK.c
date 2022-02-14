
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ array_sectors; scalar_t__ dev_sectors; scalar_t__ recovery_cp; scalar_t__ resync_max_sectors; int recovery; int gendisk; scalar_t__ bitmap; scalar_t__ external_size; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (struct mddev*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mddev*,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mddev *VAR_2, sector_t VAR_3)
{







 sector_t VAR_4 = FUNC_2(VAR_2, VAR_3, 0);
 if (VAR_2->external_size &&
     VAR_2->array_sectors > VAR_4)
  return -VAR_0;
 if (VAR_2->bitmap) {
  int VAR_5 = FUNC_0(VAR_2->bitmap, VAR_4, 0, 0);
  if (VAR_5)
   return VAR_5;
 }
 FUNC_1(VAR_2, VAR_4);
 FUNC_5(VAR_2->gendisk, VAR_2->array_sectors);
 FUNC_3(VAR_2->gendisk);
 if (VAR_3 > VAR_2->dev_sectors &&
     VAR_2->recovery_cp > VAR_2->dev_sectors) {
  VAR_2->recovery_cp = VAR_2->dev_sectors;
  FUNC_4(VAR_1, &VAR_2->recovery);
 }
 VAR_2->dev_sectors = VAR_3;
 VAR_2->resync_max_sectors = VAR_3;
 return 0;
}
