
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {int column; int line; } ;
typedef TYPE_1__ Pos ;
typedef TYPE_2__ File ;


 TYPE_2__* FUNC_0 () ;
 char* FUNC_1 (char*,char*,int ,int ) ;

__attribute__((used)) static char *FUNC_2(Pos *VAR_0) {
    File *VAR_1 = FUNC_0();
    return FUNC_1("%s:%d:%d", VAR_1 ? VAR_1->name : "(unknown)", VAR_0->line, VAR_0->column);
}
