
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Table ;
typedef int TValue ;
typedef int TString ;
typedef int Node ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int const* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 int const* VAR_0 ;
 int * FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

const TValue *FUNC_6 (Table *VAR_1, TString *VAR_2) {
  Node *VAR_3 = FUNC_3(VAR_1, VAR_2);
  do {
    if (FUNC_5(FUNC_0(VAR_3)) && FUNC_4(FUNC_0(VAR_3)) == VAR_2)
      return FUNC_2(VAR_3);
    else VAR_3 = FUNC_1(VAR_3);
  } while (VAR_3);
  return VAR_0;
}
