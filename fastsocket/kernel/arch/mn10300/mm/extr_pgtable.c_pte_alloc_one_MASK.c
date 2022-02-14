
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int,int ) ;
 int FUNC_1 (struct page*) ;

struct page *FUNC_2(struct mm_struct *VAR_3, unsigned long VAR_4)
{
 struct page *VAR_5;




 VAR_5 = FUNC_0(VAR_0|VAR_2, 0);

 if (VAR_5)
  FUNC_1(VAR_5);
 return VAR_5;
}
