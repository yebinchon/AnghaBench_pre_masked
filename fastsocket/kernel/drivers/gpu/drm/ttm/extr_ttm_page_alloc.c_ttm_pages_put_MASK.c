
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (char*,unsigned int) ;
 scalar_t__ FUNC_2 (struct page**,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_0[], unsigned VAR_1)
{
 unsigned VAR_2;
 if (FUNC_2(VAR_0, VAR_1))
  FUNC_1("Failed to set %d pages to wb!\n", VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  FUNC_0(VAR_0[VAR_2]);
}
