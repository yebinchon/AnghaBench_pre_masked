
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symlist_t ;
typedef int symbol_node_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void
FUNC_4(symlist_t *VAR_1)
{
 symbol_node_t *VAR_2, *VAR_3;

 VAR_2 = FUNC_0(VAR_1);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_2(VAR_2, VAR_0);
  FUNC_3(VAR_2);
  VAR_2 = VAR_3;
 }
 FUNC_1(VAR_1);
}
