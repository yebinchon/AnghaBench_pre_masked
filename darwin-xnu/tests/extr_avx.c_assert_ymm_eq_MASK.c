
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (void*,void*,int) ;
 int FUNC_3 (void*,int ) ;
 int VAR_0 ;

void
FUNC_4(void *VAR_1, void *VAR_2, int VAR_3) {
 if(FUNC_2(VAR_1, VAR_2, VAR_3)) {
  FUNC_3(VAR_1, VAR_0);
  FUNC_1("Compare failed, vector A:\n%s", VAR_0);
  FUNC_3(VAR_2, VAR_0);
  FUNC_1("Compare failed, vector B:\n%s", VAR_0);
  FUNC_0("vectors not equal");
 }
}
