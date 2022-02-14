
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct dirent {int d_type; int d_name; } ;
struct TYPE_5__ {int is_dir; int name; int handle; int valid; } ;
typedef TYPE_1__ DirListIter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 struct dirent* FUNC_3 (int ) ;

void FUNC_4(DirListIter *VAR_1) {
    if (!VAR_1->valid) {
        return;
    }
    do {
        struct dirent *VAR_2 = FUNC_3(VAR_1->handle);
        if (!VAR_2) {
            FUNC_1(VAR_1);
            return;
        }
        FUNC_2(VAR_1->name, VAR_2->d_name);
        VAR_1->is_dir = VAR_2->d_type & VAR_0;
    } while (FUNC_0(VAR_1));
}
