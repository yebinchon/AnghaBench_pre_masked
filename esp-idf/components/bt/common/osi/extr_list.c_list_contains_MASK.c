
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list_t ;
typedef int list_node_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int const*) ;
 int const* FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 void const* FUNC_4 (int const*) ;

bool FUNC_5(const list_t *VAR_0, const void *VAR_1)
{
  FUNC_0(VAR_0 != ((void*)0));
  FUNC_0(VAR_1 != ((void*)0));

  for (const list_node_t *VAR_2 = FUNC_1(VAR_0); VAR_2 != FUNC_2(VAR_0); VAR_2 = FUNC_3(VAR_2)) {
    if (FUNC_4(VAR_2) == VAR_1) {
      return 1;
    }
  }

  return 0;
}
