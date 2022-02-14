
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int table; } ;
struct dm_dirty_log {int dummy; } ;
struct dm_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dm_dirty_log*,struct dm_target*,unsigned int,char**,struct dm_dev*) ;
 int FUNC_2 (struct dm_target*,char*,int ,struct dm_dev**) ;
 int FUNC_3 (struct dm_target*,struct dm_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dm_dirty_log *VAR_1, struct dm_target *VAR_2,
      unsigned int VAR_3, char **VAR_4)
{
 int VAR_5;
 struct dm_dev *VAR_6;

 if (VAR_3 < 2 || VAR_3 > 3) {
  FUNC_0("wrong number of arguments to disk dirty region log");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_4[0], FUNC_4(VAR_2->table), &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3 - 1, VAR_4 + 1, VAR_6);
 if (VAR_5) {
  FUNC_3(VAR_2, VAR_6);
  return VAR_5;
 }

 return 0;
}
