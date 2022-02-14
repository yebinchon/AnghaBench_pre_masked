
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long,struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct page **VAR_1, size_t VAR_2,
       int VAR_3)
{
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  FUNC_0(VAR_0, "%lu/%lu put_page %p\n", (unsigned long) VAR_4,
      (unsigned long) VAR_2, VAR_1[VAR_4]);
  if (VAR_3)
   FUNC_2(VAR_1[VAR_4]);
  FUNC_1(VAR_1[VAR_4]);
 }
}
