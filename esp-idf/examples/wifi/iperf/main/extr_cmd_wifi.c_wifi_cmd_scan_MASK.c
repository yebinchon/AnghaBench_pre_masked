
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ssid; int end; } ;
struct TYPE_3__ {int count; int ** sval; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int VAR_3, char** VAR_4)
{
    int VAR_5 = FUNC_1(VAR_3, VAR_4, (void**) &VAR_1);

    if (VAR_5 != 0) {
        FUNC_2(VAR_2, VAR_1.end, VAR_4[0]);
        return 1;
    }

    FUNC_0(VAR_0, "sta start to scan");
    if ( VAR_1.ssid->count == 1 ) {
        FUNC_3(VAR_1.ssid->sval[0]);
    } else {
        FUNC_3(((void*)0));
    }
    return 0;
}
