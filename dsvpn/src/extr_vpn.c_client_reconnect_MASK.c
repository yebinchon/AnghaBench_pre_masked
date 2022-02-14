
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ is_server; } ;
typedef TYPE_1__ Context ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(Context *VAR_2)
{
    unsigned int VAR_3;

    FUNC_1(VAR_2);
    if (VAR_2->is_server) {
        return 0;
    }
    for (VAR_3 = 0; VAR_1 == 0 && VAR_3 < VAR_0; VAR_3++) {
        FUNC_2("Trying to reconnect");
        FUNC_3(VAR_3 > 3 ? 3 : VAR_3);
        if (FUNC_0(VAR_2) == 0) {
            return 0;
        }
    }
    return -1;
}
