
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {char* payload; int len; } ;
struct netif {int dummy; } ;
typedef int err_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

err_t FUNC_1(struct netif *VAR_1, struct pbuf *VAR_2)
{
    int VAR_3;
    char *VAR_4 = VAR_2->payload;


    FUNC_0("\nPacketOut:[");
    for (VAR_3=0; VAR_3<VAR_2->len; VAR_3++) {
        FUNC_0("%02x", *VAR_4++);
    }
    FUNC_0("]\n");

    return VAR_0;
}
