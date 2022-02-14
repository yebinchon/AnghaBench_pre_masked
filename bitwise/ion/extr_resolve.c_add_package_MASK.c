
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ Package ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(Package *VAR_2) {
    Package *VAR_3 = FUNC_2(&VAR_1, VAR_2->path);
    if (VAR_3 != VAR_2) {
        FUNC_0(!VAR_3);
        FUNC_3(&VAR_1, VAR_2->path, VAR_2);
        FUNC_1(VAR_0, VAR_2);
    }
}
