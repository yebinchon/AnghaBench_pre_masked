
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; } ;
struct dm_dirty_log {int dummy; } ;


 struct dm_dirty_log* FUNC_0 (char*,struct dm_target*,int ,unsigned int,char**) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,unsigned int*,char*) ;

__attribute__((used)) static struct dm_dirty_log *FUNC_2(struct dm_target *VAR_1,
          unsigned VAR_2, char **VAR_3,
          unsigned *VAR_4)
{
 unsigned VAR_5;
 struct dm_dirty_log *VAR_6;
 char VAR_7;

 if (VAR_2 < 2) {
  VAR_1->error = "Insufficient mirror log arguments";
  return ((void*)0);
 }

 if (FUNC_1(VAR_3[1], "%u%c", &VAR_5, &VAR_7) != 1) {
  VAR_1->error = "Invalid mirror log argument count";
  return ((void*)0);
 }

 *VAR_4 = 2 + VAR_5;

 if (VAR_2 < *VAR_4) {
  VAR_1->error = "Insufficient mirror log arguments";
  return ((void*)0);
 }

 VAR_6 = FUNC_0(VAR_3[0], VAR_1, VAR_0, VAR_5,
     VAR_3 + 2);
 if (!VAR_6) {
  VAR_1->error = "Error creating mirror dirty log";
  return ((void*)0);
 }

 return VAR_6;
}
