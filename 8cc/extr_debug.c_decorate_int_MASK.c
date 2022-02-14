
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitsize; scalar_t__ bitoff; scalar_t__ usig; } ;
typedef TYPE_1__ Type ;


 char* FUNC_0 (char*,char*,char*,...) ;

__attribute__((used)) static char *FUNC_1(char *VAR_0, Type *VAR_1) {
    char *VAR_2 = (VAR_1->usig) ? "u" : "";
    if (VAR_1->bitsize > 0)
        return FUNC_0("%s%s:%d:%d", VAR_2, VAR_0, VAR_1->bitoff, VAR_1->bitoff + VAR_1->bitsize);
    return FUNC_0("%s%s", VAR_2, VAR_0);
}
