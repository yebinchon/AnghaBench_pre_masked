
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct fscache_cookie {int stores; } ;


 void* FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

bool FUNC_3(struct fscache_cookie *VAR_0, struct page *VAR_1)
{
 void *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(&VAR_0->stores, VAR_1->index);
 FUNC_2();

 return VAR_2 != ((void*)0);
}
