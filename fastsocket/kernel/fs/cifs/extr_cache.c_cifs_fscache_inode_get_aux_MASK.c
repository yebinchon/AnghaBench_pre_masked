
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct cifs_fscache_inode_auxdata {int last_change_time; int last_write_time; int eof; } ;
struct TYPE_2__ {int i_ctime; int i_mtime; } ;
struct cifsInodeInfo {TYPE_1__ vfs_inode; int server_eof; } ;
typedef int auxdata ;


 int FUNC_0 (void*,struct cifs_fscache_inode_auxdata*,int) ;
 int FUNC_1 (struct cifs_fscache_inode_auxdata*,int ,int) ;

__attribute__((used)) static uint16_t
FUNC_2(const void *VAR_0, void *VAR_1,
      uint16_t VAR_2)
{
 struct cifs_fscache_inode_auxdata VAR_3;
 const struct cifsInodeInfo *VAR_4 = VAR_0;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.eof = VAR_4->server_eof;
 VAR_3.last_write_time = VAR_4->vfs_inode.i_mtime;
 VAR_3.last_change_time = VAR_4->vfs_inode.i_ctime;

 if (VAR_2 > sizeof(VAR_3))
  VAR_2 = sizeof(VAR_3);

 FUNC_0(VAR_1, &VAR_3, VAR_2);

 return VAR_2;
}
