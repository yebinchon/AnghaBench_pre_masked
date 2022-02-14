
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int column; int line; int name; } ;
typedef TYPE_1__ File ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

char *FUNC_3() {
    if (FUNC_1(VAR_0) == 0)
        return "(unknown)";
    File *VAR_1 = FUNC_2(VAR_0);
    return FUNC_0("%s:%d:%d", VAR_1->name, VAR_1->line, VAR_1->column);
}
