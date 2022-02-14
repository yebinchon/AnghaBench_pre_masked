
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_mount_data_v4 {int flags; int mounted_uid; int wdog_pid; int ncp_fd; int time_out; int retry_count; int uid; int gid; int file_mode; int dir_mode; } ;
struct ncp_mount_data {int mounted_uid; int wdog_pid; int mounted_vol; int uid; int gid; int file_mode; int dir_mode; } ;
struct compat_ncp_mount_data_v4 {int flags; int mounted_uid; int wdog_pid; int ncp_fd; int time_out; int retry_count; int uid; int gid; int file_mode; int dir_mode; } ;
struct compat_ncp_mount_data {int mounted_uid; int wdog_pid; int mounted_vol; int uid; int gid; int file_mode; int dir_mode; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0)
{
 int VAR_1 = *(unsigned int *)VAR_0;

 if (VAR_1 == 3) {
  struct compat_ncp_mount_data *VAR_2 = VAR_0;
  struct ncp_mount_data *VAR_3 = VAR_0;

  VAR_3->dir_mode = VAR_2->dir_mode;
  VAR_3->file_mode = VAR_2->file_mode;
  VAR_3->gid = VAR_2->gid;
  VAR_3->uid = VAR_2->uid;
  FUNC_0 (VAR_3->mounted_vol, VAR_2->mounted_vol, (sizeof (VAR_2->mounted_vol) + 3 * sizeof (unsigned int)));
  VAR_3->wdog_pid = VAR_2->wdog_pid;
  VAR_3->mounted_uid = VAR_2->mounted_uid;
 } else if (VAR_1 == 4) {
  struct compat_ncp_mount_data_v4 *VAR_4 = VAR_0;
  struct ncp_mount_data_v4 *VAR_5 = VAR_0;

  VAR_5->dir_mode = VAR_4->dir_mode;
  VAR_5->file_mode = VAR_4->file_mode;
  VAR_5->gid = VAR_4->gid;
  VAR_5->uid = VAR_4->uid;
  VAR_5->retry_count = VAR_4->retry_count;
  VAR_5->time_out = VAR_4->time_out;
  VAR_5->ncp_fd = VAR_4->ncp_fd;
  VAR_5->wdog_pid = VAR_4->wdog_pid;
  VAR_5->mounted_uid = VAR_4->mounted_uid;
  VAR_5->flags = VAR_4->flags;
 } else if (VAR_1 != 5) {
  return ((void*)0);
 }

 return VAR_0;
}
