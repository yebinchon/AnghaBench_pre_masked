
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_3__ {scalar_t__ end; scalar_t__ beg; } ;
typedef TYPE_1__ Case ;


 int FUNC_0 (char*,scalar_t__,...) ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(Vector *VAR_0) {
    int VAR_1 = FUNC_2(VAR_0);
    Case *VAR_2 = FUNC_1(VAR_0, VAR_1 - 1);
    for (int VAR_3 = 0; VAR_3 < VAR_1 - 1; VAR_3++) {
        Case *VAR_4 = FUNC_1(VAR_0, VAR_3);
        if (VAR_2->end < VAR_4->beg || VAR_4->end < VAR_2->beg)
            continue;
        if (VAR_2->beg == VAR_2->end)
            FUNC_0("duplicate case value: %d", VAR_2->beg);
        FUNC_0("duplicate case value: %d ... %d", VAR_2->beg, VAR_2->end);
    }
}
