
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int base; int name; int is_dir; int valid; } ;
typedef TYPE_1__ DirListIter ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;

bool FUNC_3(DirListIter *VAR_0) {
    if (!VAR_0->valid || !VAR_0->is_dir) {
        return 0;
    }
    DirListIter VAR_1;
    FUNC_2(VAR_0->base, VAR_0->name);
    FUNC_0(&VAR_1, VAR_0->base);
    FUNC_1(VAR_0);
    *VAR_0 = VAR_1;
    return 1;
}
