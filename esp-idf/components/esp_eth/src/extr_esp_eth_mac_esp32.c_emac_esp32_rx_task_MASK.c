
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {TYPE_2__* eth; int parent; scalar_t__ frames_remain; } ;
typedef TYPE_1__ emac_esp32_t ;
struct TYPE_4__ {int (* stack_input ) (TYPE_2__*,int *,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_4)
{
    emac_esp32_t *VAR_5 = (emac_esp32_t *)VAR_4;
    uint8_t *VAR_6 = ((void*)0);
    uint32_t VAR_7 = 0;
    while (1) {

        FUNC_4(VAR_2, VAR_3);
        do {
            VAR_7 = VAR_1;
            VAR_6 = (uint8_t *)FUNC_2(VAR_7);
            if (FUNC_0(&VAR_5->parent, VAR_6, &VAR_7) == VAR_0) {

                if (VAR_7) {
                    VAR_5->eth->stack_input(VAR_5->eth, VAR_6, VAR_7);
                } else {
                    FUNC_1(VAR_6);
                }
            } else {
                FUNC_1(VAR_6);
            }
        } while (VAR_5->frames_remain);
    }
    FUNC_5(((void*)0));
}
