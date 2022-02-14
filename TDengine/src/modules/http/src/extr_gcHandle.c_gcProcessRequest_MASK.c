
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpContext {int pass; int user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct HttpContext*) ;
 int FUNC_1 (struct HttpContext*) ;
 int FUNC_2 (struct HttpContext*) ;
 int FUNC_3 (struct HttpContext*) ;
 int FUNC_4 (struct HttpContext*) ;
 int FUNC_5 (struct HttpContext*,int ) ;
 scalar_t__ FUNC_6 (struct HttpContext*,int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;

bool FUNC_8(struct HttpContext* VAR_2) {
  if (FUNC_6(VAR_2, VAR_0, "login")) {
    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
  }

  if (FUNC_7(VAR_2->user) == 0 || FUNC_7(VAR_2->pass) == 0) {
    FUNC_5(VAR_2, VAR_1);
    return 0;
  }

  if (FUNC_6(VAR_2, VAR_0, "query")) {
    return FUNC_4(VAR_2);
  } else if (FUNC_6(VAR_2, VAR_0, "heartbeat")) {
    return FUNC_2(VAR_2);
  } else if (FUNC_6(VAR_2, VAR_0, "login")) {
    return FUNC_3(VAR_2);
  } else {
    return FUNC_2(VAR_2);
  }
}
