
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* instance; int end; } ;
struct TYPE_3__ {int ** sval; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,void**) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(int VAR_2, char** VAR_3)
{
    int VAR_4 = FUNC_1(VAR_2, VAR_3, (void**) &VAR_0);
    if (VAR_4 != 0) {
        FUNC_2(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    if (VAR_0.instance->sval[0] == ((void*)0)) {
        FUNC_4("ERROR: Bad arguments!\n");
        return 1;
    }

    FUNC_0( FUNC_3(VAR_0.instance->sval[0]) );
    return 0;
}
