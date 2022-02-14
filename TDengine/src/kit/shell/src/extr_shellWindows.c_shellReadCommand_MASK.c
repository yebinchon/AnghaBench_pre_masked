
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmd ;
struct TYPE_6__ {char* buffer; char* command; } ;
typedef int TAOS ;
typedef TYPE_1__ Command ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 char FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,char*,char*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(TAOS *VAR_1, char VAR_2[]) {
  Command VAR_3;
  FUNC_5(&VAR_3, 0, sizeof(VAR_3));
  VAR_3.buffer = (char *)FUNC_0(1, VAR_0);
  VAR_3.command = (char *)FUNC_0(1, VAR_0);


  char VAR_4;
  while (1) {
    VAR_4 = FUNC_2();

    switch (VAR_4) {
      case '\n':
      case '\r':
        if (FUNC_4(&VAR_3)) {
          FUNC_7(VAR_2, "%s%s", VAR_3.buffer, VAR_3.command);
          FUNC_1(VAR_3.buffer);
          VAR_3.buffer = ((void*)0);
          FUNC_1(VAR_3.command);
          VAR_3.command = ((void*)0);
          return;
        } else {
          FUNC_6();
          FUNC_8(&VAR_3);
        }
        break;
      default:
        FUNC_3(&VAR_3, VAR_4);
    }
  }
}
