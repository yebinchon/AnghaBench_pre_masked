
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Charset ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int const,int) ;

__attribute__((used)) static void FUNC_2 (const Charset VAR_1) {
  int VAR_2;
  FUNC_0("[");
  for (VAR_2 = 0; VAR_2 <= VAR_0; VAR_2++) {
    int VAR_3 = VAR_2;
    while (FUNC_1(VAR_1, VAR_2) && VAR_2 <= VAR_0) VAR_2++;
    if (VAR_2 - 1 == VAR_3)
      FUNC_0("(%02x)", VAR_3);
    else if (VAR_2 - 1 > VAR_3)
      FUNC_0("(%02x-%02x)", VAR_3, VAR_2 - 1);
  }
  FUNC_0("]");
}
