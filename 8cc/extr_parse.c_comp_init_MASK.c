
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int initoff; } ;
typedef TYPE_1__ Node ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1) {
    int VAR_2 = (*(Node **)VAR_0)->initoff;
    int VAR_3 = (*(Node **)VAR_1)->initoff;
    if (VAR_2 < VAR_3) return -1;
    if (VAR_2 > VAR_3) return 1;
    return 0;
}
