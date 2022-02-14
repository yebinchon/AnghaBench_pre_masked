
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer_addr; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_1__* scb; } ;
typedef int * BD_ADDR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int ) ;
 TYPE_2__ VAR_1 ;

UINT16 FUNC_2(BD_ADDR VAR_2)
{
    tBTA_AG_SCB *VAR_3 = &VAR_1.scb[0];
    UINT16 VAR_4;

    if (VAR_2 != ((void*)0)) {
        for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
            if (VAR_3->in_use && !FUNC_1(VAR_2, VAR_3->peer_addr)) {
                return (VAR_4 + 1);
            }
        }
    }

    FUNC_0("No ag scb for peer addr");
    return 0;
}
