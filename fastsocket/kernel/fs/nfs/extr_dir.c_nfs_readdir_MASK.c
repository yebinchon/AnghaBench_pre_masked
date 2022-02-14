
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct nfs_open_dir_context {scalar_t__ dir_cookie; } ;
struct inode {int dummy; } ;
struct TYPE_14__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_pos; int f_mapping; struct nfs_open_dir_context* private_data; TYPE_1__ f_path; } ;
struct TYPE_17__ {int name; } ;
struct dentry {TYPE_4__ d_name; TYPE_3__* d_parent; struct inode* d_inode; } ;
struct TYPE_18__ {int plus; scalar_t__ eof; scalar_t__ page_index; scalar_t__* dir_cookie; int decode; struct file* file; } ;
typedef TYPE_5__ nfs_readdir_descriptor_t ;
typedef int filldir_t ;
struct TYPE_15__ {int name; } ;
struct TYPE_16__ {TYPE_2__ d_name; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int decode_dirent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_11__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 TYPE_10__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int ,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (TYPE_5__*,void*,int ) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct dentry*) ;
 scalar_t__ FUNC_11 (struct inode*,struct file*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,void*,int ) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_5, void *VAR_6, filldir_t VAR_7)
{
 struct dentry *VAR_8 = VAR_5->f_path.dentry;
 struct inode *VAR_9 = VAR_8->d_inode;
 nfs_readdir_descriptor_t VAR_10,
   *VAR_11 = &VAR_10;
 struct nfs_open_dir_context *VAR_12 = VAR_5->private_data;
 int VAR_13 = 0;

 FUNC_3(VAR_2, "NFS: readdir(%s/%s) starting at cookie %llu\n",
   VAR_8->d_parent->d_name.name, VAR_8->d_name.name,
   (long long)VAR_5->f_pos);
 FUNC_8(VAR_9, VAR_3);







 FUNC_4(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->file = VAR_5;
 VAR_11->dir_cookie = &VAR_12->dir_cookie;
 VAR_11->decode = FUNC_1(VAR_9)->decode_dirent;
 VAR_11->plus = FUNC_11(VAR_9, VAR_5) ? 1 : 0;

 FUNC_6(VAR_8);
 if (VAR_5->f_pos == 0 || FUNC_5(VAR_9))
  VAR_13 = FUNC_9(VAR_9, VAR_5->f_mapping);
 if (VAR_13 < 0)
  goto out;

 do {
  VAR_13 = FUNC_13(VAR_11);

  if (VAR_13 == -VAR_0) {
   VAR_13 = 0;

   if (*VAR_11->dir_cookie && VAR_11->eof == 0) {

    VAR_13 = FUNC_14(VAR_11, VAR_6, VAR_7);
    if (VAR_13 == 0)
     continue;
   }
   break;
  }
  if (VAR_13 == -VAR_1 && VAR_11->plus) {
   FUNC_2(VAR_4, &FUNC_0(VAR_9)->flags);
   FUNC_12(VAR_9);
   VAR_11->page_index = 0;
   VAR_11->plus = 0;
   VAR_11->eof = 0;
   continue;
  }
  if (VAR_13 < 0)
   break;

  VAR_13 = FUNC_7(VAR_11, VAR_6, VAR_7);
  if (VAR_13 < 0)
   break;
 } while (!VAR_11->eof);
out:
 FUNC_10(VAR_8);
 if (VAR_13 > 0)
  VAR_13 = 0;
 FUNC_3(VAR_2, "NFS: readdir(%s/%s) returns %d\n",
   VAR_8->d_parent->d_name.name, VAR_8->d_name.name,
   VAR_13);
 return VAR_13;
}
