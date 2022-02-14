
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page**) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page **VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2) {
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {

   if (!FUNC_0(VAR_0[VAR_3]))
    FUNC_1(VAR_0[VAR_3]);
   FUNC_3(VAR_0[VAR_3]);
  }
 } else {


  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   FUNC_3(VAR_0[VAR_3]);
 }

 if (VAR_0)

  FUNC_2(VAR_0);

 return 0;
}
