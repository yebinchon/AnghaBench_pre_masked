
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ skb; } ;
struct TYPE_4__ {TYPE_2__* sRxDFCB; } ;
typedef TYPE_1__* PSDevice ;
typedef TYPE_2__* PSDeFragControlBlock ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(PSDevice VAR_1) {
    PSDeFragControlBlock VAR_2;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

        VAR_2 = &(VAR_1->sRxDFCB[VAR_3]);

        if (VAR_2->skb)
            FUNC_0(VAR_2->skb);
    }
}
