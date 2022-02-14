
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page_array {unsigned int npages; int * pagevec; int * page_array; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (unsigned int,int,int ) ;

bool FUNC_2(struct nfs_page_array *VAR_1, unsigned int VAR_2)
{
 VAR_1->npages = VAR_2;
 if (VAR_2 <= FUNC_0(VAR_1->page_array))
  VAR_1->pagevec = VAR_1->page_array;
 else {
  VAR_1->pagevec = FUNC_1(VAR_2, sizeof(struct page *), VAR_0);
  if (!VAR_1->pagevec)
   VAR_1->npages = 0;
 }
 return VAR_1->pagevec != ((void*)0);
}
