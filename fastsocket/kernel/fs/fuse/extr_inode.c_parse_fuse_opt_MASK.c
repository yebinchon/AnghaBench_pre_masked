
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct fuse_mount_data {int max_read; int blksize; int fd; int fd_present; int rootmode; int rootmode_present; int user_id; int user_id_present; int group_id; int group_id_present; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (char*,int ,int *) ;
 int FUNC_4 (struct fuse_mount_data*,int ,int) ;
 char* FUNC_5 (char**,char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(char *VAR_5, struct fuse_mount_data *VAR_6, int VAR_7)
{
 char *VAR_8;
 FUNC_4(VAR_6, 0, sizeof(struct fuse_mount_data));
 VAR_6->max_read = ~0;
 VAR_6->blksize = VAR_1;

 while ((VAR_8 = FUNC_5(&VAR_5, ",")) != ((void*)0)) {
  int VAR_9;
  int VAR_10;
  substring_t VAR_11[VAR_3];
  if (!*VAR_8)
   continue;

  VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_11);
  switch (VAR_9) {
  case 132:
   if (FUNC_1(&VAR_11[0], &VAR_10))
    return 0;
   VAR_6->fd = VAR_10;
   VAR_6->fd_present = 1;
   break;

  case 129:
   if (FUNC_2(&VAR_11[0], &VAR_10))
    return 0;
   if (!FUNC_0(VAR_10))
    return 0;
   VAR_6->rootmode = VAR_10;
   VAR_6->rootmode_present = 1;
   break;

  case 128:
   if (FUNC_1(&VAR_11[0], &VAR_10))
    return 0;
   VAR_6->user_id = VAR_10;
   VAR_6->user_id_present = 1;
   break;

  case 131:
   if (FUNC_1(&VAR_11[0], &VAR_10))
    return 0;
   VAR_6->group_id = VAR_10;
   VAR_6->group_id_present = 1;
   break;

  case 133:
   VAR_6->flags |= VAR_2;
   break;

  case 135:
   VAR_6->flags |= VAR_0;
   break;

  case 130:
   if (FUNC_1(&VAR_11[0], &VAR_10))
    return 0;
   VAR_6->max_read = VAR_10;
   break;

  case 134:
   if (!VAR_7 || FUNC_1(&VAR_11[0], &VAR_10))
    return 0;
   VAR_6->blksize = VAR_10;
   break;

  default:
   return 0;
  }
 }

 if (!VAR_6->fd_present || !VAR_6->rootmode_present ||
     !VAR_6->user_id_present || !VAR_6->group_id_present)
  return 0;

 return 1;
}
