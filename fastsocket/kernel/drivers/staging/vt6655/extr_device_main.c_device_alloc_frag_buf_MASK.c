
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {TYPE_5__* skb; } ;
struct TYPE_7__ {int dev; scalar_t__ rx_buf_sz; } ;
typedef TYPE_1__* PSDevice ;
typedef TYPE_2__* PSDeFragControlBlock ;
typedef int BOOL ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_1 (int) ;

BOOL FUNC_2(PSDevice VAR_2, PSDeFragControlBlock VAR_3) {

    VAR_3->skb = FUNC_1((int)VAR_2->rx_buf_sz);
    if (VAR_3->skb == ((void*)0))
        return VAR_0;
    FUNC_0(VAR_3->skb);
    VAR_3->skb->dev = VAR_2->dev;

    return VAR_1;
}
