
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int substring_t ;
struct btrfs_fs_devices {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (char*,int ,void*,struct btrfs_fs_devices**) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*,int ) ;
 int FUNC_3 (int *,int*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int *) ;
 char* FUNC_6 (char**,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(const char *VAR_5, fmode_t VAR_6,
  void *VAR_7, char **VAR_8, u64 *VAR_9,
  u64 *VAR_10, struct btrfs_fs_devices **VAR_11)
{
 substring_t VAR_12[VAR_3];
 char *VAR_13, *VAR_14, *VAR_15, *VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 if (!VAR_5)
  return 0;





 VAR_14 = FUNC_2(VAR_5, VAR_2);
 if (!VAR_14)
  return -VAR_1;
 VAR_15 = VAR_14;

 while ((VAR_16 = FUNC_6(&VAR_14, ",")) != ((void*)0)) {
  int VAR_19;
  if (!*VAR_16)
   continue;

  VAR_19 = FUNC_5(VAR_16, VAR_4, VAR_12);
  switch (VAR_19) {
  case 130:
   FUNC_1(*VAR_8);
   *VAR_8 = FUNC_4(&VAR_12[0]);
   break;
  case 129:
   VAR_18 = 0;
   VAR_17 = FUNC_3(&VAR_12[0], &VAR_18);
   if (!VAR_17) {

    if (!VAR_18)
     *VAR_9 =
      VAR_0;
    else
     *VAR_9 = VAR_18;
   }
   break;
  case 128:
   VAR_18 = 0;
   VAR_17 = FUNC_3(&VAR_12[0], &VAR_18);
   if (!VAR_17) {

    if (!VAR_18)
     *VAR_10 =
      VAR_0;
    else
     *VAR_10 = VAR_18;
   }
   break;
  case 131:
   VAR_13 = FUNC_4(&VAR_12[0]);
   if (!VAR_13) {
    VAR_17 = -VAR_1;
    goto out;
   }
   VAR_17 = FUNC_0(VAR_13,
     VAR_6, VAR_7, VAR_11);
   FUNC_1(VAR_13);
   if (VAR_17)
    goto out;
   break;
  default:
   break;
  }
 }

out:
 FUNC_1(VAR_15);
 return VAR_17;
}
