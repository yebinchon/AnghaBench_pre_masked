
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cursorOffset; char* command; } ;
typedef TYPE_1__ Command ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_1 ;

void FUNC_1(Command *VAR_2, char VAR_3) {

  if (VAR_2->cursorOffset >= VAR_0) {
    FUNC_0(VAR_1, "sql is larger than %ld bytes", VAR_0);
    return;
  }

  VAR_2->command[VAR_2->cursorOffset++] = VAR_3;
}
