
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long sectors_per_dev; int raid_devs; } ;
struct raid_set {TYPE_1__ set; struct raid_dev* dev; struct dm_target* ti; } ;
struct raid_dev {unsigned long long start; int dev; } ;
struct dm_target {int table; } ;


 int FUNC_0 (char*,unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct dm_target*,char*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct raid_set*,struct raid_dev*) ;
 int FUNC_6 (char*,char*,unsigned long long*) ;

__attribute__((used)) static int FUNC_7(struct raid_set *VAR_2, char **VAR_3, int *VAR_4)
{
 struct dm_target *VAR_5 = VAR_2->ti;

FUNC_0("rs->set.sectors_per_dev=%llu", (unsigned long long) VAR_2->set.sectors_per_dev);
 for (*VAR_4 = 0; *VAR_4 < VAR_2->set.raid_devs; (*VAR_4)++, VAR_3 += 2) {
  int VAR_6;
  unsigned long long VAR_7;
  struct raid_dev *VAR_8 = VAR_2->dev + *VAR_4;


  if (FUNC_6(VAR_3[1], "%llu", &VAR_7) != 1 ||
      VAR_7 > VAR_2->set.sectors_per_dev)
   FUNC_1("Invalid RAID device offset parameter");

  VAR_8->start = VAR_7;
  VAR_6 = FUNC_3(VAR_5, VAR_3[0],
      FUNC_4(VAR_5->table), &VAR_8->dev);
  if (VAR_6)
   FUNC_2("RAID device lookup failure", VAR_6);

  VAR_6 = FUNC_5(VAR_2, VAR_8);
  if (VAR_6 != -VAR_0 && VAR_6 < *VAR_4) {
   (*VAR_4)++;
   FUNC_2("Duplicate RAID device", -VAR_1);
  }
 }

 return 0;
}
