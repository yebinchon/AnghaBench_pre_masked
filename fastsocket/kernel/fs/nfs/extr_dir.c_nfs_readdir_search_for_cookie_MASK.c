
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct nfs_open_dir_context {scalar_t__ attr_gencount; int duped; scalar_t__ dup_cookie; } ;
struct nfs_inode {scalar_t__ attr_gencount; int cache_validity; } ;
struct nfs_cache_array {int size; scalar_t__ eof_index; scalar_t__ last_cookie; TYPE_8__* array; } ;
struct TYPE_12__ {scalar_t__* dir_cookie; scalar_t__ current_index; int cache_entry_index; int eof; TYPE_9__* file; } ;
typedef TYPE_10__ nfs_readdir_descriptor_t ;
typedef scalar_t__ loff_t ;
struct TYPE_14__ {TYPE_1__* dentry; } ;
struct TYPE_21__ {scalar_t__ f_pos; TYPE_6__* f_dentry; struct nfs_open_dir_context* private_data; TYPE_2__ f_path; } ;
struct TYPE_19__ {int name; } ;
struct TYPE_20__ {scalar_t__ cookie; TYPE_7__ string; } ;
struct TYPE_17__ {int name; } ;
struct TYPE_18__ {TYPE_5__ d_name; TYPE_4__* d_parent; } ;
struct TYPE_15__ {int name; } ;
struct TYPE_16__ {TYPE_3__ d_name; } ;
struct TYPE_13__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nfs_inode* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static
int FUNC_3(struct nfs_cache_array *VAR_5, nfs_readdir_descriptor_t *VAR_6)
{
 int VAR_7;
 loff_t VAR_8;
 int VAR_9 = -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->size; VAR_7++) {
  if (VAR_5->array[VAR_7].cookie == *VAR_6->dir_cookie) {
   struct nfs_inode *VAR_10 = FUNC_0(VAR_6->file->f_path.dentry->d_inode);
   struct nfs_open_dir_context *VAR_11 = VAR_6->file->private_data;

   VAR_8 = VAR_6->current_index + VAR_7;
   if (VAR_11->attr_gencount != VAR_10->attr_gencount
       || (VAR_10->cache_validity & (VAR_3|VAR_4))) {
    VAR_11->duped = 0;
    VAR_11->attr_gencount = VAR_10->attr_gencount;
   } else if (VAR_8 < VAR_6->file->f_pos) {
    if (VAR_11->duped > 0
        && VAR_11->dup_cookie == *VAR_6->dir_cookie) {
     if (FUNC_2()) {
      FUNC_1("NFS: directory %s/%s contains a readdir loop."
        "Please contact your server vendor.  "
        "The file: %s has duplicate cookie %llu\n",
        VAR_6->file->f_dentry->d_parent->d_name.name,
        VAR_6->file->f_dentry->d_name.name,
        VAR_5->array[VAR_7].string.name,
        *VAR_6->dir_cookie);
     }
     VAR_9 = -VAR_2;
     goto out;
    }
    VAR_11->dup_cookie = *VAR_6->dir_cookie;
    VAR_11->duped = -1;
   }
   VAR_6->file->f_pos = VAR_8;
   VAR_6->cache_entry_index = VAR_7;
   return 0;
  }
 }
 if (VAR_5->eof_index >= 0) {
  VAR_9 = -VAR_1;
  if (*VAR_6->dir_cookie == VAR_5->last_cookie)
   VAR_6->eof = 1;
 }
out:
 return VAR_9;
}
