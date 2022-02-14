
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {int pth_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (int ,char const*,scalar_t__) ;

void
FUNC_7(void *VAR_3, const char *VAR_4) {
 struct uthread *VAR_5 = (struct uthread *)VAR_3;
 char * VAR_6 = ((void*)0);

 if (!VAR_5->pth_name) {

  VAR_6 = FUNC_3(VAR_0);
  FUNC_1(VAR_6);
  FUNC_2(VAR_6, VAR_0);


  if (!FUNC_0(((void*)0), VAR_6, &VAR_5->pth_name)) {
   FUNC_5(VAR_6, VAR_0);
  }
 } else {
  FUNC_4(VAR_2, VAR_5->pth_name);
 }

 FUNC_6(VAR_5->pth_name, VAR_4, VAR_0 - 1);
 FUNC_4(VAR_1, VAR_5->pth_name);
}
