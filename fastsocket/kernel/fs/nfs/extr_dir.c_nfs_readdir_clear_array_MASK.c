
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_cache_array {int size; TYPE_2__* array; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ string; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct nfs_cache_array* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct nfs_cache_array*,int ) ;

__attribute__((used)) static
void FUNC_3(struct page *VAR_1)
{
 struct nfs_cache_array *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++)
  FUNC_0(VAR_2->array[VAR_3].string.name);
 FUNC_2(VAR_2, VAR_0);
}
