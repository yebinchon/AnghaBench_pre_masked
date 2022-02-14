
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pbuf {int payload; int * l2_owner; } ;
struct netif {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* input ) (struct pbuf*,TYPE_1__*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ,void*,size_t) ;
 struct pbuf* FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (struct pbuf*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct pbuf*,TYPE_1__*) ;

void FUNC_6(struct netif *VAR_5, void *VAR_6, size_t VAR_7, void *VAR_8)
{
    struct pbuf *VAR_9;
    if (VAR_4 == ((void*)0)) {
        FUNC_4("error!");
        return;
    }

    FUNC_4("simul in: %d\n", VAR_7);
    if (VAR_7==0) return;

    VAR_9 = FUNC_2(VAR_3, VAR_7, VAR_2);
    VAR_9->l2_owner = ((void*)0);
    FUNC_1(VAR_9->payload, VAR_6, VAR_7);





    if (VAR_4->input(VAR_9, VAR_4) != VAR_0) {
        FUNC_0(VAR_1, ("ethernetif_input: IP input error\n"));
        FUNC_3(VAR_9);
    }

}
