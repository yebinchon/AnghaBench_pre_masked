
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kind; int usig; int size; int align; } ;
typedef TYPE_1__ Type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static Type *FUNC_2(int VAR_10, bool VAR_11) {
    Type *VAR_12 = FUNC_0(1, sizeof(Type));
    VAR_12->kind = VAR_10;
    VAR_12->usig = VAR_11;
    if (VAR_10 == VAR_9) VAR_12->size = VAR_12->align = 0;
    else if (VAR_10 == VAR_0) VAR_12->size = VAR_12->align = 1;
    else if (VAR_10 == VAR_1) VAR_12->size = VAR_12->align = 1;
    else if (VAR_10 == VAR_8) VAR_12->size = VAR_12->align = 2;
    else if (VAR_10 == VAR_4) VAR_12->size = VAR_12->align = 4;
    else if (VAR_10 == VAR_7) VAR_12->size = VAR_12->align = 8;
    else if (VAR_10 == VAR_6) VAR_12->size = VAR_12->align = 8;
    else if (VAR_10 == VAR_3) VAR_12->size = VAR_12->align = 4;
    else if (VAR_10 == VAR_2) VAR_12->size = VAR_12->align = 8;
    else if (VAR_10 == VAR_5) VAR_12->size = VAR_12->align = 8;
    else FUNC_1("internal error");
    return VAR_12;
}
