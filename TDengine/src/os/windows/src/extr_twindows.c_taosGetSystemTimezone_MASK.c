
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cfgStatus; } ;
typedef TYPE_1__ SGlobalConfig ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 TYPE_1__* FUNC_4 (char*) ;
 int VAR_1 ;

void FUNC_5() {

  SGlobalConfig *VAR_2 = FUNC_4("timezone");
  if (VAR_2 && VAR_2->cfgStatus < VAR_0) {
    char *VAR_3 = FUNC_0("TZ");
    if (VAR_3 == ((void*)0) || FUNC_3(VAR_3) == 0) {
      FUNC_2(VAR_1, "not configured");
    }
    else {
      FUNC_2(VAR_1, VAR_3);
    }
    VAR_2->cfgStatus = VAR_0;
    FUNC_1("timezone not configured, use default");
  }
}
