
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {void* l2_buf; struct netif* l2_owner; void* payload; } ;
struct netif {scalar_t__ (* input ) (struct pbuf*,struct netif*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct netif*,void*) ;
 int FUNC_2 (struct netif*) ;
 struct pbuf* FUNC_3 (int ,size_t,int ) ;
 int FUNC_4 (struct pbuf*) ;
 scalar_t__ FUNC_5 (struct pbuf*,struct netif*) ;

void FUNC_6(struct netif *VAR_4, void *VAR_5, size_t VAR_6, void *VAR_7)
{
    struct pbuf *VAR_8;

    if (VAR_5 == ((void*)0) || !FUNC_2(VAR_4)) {
        if (VAR_5) {
            FUNC_1(VAR_4, VAR_5);
        }
        return;
    }


    VAR_8 = FUNC_3(VAR_2, VAR_6, VAR_3);
    if (VAR_8 == ((void*)0)) {
        FUNC_1(VAR_4, VAR_5);
        return;
    }
    VAR_8->payload = VAR_5;





    if (VAR_4->input(VAR_8, VAR_4) != VAR_0) {
        FUNC_0(VAR_1, ("ethernetif_input: IP input error\n"));
        FUNC_4(VAR_8);
    }

}
