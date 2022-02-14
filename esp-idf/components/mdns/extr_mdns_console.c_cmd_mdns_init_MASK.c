
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* instance; TYPE_1__* hostname; int end; } ;
struct TYPE_5__ {char** sval; } ;
struct TYPE_4__ {char** sval; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_3__ VAR_0 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(int VAR_2, char** VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2, VAR_3, (void**) &VAR_0);
    if (VAR_4 != 0) {
        FUNC_2(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    FUNC_0( FUNC_4() );

    if (VAR_0.hostname->sval[0]) {
        FUNC_0( FUNC_3(VAR_0.hostname->sval[0]) );
        FUNC_6("MDNS: Hostname: %s\n", VAR_0.hostname->sval[0]);
    }

    if (VAR_0.instance->sval[0]) {
        FUNC_0( FUNC_5(VAR_0.instance->sval[0]) );
        FUNC_6("MDNS: Instance: %s\n", VAR_0.instance->sval[0]);
    }

    return 0;
}
