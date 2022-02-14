
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct _finddata_t {int dummy; } ;
struct TYPE_6__ {scalar_t__ handle; int valid; } ;
typedef TYPE_1__ DirListIter ;


 int FUNC_0 (intptr_t,struct _finddata_t*) ;
 int FUNC_1 (TYPE_1__*,int,struct _finddata_t*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(DirListIter *VAR_0) {
    if (!VAR_0->valid) {
        return;
    }
    do {
        struct _finddata_t VAR_1;
        int VAR_2 = FUNC_0((intptr_t)VAR_0->handle, &VAR_1);
        FUNC_1(VAR_0, VAR_2 != 0, &VAR_1);
        if (VAR_2 != 0) {
            FUNC_3(VAR_0);
            return;
        }
    } while (FUNC_2(VAR_0));
}
