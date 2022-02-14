
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct multipath {int retain_attached_hw_handler; int pg_init_delay_msecs; int pg_init_retries; struct dm_target* ti; } ;
struct dm_target {char* error; } ;
struct dm_arg_set {int dummy; } ;
struct dm_arg {int member_0; int member_1; char* member_2; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_arg*,struct dm_arg_set*,int *,char**) ;
 int FUNC_1 (struct dm_arg*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (struct multipath*,int,int ) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(struct dm_arg_set *VAR_1, struct multipath *VAR_2)
{
 int VAR_3;
 unsigned VAR_4;
 struct dm_target *VAR_5 = VAR_2->ti;
 const char *VAR_6;

 static struct dm_arg VAR_7[] = {
  {0, 6, "invalid number of feature args"},
  {1, 50, "pg_init_retries must be between 1 and 50"},
  {0, 60000, "pg_init_delay_msecs must be between 0 and 60000"},
 };

 VAR_3 = FUNC_1(VAR_7, VAR_1, &VAR_4, &VAR_5->error);
 if (VAR_3)
  return -VAR_0;

 if (!VAR_4)
  return 0;

 do {
  VAR_6 = FUNC_2(VAR_1);
  VAR_4--;

  if (!FUNC_4(VAR_6, "queue_if_no_path")) {
   VAR_3 = FUNC_3(VAR_2, 1, 0);
   continue;
  }

  if (!FUNC_4(VAR_6, "retain_attached_hw_handler")) {
   VAR_2->retain_attached_hw_handler = 1;
   continue;
  }

  if (!FUNC_4(VAR_6, "pg_init_retries") &&
      (VAR_4 >= 1)) {
   VAR_3 = FUNC_0(VAR_7 + 1, VAR_1, &VAR_2->pg_init_retries, &VAR_5->error);
   VAR_4--;
   continue;
  }

  if (!FUNC_4(VAR_6, "pg_init_delay_msecs") &&
      (VAR_4 >= 1)) {
   VAR_3 = FUNC_0(VAR_7 + 2, VAR_1, &VAR_2->pg_init_delay_msecs, &VAR_5->error);
   VAR_4--;
   continue;
  }

  VAR_5->error = "Unrecognised multipath feature request";
  VAR_3 = -VAR_0;
 } while (VAR_4 && !VAR_3);

 return VAR_3;
}
