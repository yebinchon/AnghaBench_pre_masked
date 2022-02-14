
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* password; TYPE_1__* ssid; int end; } ;
struct TYPE_5__ {int * sval; } ;
struct TYPE_4__ {int * sval; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(int VAR_3, char **VAR_4)
{
    int VAR_5 = FUNC_1(VAR_3, VAR_4, (void **) &VAR_1);

    if (VAR_5 != 0) {
        FUNC_2(VAR_2, VAR_1.end, VAR_4[0]);
        return 1;
    }

    FUNC_3(VAR_1.ssid->sval[0], VAR_1.password->sval[0]);
    FUNC_0(VAR_0, "AP mode, %s %s", VAR_1.ssid->sval[0], VAR_1.password->sval[0]);
    return 0;
}
