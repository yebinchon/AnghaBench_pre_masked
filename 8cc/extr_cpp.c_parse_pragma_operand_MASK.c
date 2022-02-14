
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* sval; TYPE_1__* file; } ;
typedef TYPE_2__ Token ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,void*) ;
 int VAR_1 ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(Token *VAR_2) {
    char *VAR_3 = VAR_2->sval;
    if (!FUNC_3(VAR_3, "once")) {
        char *VAR_4 = FUNC_1(VAR_2->file->name);
        FUNC_2(VAR_1, VAR_4, (void *)1);
    } else if (!FUNC_3(VAR_3, "enable_warning")) {
        VAR_0 = 1;
    } else if (!FUNC_3(VAR_3, "disable_warning")) {
        VAR_0 = 0;
    } else {
        FUNC_0(VAR_2, "unknown #pragma: %s", VAR_3);
    }
}
