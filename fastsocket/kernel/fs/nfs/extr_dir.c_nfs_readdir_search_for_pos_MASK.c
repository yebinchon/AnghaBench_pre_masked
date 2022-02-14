
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_cache_array {scalar_t__ size; scalar_t__ eof_index; TYPE_1__* array; } ;
struct TYPE_7__ {scalar_t__ current_index; unsigned int cache_entry_index; int eof; int * dir_cookie; TYPE_2__* file; } ;
typedef TYPE_3__ nfs_readdir_descriptor_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ f_pos; } ;
struct TYPE_5__ {int cookie; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
int FUNC_0(struct nfs_cache_array *VAR_2, nfs_readdir_descriptor_t *VAR_3)
{
 loff_t VAR_4 = VAR_3->file->f_pos - VAR_3->current_index;
 unsigned int VAR_5;

 if (VAR_4 < 0)
  goto out_eof;
 if (VAR_4 >= VAR_2->size) {
  if (VAR_2->eof_index >= 0)
   goto out_eof;
  return -VAR_0;
 }

 VAR_5 = (unsigned int)VAR_4;
 *VAR_3->dir_cookie = VAR_2->array[VAR_5].cookie;
 VAR_3->cache_entry_index = VAR_5;
 return 0;
out_eof:
 VAR_3->eof = 1;
 return -VAR_1;
}
