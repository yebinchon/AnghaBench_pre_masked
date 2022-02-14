
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int column; int line; TYPE_2__* file; } ;
typedef TYPE_1__ Token ;
struct TYPE_5__ {char* name; } ;
typedef TYPE_2__ File ;


 char* FUNC_0 (char*,char*,int ,int ) ;

char *FUNC_1(Token *VAR_0) {
    File *VAR_1 = VAR_0->file;
    if (!VAR_1)
        return "(unknown)";
    char *VAR_2 = VAR_1->name ? VAR_1->name : "(unknown)";
    return FUNC_0("%s:%d:%d", VAR_2, VAR_0->line, VAR_0->column);
}
