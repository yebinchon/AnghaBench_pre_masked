
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__* packet; } ;
struct TYPE_5__ {int type; } ;
typedef TYPE_2__ QDM2SubPNode ;



__attribute__((used)) static QDM2SubPNode *FUNC_0(QDM2SubPNode *VAR_0,
                                                        int VAR_1)
{
    while (VAR_0 && VAR_0->packet) {
        if (VAR_0->packet->type == VAR_1)
            return VAR_0;
        VAR_0 = VAR_0->next;
    }
    return ((void*)0);
}
