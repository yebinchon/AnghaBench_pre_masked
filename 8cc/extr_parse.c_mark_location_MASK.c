
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int line; TYPE_1__* file; } ;
typedef TYPE_2__ Token ;
struct TYPE_8__ {int line; int file; } ;
struct TYPE_6__ {int name; } ;
typedef int SourceLoc ;


 TYPE_3__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static void FUNC_2() {
    Token *VAR_1 = FUNC_1();
    VAR_0 = FUNC_0(sizeof(SourceLoc));
    VAR_0->file = VAR_1->file->name;
    VAR_0->line = VAR_1->line;
}
