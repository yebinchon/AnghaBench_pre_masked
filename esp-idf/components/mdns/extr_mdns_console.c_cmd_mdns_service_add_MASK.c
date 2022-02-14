
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mdns_txt_item_t ;
struct TYPE_12__ {TYPE_5__* txt; TYPE_4__* port; TYPE_3__* proto; TYPE_2__* service; TYPE_1__* instance; int end; } ;
struct TYPE_11__ {scalar_t__ count; int sval; } ;
struct TYPE_10__ {int * ival; } ;
struct TYPE_9__ {int * sval; } ;
struct TYPE_8__ {int * sval; } ;
struct TYPE_7__ {char** sval; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,char**,void**) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *) ;
 TYPE_6__ VAR_0 ;
 int FUNC_5 (char const*,int ,int ,int ,int *,scalar_t__) ;
 int FUNC_6 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(int VAR_2, char** VAR_3)
{
    int VAR_4 = FUNC_2(VAR_2, VAR_3, (void**) &VAR_0);
    if (VAR_4 != 0) {
        FUNC_3(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    if (!VAR_0.service->sval[0] || !VAR_0.proto->sval[0] || !VAR_0.port->ival[0]) {
        FUNC_6("ERROR: Bad arguments!\n");
        return 1;
    }
    const char * VAR_5 = ((void*)0);
    if (VAR_0.instance->sval[0] && VAR_0.instance->sval[0][0]) {
        VAR_5 = VAR_0.instance->sval[0];
        FUNC_6("MDNS: Service Instance: %s\n", VAR_5);
    }
    mdns_txt_item_t * VAR_6 = ((void*)0);
    if (VAR_0.txt->count) {
        VAR_6 = FUNC_1(VAR_0.txt->sval, VAR_0.txt->count);
        if (!VAR_6) {
            FUNC_6("ERROR: No Memory!\n");
            return 1;

        }
    }

    FUNC_0( FUNC_5(VAR_5, VAR_0.service->sval[0], VAR_0.proto->sval[0], VAR_0.port->ival[0], VAR_6, VAR_0.txt->count) );
    FUNC_4(VAR_6);
    return 0;
}
