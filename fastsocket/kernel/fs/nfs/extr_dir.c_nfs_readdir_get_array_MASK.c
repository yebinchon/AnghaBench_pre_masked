
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef void nfs_cache_array ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (struct page*) ;

__attribute__((used)) static
struct nfs_cache_array *FUNC_2(struct page *VAR_2)
{
 void *VAR_3;
 if (VAR_2 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_1);
 return VAR_3;
}
