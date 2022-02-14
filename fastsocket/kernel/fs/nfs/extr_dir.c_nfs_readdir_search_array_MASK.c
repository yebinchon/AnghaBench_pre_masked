
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nfs_cache_array {scalar_t__ size; int last_cookie; } ;
struct TYPE_5__ {scalar_t__* dir_cookie; int page; int page_index; int current_index; int last_cookie; } ;
typedef TYPE_1__ nfs_readdir_descriptor_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nfs_cache_array*) ;
 int FUNC_1 (struct nfs_cache_array*) ;
 struct nfs_cache_array* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_cache_array*,TYPE_1__*) ;
 int FUNC_5 (struct nfs_cache_array*,TYPE_1__*) ;

__attribute__((used)) static
int FUNC_6(nfs_readdir_descriptor_t *VAR_1)
{
 struct nfs_cache_array *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1->page);
 if (FUNC_0(VAR_2)) {
  VAR_3 = FUNC_1(VAR_2);
  goto out;
 }

 if (*VAR_1->dir_cookie == 0)
  VAR_3 = FUNC_5(VAR_2, VAR_1);
 else
  VAR_3 = FUNC_4(VAR_2, VAR_1);

 if (VAR_3 == -VAR_0) {
  VAR_1->last_cookie = VAR_2->last_cookie;
  VAR_1->current_index += VAR_2->size;
  VAR_1->page_index++;
 }
 FUNC_3(VAR_1->page);
out:
 return VAR_3;
}
