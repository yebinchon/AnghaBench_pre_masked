
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {char* error; int num_flush_requests; struct dm_dev* private; int table; } ;
struct dm_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_target*,char*,int ,struct dm_dev**) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_1, unsigned int VAR_2, char **VAR_3)
{
 int VAR_4;
 struct dm_dev *VAR_5;

 if (VAR_2 != 1) {
  VAR_1->error = "origin: incorrect number of arguments";
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_1, VAR_3[0], FUNC_1(VAR_1->table), &VAR_5);
 if (VAR_4) {
  VAR_1->error = "Cannot get target device";
  return VAR_4;
 }

 VAR_1->private = VAR_5;
 VAR_1->num_flush_requests = 1;

 return 0;
}
