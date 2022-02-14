
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {TYPE_1__* mirror; } ;
struct dm_target {char* error; int table; } ;
struct TYPE_2__ {unsigned long long offset; scalar_t__ error_type; int error_count; struct mirror_set* ms; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct dm_target*,char*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,unsigned long long*,char*) ;

__attribute__((used)) static int FUNC_4(struct mirror_set *VAR_2, struct dm_target *VAR_3,
        unsigned int VAR_4, char **VAR_5)
{
 unsigned long long VAR_6;
 char VAR_7;

 if (FUNC_3(VAR_5[1], "%llu%c", &VAR_6, &VAR_7) != 1) {
  VAR_3->error = "Invalid offset";
  return -VAR_0;
 }

 if (FUNC_1(VAR_3, VAR_5[0], FUNC_2(VAR_3->table),
     &VAR_2->mirror[VAR_4].dev)) {
  VAR_3->error = "Device lookup failure";
  return -VAR_1;
 }

 VAR_2->mirror[VAR_4].ms = VAR_2;
 FUNC_0(&(VAR_2->mirror[VAR_4].error_count), 0);
 VAR_2->mirror[VAR_4].error_type = 0;
 VAR_2->mirror[VAR_4].offset = VAR_6;

 return 0;
}
