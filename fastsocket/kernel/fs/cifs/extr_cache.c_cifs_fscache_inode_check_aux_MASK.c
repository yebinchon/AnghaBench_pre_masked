
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct cifs_fscache_inode_auxdata {int last_change_time; int last_write_time; int eof; } ;
struct TYPE_2__ {int i_ctime; int i_mtime; } ;
struct cifsInodeInfo {TYPE_1__ vfs_inode; int server_eof; } ;
typedef enum fscache_checkaux { ____Placeholder_fscache_checkaux } fscache_checkaux ;
typedef int auxdata ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void const*,struct cifs_fscache_inode_auxdata*,int) ;
 int FUNC_1 (struct cifs_fscache_inode_auxdata*,int ,int) ;

__attribute__((used)) static enum
fscache_checkaux FUNC_2(void *VAR_2,
           const void *VAR_3,
           uint16_t VAR_4)
{
 struct cifs_fscache_inode_auxdata VAR_5;
 struct cifsInodeInfo *VAR_6 = VAR_2;

 if (VAR_4 != sizeof(VAR_5))
  return VAR_0;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.eof = VAR_6->server_eof;
 VAR_5.last_write_time = VAR_6->vfs_inode.i_mtime;
 VAR_5.last_change_time = VAR_6->vfs_inode.i_ctime;

 if (FUNC_0(VAR_3, &VAR_5, VAR_4) != 0)
  return VAR_0;

 return VAR_1;
}
