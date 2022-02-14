
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {unsigned long nr; int * pages; } ;
struct fscache_retrieval {int dummy; } ;


 int FUNC_0 (struct fscache_retrieval*,int ,int) ;
 int FUNC_1 (struct pagevec*) ;

void FUNC_2(struct fscache_retrieval *VAR_0,
          struct pagevec *VAR_1,
          bool VAR_2)
{
 unsigned long VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr; VAR_3++)
  FUNC_0(VAR_0, VAR_1->pages[VAR_3],
      VAR_2);

 FUNC_1(VAR_1);
}
