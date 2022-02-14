
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct linux_binprm {struct page** page; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;

struct page *FUNC_1(struct linux_binprm *VAR_3, unsigned long VAR_4,
  int VAR_5)
{
 struct page *VAR_6;

 VAR_6 = VAR_3->page[VAR_4 / VAR_1];
 if (!VAR_6 && VAR_5) {
  VAR_6 = FUNC_0(VAR_0|VAR_2);
  if (!VAR_6)
   return ((void*)0);
  VAR_3->page[VAR_4 / VAR_1] = VAR_6;
 }

 return VAR_6;
}
