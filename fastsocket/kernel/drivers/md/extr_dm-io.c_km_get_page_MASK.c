
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dpages {unsigned int context_u; int context_ptr; } ;


 unsigned long VAR_0 ;
 struct page* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dpages *VAR_1, struct page **VAR_2, unsigned long *VAR_3,
   unsigned *VAR_4)
{
 *VAR_2 = FUNC_0(VAR_1->context_ptr);
 *VAR_4 = VAR_1->context_u;
 *VAR_3 = VAR_0 - VAR_1->context_u;
}
