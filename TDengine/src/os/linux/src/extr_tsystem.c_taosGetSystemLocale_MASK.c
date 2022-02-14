
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cfgStatus; } ;
typedef TYPE_1__ SGlobalConfig ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (int ,char) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_8 (char*) ;
 int VAR_3 ;

void FUNC_9() {
  char VAR_4 = '.';
  char *VAR_5 = ((void*)0);

  SGlobalConfig *VAR_6 = FUNC_8("locale");
  if (VAR_6 && VAR_6->cfgStatus < VAR_1) {
    VAR_5 = FUNC_3(VAR_0, "");
    if (VAR_5 == ((void*)0)) {
      FUNC_1("can't get locale from system");
    } else {
      FUNC_4(VAR_3, VAR_5, FUNC_6(VAR_3));
      FUNC_2("locale not configured, set to system default:%s", VAR_3);
    }
  }


  SGlobalConfig *VAR_7 = FUNC_8("charset");
  if (VAR_7 && VAR_7->cfgStatus < VAR_1) {
    char *VAR_8 = FUNC_5(VAR_3, VAR_4);
    if (VAR_8 != ((void*)0)) {
      VAR_8++;

      char *VAR_9 = FUNC_7(VAR_8);
      FUNC_4(VAR_2, VAR_9, FUNC_6(VAR_2));

      FUNC_0(VAR_9);
      FUNC_2("charset not configured, set to system default:%s", VAR_2);
    }
  }
}
