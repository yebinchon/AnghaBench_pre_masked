
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line; int column; char* p; } ;
typedef TYPE_1__ File ;


 TYPE_1__* FUNC_0 (int,int) ;

File *FUNC_1(char *VAR_0) {
    File *VAR_1 = FUNC_0(1, sizeof(File));
    VAR_1->line = 1;
    VAR_1->column = 1;
    VAR_1->p = VAR_0;
    return VAR_1;
}
