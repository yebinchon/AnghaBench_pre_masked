
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capacity; scalar_t__ mask; scalar_t__ speed; struct pcd_unit* handle; int * ops; int * name; } ;
struct pcd_unit {int changed; int * name; TYPE_1__ info; scalar_t__ drive; scalar_t__ last_sense; scalar_t__ present; int pia; int * pi; struct gendisk* disk; } ;
struct gendisk {int first_minor; int * fops; int disk_name; int major; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct gendisk* FUNC_0 (int) ;
 scalar_t__*** VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 struct pcd_unit* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int *,int,char*,char*,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 struct pcd_unit *VAR_10;
 int VAR_11;

 VAR_9 = 0;
 for (VAR_11 = 0, VAR_10 = VAR_6; VAR_11 < VAR_2; VAR_11++, VAR_10++) {
  struct gendisk *VAR_12 = FUNC_0(1);
  if (!VAR_12)
   continue;
  VAR_10->disk = VAR_12;
  VAR_10->pi = &VAR_10->pia;
  VAR_10->present = 0;
  VAR_10->last_sense = 0;
  VAR_10->changed = 1;
  VAR_10->drive = (*VAR_3[VAR_11])[VAR_1];
  if ((*VAR_3[VAR_11])[VAR_0])
   VAR_9++;

  VAR_10->name = &VAR_10->info.name[0];
  FUNC_1(VAR_10->name, sizeof(VAR_10->info.name), "%s%d", VAR_5, VAR_11);
  VAR_10->info.ops = &VAR_8;
  VAR_10->info.handle = VAR_10;
  VAR_10->info.speed = 0;
  VAR_10->info.capacity = 1;
  VAR_10->info.mask = 0;
  VAR_12->major = VAR_4;
  VAR_12->first_minor = VAR_11;
  FUNC_2(VAR_12->disk_name, VAR_10->name);
  VAR_12->fops = &VAR_7;
 }
}
