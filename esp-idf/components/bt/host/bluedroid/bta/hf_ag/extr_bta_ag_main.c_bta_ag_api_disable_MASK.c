
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ in_use; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
struct TYPE_5__ {int (* p_cback ) (int ,int *) ;TYPE_1__* scb; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(tBTA_AG_DATA *VAR_7)
{

    tBTA_AG_SCB *VAR_8 = &VAR_6.scb[0];
    BOOLEAN VAR_9 = VAR_4;
    int VAR_10;

    if (!FUNC_4 (VAR_3)) {
        FUNC_0("BTA AG is already disabled, ignoring ...");
        return;
    }

    FUNC_3(VAR_3);

    for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++, VAR_8++) {
        if (VAR_8->in_use) {
            FUNC_1(VAR_8, VAR_0, VAR_7);
            VAR_9 = VAR_5;
        }
    }

    if (!VAR_9) {

        (*VAR_6.p_cback)(VAR_1, ((void*)0));
    }
    FUNC_2 (VAR_3, ((void*)0));
}
