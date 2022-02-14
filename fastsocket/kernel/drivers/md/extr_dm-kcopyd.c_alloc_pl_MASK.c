
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_list {int page; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct page_list*) ;
 struct page_list* FUNC_2 (int,int ) ;

__attribute__((used)) static struct page_list *FUNC_3(gfp_t VAR_0)
{
 struct page_list *VAR_1;

 VAR_1 = FUNC_2(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 VAR_1->page = FUNC_0(VAR_0);
 if (!VAR_1->page) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
