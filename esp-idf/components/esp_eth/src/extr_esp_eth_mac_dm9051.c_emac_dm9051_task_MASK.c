
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ (* receive ) (TYPE_3__*,int*,scalar_t__*) ;} ;
struct TYPE_6__ {TYPE_2__* eth; TYPE_3__ parent; scalar_t__ packets_remain; } ;
typedef TYPE_1__ emac_dm9051_t ;
struct TYPE_7__ {int (* stack_input ) (TYPE_2__*,int*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int*,scalar_t__*) ;
 int FUNC_5 (TYPE_2__*,int*,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_7)
{
    emac_dm9051_t *VAR_8 = (emac_dm9051_t *)VAR_7;
    uint8_t VAR_9 = 0;
    uint8_t *VAR_10 = ((void*)0);
    uint32_t VAR_11 = 0;
    while (1) {

        FUNC_6(VAR_5, VAR_6);

        FUNC_0(VAR_8, VAR_0, &VAR_9);
        FUNC_1(VAR_8, VAR_0, VAR_9);

        if (VAR_9 & VAR_3) {
            do {
                VAR_11 = VAR_2;
                VAR_10 = (uint8_t *)FUNC_3(VAR_11, VAR_4);
                if (VAR_8->parent.receive(&VAR_8->parent, VAR_10, &VAR_11) == VAR_1) {

                    if (VAR_11) {
                        VAR_8->eth->stack_input(VAR_8->eth, VAR_10, VAR_11);
                    } else {
                        FUNC_2(VAR_10);
                    }
                } else {
                    FUNC_2(VAR_10);
                }
            } while (VAR_8->packets_remain);
        }
    }
    FUNC_7(((void*)0));
}
