
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_Number ;
typedef int a ;
typedef int Table ;
typedef int Node ;


 int * FUNC_0 (int const*,int ) ;
 int * FUNC_1 (int const*,unsigned int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned int*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static Node *FUNC_4 (const Table *VAR_1, lua_Number VAR_2) {
  unsigned int VAR_3[VAR_0];
  int VAR_4;
  if (FUNC_2(VAR_2, 0))
    return FUNC_0(VAR_1, 0);
  FUNC_3(VAR_3, &VAR_2, sizeof(VAR_3));
  for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) VAR_3[0] += VAR_3[VAR_4];
  return FUNC_1(VAR_1, VAR_3[0]);
}
