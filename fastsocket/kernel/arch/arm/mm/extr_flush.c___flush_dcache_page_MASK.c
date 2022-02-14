
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

void FUNC_5(struct address_space *VAR_1, struct page *VAR_2)
{
  FUNC_0(FUNC_3(VAR_2));






 if (VAR_1 && FUNC_1())
  FUNC_2(FUNC_4(VAR_2),
    VAR_2->index << VAR_0);
}
