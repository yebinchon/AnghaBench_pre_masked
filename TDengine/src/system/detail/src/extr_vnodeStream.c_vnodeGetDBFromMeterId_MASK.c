
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* meterId; } ;
typedef TYPE_1__ SMeterObj ;


 int FUNC_0 (char*,char*,int) ;
 char* FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2(SMeterObj *VAR_0, char *VAR_1) {
  char *VAR_2 = FUNC_1(VAR_0->meterId, ".");
  char *VAR_3 = FUNC_1(VAR_2 + 1, ".");

  FUNC_0(VAR_1, VAR_2 + 1, VAR_3 - (VAR_2 + 1));
}
