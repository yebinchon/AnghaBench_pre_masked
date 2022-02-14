
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ OPMASK ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__*,int ) ;

__attribute__((used)) static void
FUNC_3(OPMASK *VAR_2, OPMASK *VAR_3) {
 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4] != VAR_3[VAR_4]) {
   FUNC_2(VAR_2, VAR_1);
   FUNC_1("Compare failed, opmask A:\n%s", VAR_1);
   FUNC_2(VAR_3, VAR_1);
   FUNC_1("Compare failed, opmask B:\n%s", VAR_1);
   FUNC_0("opmasks not equal");
  }
 }
}
