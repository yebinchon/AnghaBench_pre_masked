
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mdns_txt_item_t ;
struct TYPE_8__ {TYPE_3__* txt; TYPE_2__* proto; TYPE_1__* service; int end; } ;
struct TYPE_7__ {scalar_t__ count; int sval; } ;
struct TYPE_6__ {int * sval; } ;
struct TYPE_5__ {int * sval; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,char**,void**) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int *,scalar_t__) ;
 TYPE_4__ VAR_0 ;
 int FUNC_6 (char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(int VAR_2, char** VAR_3)
{
    mdns_txt_item_t * VAR_4 = ((void*)0);
    int VAR_5 = FUNC_2(VAR_2, VAR_3, (void**) &VAR_0);
    if (VAR_5 != 0) {
        FUNC_3(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    if (!VAR_0.service->sval[0] || !VAR_0.proto->sval[0]) {
        FUNC_6("ERROR: Bad arguments!\n");
        return 1;
    }

    if (VAR_0.txt->count) {
        VAR_4 = FUNC_1(VAR_0.txt->sval, VAR_0.txt->count);
        if (!VAR_4) {
            FUNC_6("ERROR: No Memory!\n");
            return 1;

        }
    }
    FUNC_0( FUNC_5(VAR_0.service->sval[0], VAR_0.proto->sval[0], VAR_4, VAR_0.txt->count) );
    FUNC_4(VAR_4);
    return 0;
}
