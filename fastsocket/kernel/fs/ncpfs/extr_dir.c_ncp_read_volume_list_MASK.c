
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ncp_volume_info {unsigned long volume_name; } ;
struct ncp_server {int dummy; } ;
struct TYPE_4__ {int volNumber; } ;
struct ncp_entry_info {TYPE_2__ i; int volume; } ;
struct ncp_cache_control {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
typedef int filldir_t ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 struct ncp_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file*,void*,int ,struct ncp_cache_control*,struct ncp_entry_info*) ;
 scalar_t__ FUNC_3 (struct ncp_server*,int,struct ncp_volume_info*) ;
 scalar_t__ FUNC_4 (struct ncp_server*,unsigned long,TYPE_2__*) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct file *VAR_1, void *VAR_2, filldir_t VAR_3,
   struct ncp_cache_control *VAR_4)
{
 struct dentry *VAR_5 = VAR_1->f_path.dentry;
 struct inode *VAR_6 = VAR_5->d_inode;
 struct ncp_server *VAR_7 = FUNC_1(VAR_6);
 struct ncp_volume_info VAR_8;
 struct ncp_entry_info VAR_9;
 int VAR_10;

 FUNC_0("ncp_read_volume_list: pos=%ld\n",
   (unsigned long) VAR_1->f_pos);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {

  if (FUNC_3(VAR_7, VAR_10, &VAR_8) != 0)
   return;
  if (!FUNC_5(VAR_8.volume_name))
   continue;

  FUNC_0("ncp_read_volume_list: found vol: %s\n",
   VAR_8.volume_name);

  if (FUNC_4(VAR_7, VAR_8.volume_name,
     &VAR_9.i)) {
   FUNC_0("ncpfs: could not lookup vol %s\n",
    VAR_8.volume_name);
   continue;
  }
  VAR_9.volume = VAR_9.i.volNumber;
  if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_9))
   return;
 }
}
