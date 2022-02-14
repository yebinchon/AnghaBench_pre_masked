
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flakey_c {scalar_t__ corrupt_bio_rw; int flags; int corrupt_bio_flags; int corrupt_bio_value; int corrupt_bio_byte; } ;
struct dm_target {char* error; } ;
struct dm_arg_set {int argc; } ;
struct dm_arg {int member_0; int member_1; char* member_2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dm_arg*,struct dm_arg_set*,int *,char**) ;
 int FUNC_1 (struct dm_arg*,struct dm_arg_set*,unsigned int*,char**) ;
 char* FUNC_2 (struct dm_arg_set*) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct dm_arg_set *VAR_4, struct flakey_c *VAR_5,
     struct dm_target *VAR_6)
{
 int VAR_7;
 unsigned VAR_8;
 const char *VAR_9;

 static struct dm_arg VAR_10[] = {
  {0, 6, "Invalid number of feature args"},
  {1, 128, "Invalid corrupt bio byte"},
  {0, 255, "Invalid corrupt value to write into bio byte (0-255)"},
  {0, 128, "Invalid corrupt bio flags mask"},
 };


 if (!VAR_4->argc)
  return 0;

 VAR_7 = FUNC_1(VAR_10, VAR_4, &VAR_8, &VAR_6->error);
 if (VAR_7)
  return VAR_7;

 while (VAR_8) {
  VAR_9 = FUNC_2(VAR_4);
  VAR_8--;




  if (!FUNC_3(VAR_9, "drop_writes")) {
   if (FUNC_4(VAR_0, &VAR_5->flags)) {
    VAR_6->error = "Feature drop_writes duplicated";
    return -VAR_1;
   }

   continue;
  }




  if (!FUNC_3(VAR_9, "corrupt_bio_byte")) {
   if (!VAR_8) {
    VAR_6->error = "Feature corrupt_bio_byte requires parameters";
    return -VAR_1;
   }

   VAR_7 = FUNC_0(VAR_10 + 1, VAR_4, &VAR_5->corrupt_bio_byte, &VAR_6->error);
   if (VAR_7)
    return VAR_7;
   VAR_8--;




   VAR_9 = FUNC_2(VAR_4);
   if (!FUNC_3(VAR_9, "w"))
    VAR_5->corrupt_bio_rw = VAR_3;
   else if (!FUNC_3(VAR_9, "r"))
    VAR_5->corrupt_bio_rw = VAR_2;
   else {
    VAR_6->error = "Invalid corrupt bio direction (r or w)";
    return -VAR_1;
   }
   VAR_8--;




   VAR_7 = FUNC_0(VAR_10 + 2, VAR_4, &VAR_5->corrupt_bio_value, &VAR_6->error);
   if (VAR_7)
    return VAR_7;
   VAR_8--;




   VAR_7 = FUNC_0(VAR_10 + 3, VAR_4, &VAR_5->corrupt_bio_flags, &VAR_6->error);
   if (VAR_7)
    return VAR_7;
   VAR_8--;

   continue;
  }

  VAR_6->error = "Unrecognised flakey feature requested";
  return -VAR_1;
 }

 if (FUNC_5(VAR_0, &VAR_5->flags) && (VAR_5->corrupt_bio_rw == VAR_3)) {
  VAR_6->error = "drop_writes is incompatible with corrupt_bio_byte with the WRITE flag set";
  return -VAR_1;
 }

 return 0;
}
