
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {int len; int payload; int * l2_buf; int * l2_owner; int tot_len; int * next; } ;
struct netif {int dummy; } ;
typedef int esp_netif_t ;
typedef scalar_t__ esp_err_t ;
typedef int err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (struct netif*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 struct pbuf* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct pbuf*,struct pbuf*) ;
 int FUNC_5 (struct pbuf*) ;

__attribute__((used)) static err_t FUNC_6(struct netif *VAR_10, struct pbuf *VAR_11)
{
    struct pbuf *VAR_12 = VAR_11;
    esp_netif_t *VAR_13 = FUNC_1(VAR_10);
    esp_err_t VAR_14 = VAR_4;
    if (!VAR_13) {
        FUNC_0(VAR_6, ("corresponding esp-netif is NULL: netif=%p pbuf=%p len=%d\n", VAR_10, VAR_11, VAR_11->len));
        return VAR_1;
    }

    if (VAR_12->next == ((void*)0)) {
        VAR_14 = FUNC_2(VAR_13, VAR_12->payload, VAR_12->len);
    } else {
        FUNC_0(VAR_7, ("low_level_output: pbuf is a list, application may has bug"));
        VAR_12 = FUNC_3(VAR_9, VAR_11->tot_len, VAR_8);
        if (VAR_12 != ((void*)0)) {





            FUNC_4(VAR_12, VAR_11);
        } else {
            return VAR_2;
        }
        VAR_14 = FUNC_2(VAR_13, VAR_12->payload, VAR_12->len);

        FUNC_5(VAR_12);
    }

    if (VAR_14 != VAR_5) {
        return VAR_0;
    } else {
        return VAR_3;
    }
}
