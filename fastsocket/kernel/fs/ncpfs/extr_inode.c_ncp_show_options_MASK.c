
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int mnt_sb; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {scalar_t__ uid; scalar_t__ gid; scalar_t__ mounted_uid; unsigned int file_mode; unsigned int dir_mode; int time_out; unsigned int retry_count; unsigned int flags; int * wdog_pid; } ;
struct ncp_server {TYPE_1__ m; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 struct ncp_server* FUNC_0 (int ) ;
 unsigned int VAR_5 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_6, struct vfsmount *VAR_7)
{
 struct ncp_server *VAR_8 = FUNC_0(VAR_7->mnt_sb);
 unsigned int VAR_9;

 if (VAR_8->m.uid != 0)
  FUNC_2(VAR_6, ",uid=%u", VAR_8->m.uid);
 if (VAR_8->m.gid != 0)
  FUNC_2(VAR_6, ",gid=%u", VAR_8->m.gid);
 if (VAR_8->m.mounted_uid != 0)
  FUNC_2(VAR_6, ",owner=%u", VAR_8->m.mounted_uid);
 VAR_9 = VAR_8->m.file_mode & VAR_5;
 if (VAR_9 != VAR_2)
  FUNC_2(VAR_6, ",mode=0%o", VAR_9);
 VAR_9 = VAR_8->m.dir_mode & VAR_5;
 if (VAR_9 != VAR_1)
  FUNC_2(VAR_6, ",dirmode=0%o", VAR_9);
 if (VAR_8->m.time_out != VAR_4 * VAR_0 / 100) {
  VAR_9 = VAR_8->m.time_out * 100 / VAR_0;
  FUNC_2(VAR_6, ",timeout=%u", VAR_9);
 }
 if (VAR_8->m.retry_count != VAR_3)
  FUNC_2(VAR_6, ",retry=%u", VAR_8->m.retry_count);
 if (VAR_8->m.flags != 0)
  FUNC_2(VAR_6, ",flags=%lu", VAR_8->m.flags);
 if (VAR_8->m.wdog_pid != ((void*)0))
  FUNC_2(VAR_6, ",wdogpid=%u", FUNC_1(VAR_8->m.wdog_pid));

 return 0;
}
