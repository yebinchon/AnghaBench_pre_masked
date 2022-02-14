
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpContext {int pass; int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct HttpContext*,int ) ;
 scalar_t__ FUNC_1 (struct HttpContext*,int ,char*) ;
 int FUNC_2 (struct HttpContext*) ;
 int FUNC_3 (struct HttpContext*) ;
 int FUNC_4 (struct HttpContext*) ;
 int FUNC_5 (struct HttpContext*,int ) ;
 scalar_t__ FUNC_6 (int ) ;

bool FUNC_7(struct HttpContext* VAR_6) {
  if (FUNC_1(VAR_6, VAR_2, "login")) {
    FUNC_3(VAR_6);
    FUNC_2(VAR_6);
  }

  if (FUNC_6(VAR_6->user) == 0 || FUNC_6(VAR_6->pass) == 0) {
    FUNC_0(VAR_6, VAR_1);
    return 0;
  }

  if (FUNC_1(VAR_6, VAR_2, "sql")) {
    return FUNC_5(VAR_6, VAR_3);
  } else if (FUNC_1(VAR_6, VAR_2, "sqlt")) {
    return FUNC_5(VAR_6, VAR_4);
  } else if (FUNC_1(VAR_6, VAR_2, "sqlutc")) {
    return FUNC_5(VAR_6, VAR_5);
  } else if (FUNC_1(VAR_6, VAR_2, "login")) {
    return FUNC_4(VAR_6);
  } else {
  }

  FUNC_0(VAR_6, VAR_0);
  return 0;
}
