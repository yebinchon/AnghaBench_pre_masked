
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int beg; int end; char* label; } ;
typedef TYPE_1__ Case ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static Case *FUNC_1(int VAR_0, int VAR_1, char *VAR_2) {
    Case *VAR_3 = FUNC_0(sizeof(Case));
    VAR_3->beg = VAR_0;
    VAR_3->end = VAR_1;
    VAR_3->label = VAR_2;
    return VAR_3;
}
