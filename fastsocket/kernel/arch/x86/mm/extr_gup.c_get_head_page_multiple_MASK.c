
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int _count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 struct page* FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static inline void FUNC_4(struct page *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0 != FUNC_2(VAR_0));
 FUNC_0(FUNC_3(VAR_0) == 0);
 FUNC_1(VAR_1, &VAR_0->_count);
}
