
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_open_dir_context {int duped; } ;
struct TYPE_5__ {int len; int name; } ;
struct nfs_cache_array_entry {scalar_t__ cookie; int d_type; int ino; TYPE_1__ string; } ;
struct nfs_cache_array {int size; scalar_t__ eof_index; scalar_t__ last_cookie; struct nfs_cache_array_entry* array; } ;
struct file {int f_pos; struct nfs_open_dir_context* private_data; } ;
struct TYPE_6__ {int cache_entry_index; int eof; scalar_t__* dir_cookie; int page; struct file* file; } ;
typedef TYPE_2__ nfs_readdir_descriptor_t ;
typedef scalar_t__ (* filldir_t ) (void*,int ,int ,int ,int ,int ) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_cache_array*) ;
 int FUNC_1 (struct nfs_cache_array*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*,unsigned long long,int) ;
 int FUNC_4 (int ) ;
 struct nfs_cache_array* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
int FUNC_7(nfs_readdir_descriptor_t *VAR_1, void *VAR_2,
     filldir_t VAR_3)
{
 struct file *VAR_4 = VAR_1->file;
 int VAR_5 = 0;
 int VAR_6 = 0;
 struct nfs_cache_array *VAR_7 = ((void*)0);
 struct nfs_open_dir_context *VAR_8 = VAR_4->private_data;

 VAR_7 = FUNC_5(VAR_1->page);
 if (FUNC_0(VAR_7)) {
  VAR_6 = FUNC_1(VAR_7);
  goto out;
 }

 for (VAR_5 = VAR_1->cache_entry_index; VAR_5 < VAR_7->size; VAR_5++) {
  struct nfs_cache_array_entry *VAR_9;

  VAR_9 = &VAR_7->array[VAR_5];
  if (VAR_3(VAR_2, VAR_9->string.name, VAR_9->string.len,
      VAR_4->f_pos, FUNC_4(VAR_9->ino),
      VAR_9->d_type) < 0) {
   VAR_1->eof = 1;
   break;
  }
  VAR_4->f_pos++;
  if (VAR_5 < (VAR_7->size-1))
   *VAR_1->dir_cookie = VAR_7->array[VAR_5+1].cookie;
  else
   *VAR_1->dir_cookie = VAR_7->last_cookie;
  if (VAR_8->duped != 0)
   VAR_8->duped = 1;
 }
 if (VAR_7->eof_index >= 0)
  VAR_1->eof = 1;

 FUNC_6(VAR_1->page);
out:
 FUNC_2(VAR_1);
 FUNC_3(VAR_0, "NFS: nfs_do_filldir() filling ended @ cookie %Lu; returning = %d\n",
   (unsigned long long)*VAR_1->dir_cookie, VAR_6);
 return VAR_6;
}
