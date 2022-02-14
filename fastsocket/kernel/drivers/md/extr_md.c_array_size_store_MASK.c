
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ array_sectors; int external_size; int gendisk; TYPE_1__* pers; } ;
typedef size_t ssize_t ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ (* size ) (struct mddev*,int ,int ) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,scalar_t__*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (struct mddev*,int ,int ) ;
 scalar_t__ FUNC_5 (struct mddev*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 sector_t VAR_5;

 if (FUNC_3(VAR_3, "default", 7) == 0) {
  if (VAR_2->pers)
   VAR_5 = VAR_2->pers->size(VAR_2, 0, 0);
  else
   VAR_5 = VAR_2->array_sectors;

  VAR_2->external_size = 0;
 } else {
  if (FUNC_2(VAR_3, &VAR_5) < 0)
   return -VAR_1;
  if (VAR_2->pers && VAR_2->pers->size(VAR_2, 0, 0) < VAR_5)
   return -VAR_0;

  VAR_2->external_size = 1;
 }

 VAR_2->array_sectors = VAR_5;
 if (VAR_2->pers) {
  FUNC_1(VAR_2->gendisk, VAR_2->array_sectors);
  FUNC_0(VAR_2->gendisk);
 }
 return VAR_4;
}
