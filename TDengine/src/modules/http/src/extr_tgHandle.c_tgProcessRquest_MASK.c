
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpContext {int pass; int user; } ;


 int VAR_0 ;
 int FUNC_0 (struct HttpContext*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (struct HttpContext*) ;
 int FUNC_3 (struct HttpContext*,char*) ;

bool FUNC_4(struct HttpContext *VAR_1) {
  if (FUNC_1(VAR_1->user) == 0 || FUNC_1(VAR_1->pass) == 0) {
    FUNC_0(VAR_1, VAR_0);
    return 0;
  }

  char *VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 == ((void*)0)) {
    return 0;
  }

  return FUNC_3(VAR_1, VAR_2);
}
