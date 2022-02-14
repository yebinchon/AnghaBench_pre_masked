
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_mount_data_kernel {unsigned long flags; unsigned long mounted_uid; unsigned long ncp_fd; unsigned long time_out; unsigned long retry_count; unsigned long uid; unsigned long gid; unsigned long file_mode; unsigned long dir_mode; int info_fd; int * wdog_pid; scalar_t__* mounted_vol; scalar_t__ int_flags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int * FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,char**,int ,int *,char**,unsigned long*) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ncp_mount_data_kernel *VAR_8, char *VAR_9) {
 int VAR_10;
 char *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 VAR_8->flags = 0;
 VAR_8->int_flags = 0;
 VAR_8->mounted_uid = 0;
 VAR_8->wdog_pid = ((void*)0);
 VAR_8->ncp_fd = ~0;
 VAR_8->time_out = VAR_4;
 VAR_8->retry_count = VAR_3;
 VAR_8->uid = 0;
 VAR_8->gid = 0;
 VAR_8->file_mode = VAR_2;
 VAR_8->dir_mode = VAR_1;
 VAR_8->info_fd = -1;
 VAR_8->mounted_vol[0] = 0;

 while ((VAR_10 = FUNC_1("ncpfs", &VAR_9, VAR_7, ((void*)0), &VAR_11, &VAR_12)) != 0) {
  VAR_14 = VAR_10;
  if (VAR_14 < 0)
   goto err;
  switch (VAR_10) {
   case 'u':
    VAR_8->uid = VAR_12;
    break;
   case 'g':
    VAR_8->gid = VAR_12;
    break;
   case 'o':
    VAR_8->mounted_uid = VAR_12;
    break;
   case 'm':
    VAR_8->file_mode = VAR_12;
    break;
   case 'd':
    VAR_8->dir_mode = VAR_12;
    break;
   case 't':
    VAR_8->time_out = VAR_12;
    break;
   case 'r':
    VAR_8->retry_count = VAR_12;
    break;
   case 'f':
    VAR_8->flags = VAR_12;
    break;
   case 'w':
    VAR_8->wdog_pid = FUNC_0(VAR_12);
    break;
   case 'n':
    VAR_8->ncp_fd = VAR_12;
    break;
   case 'i':
    VAR_8->info_fd = VAR_12;
    break;
   case 'v':
    VAR_14 = -VAR_0;
    if (VAR_12 < VAR_5)
     goto err;
    if (VAR_12 > VAR_6)
     goto err;
    VAR_13 = VAR_12;
    break;

  }
 }
 return 0;
err:
 FUNC_2(VAR_8->wdog_pid);
 VAR_8->wdog_pid = ((void*)0);
 return VAR_14;
}
