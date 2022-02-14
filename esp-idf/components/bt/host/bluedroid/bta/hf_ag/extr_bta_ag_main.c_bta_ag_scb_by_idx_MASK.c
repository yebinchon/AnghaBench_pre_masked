
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in_use; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int UINT16 ;
struct TYPE_5__ {TYPE_1__* scb; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;

tBTA_AG_SCB *FUNC_2(UINT16 VAR_2)
{
    tBTA_AG_SCB *VAR_3;

    if (VAR_2 > 0 && VAR_2 <= VAR_0) {
        VAR_3 = &VAR_1.scb[VAR_2 - 1];
        if (!VAR_3->in_use) {
            VAR_3 = ((void*)0);
            FUNC_1("ag scb idx %d not allocated", VAR_2);
        }
    } else {
        VAR_3 = ((void*)0);
        FUNC_0("ag scb idx %d out of range", VAR_2);
    }
    return VAR_3;
}
