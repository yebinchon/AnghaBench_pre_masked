
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; int column; int line; TYPE_2__* file; int * hideset; } ;
typedef TYPE_1__ Token ;
struct TYPE_10__ {int column; int line; } ;
struct TYPE_9__ {int ntok; } ;
typedef TYPE_2__ File ;


 TYPE_2__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static Token *FUNC_2(Token *VAR_1) {
    Token *VAR_2 = FUNC_1(sizeof(Token));
    *VAR_2 = *VAR_1;
    VAR_2->hideset = ((void*)0);
    File *VAR_3 = FUNC_0();
    VAR_2->file = VAR_3;
    VAR_2->line = VAR_0.line;
    VAR_2->column = VAR_0.column;
    VAR_2->count = VAR_3->ntok++;
    return VAR_2;
}
