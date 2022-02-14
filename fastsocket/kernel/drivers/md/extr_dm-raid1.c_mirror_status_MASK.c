
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mirror_set {unsigned int nr_mirrors; int features; TYPE_3__* mirror; scalar_t__ nr_regions; int rh; } ;
struct dm_target {scalar_t__ private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
typedef int status_type_t ;
struct TYPE_6__ {scalar_t__ offset; TYPE_2__* dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {unsigned int (* status ) (struct dm_dirty_log*,int,char*,unsigned int) ;scalar_t__ (* get_sync_count ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;


 char FUNC_1 (TYPE_3__*) ;
 struct dm_dirty_log* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct dm_dirty_log*) ;
 unsigned int FUNC_4 (struct dm_dirty_log*,int,char*,unsigned int) ;
 unsigned int FUNC_5 (struct dm_dirty_log*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_1, status_type_t VAR_2,
    char *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6 = 0;
 struct mirror_set *VAR_7 = (struct mirror_set *) VAR_1->private;
 struct dm_dirty_log *VAR_8 = FUNC_2(VAR_7->rh);
 char VAR_9[VAR_7->nr_mirrors + 1];

 switch (VAR_2) {
 case 129:
  FUNC_0("%d ", VAR_7->nr_mirrors);
  for (VAR_5 = 0; VAR_5 < VAR_7->nr_mirrors; VAR_5++) {
   FUNC_0("%s ", VAR_7->mirror[VAR_5].dev->name);
   VAR_9[VAR_5] = FUNC_1(&(VAR_7->mirror[VAR_5]));
  }
  VAR_9[VAR_5] = '\0';

  FUNC_0("%llu/%llu 1 %s ",
        (unsigned long long)VAR_8->type->get_sync_count(VAR_8),
        (unsigned long long)VAR_7->nr_regions, VAR_9);

  VAR_6 += VAR_8->type->status(VAR_8, VAR_2, VAR_3+VAR_6, VAR_4-VAR_6);

  break;

 case 128:
  VAR_6 = VAR_8->type->status(VAR_8, VAR_2, VAR_3, VAR_4);

  FUNC_0("%d", VAR_7->nr_mirrors);
  for (VAR_5 = 0; VAR_5 < VAR_7->nr_mirrors; VAR_5++)
   FUNC_0(" %s %llu", VAR_7->mirror[VAR_5].dev->name,
          (unsigned long long)VAR_7->mirror[VAR_5].offset);

  if (VAR_7->features & VAR_0)
   FUNC_0(" 1 handle_errors");
 }

 return 0;
}
