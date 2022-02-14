
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct pbuf {struct pbuf* payload; } ;


 int FUNC_0 (struct pbuf*) ;

u8_t FUNC_1(struct pbuf *VAR_0)
{
    if (VAR_0) {
        if (VAR_0->payload) {
            FUNC_0(VAR_0->payload);
            VAR_0->payload = ((void*)0);
        }
        FUNC_0 (VAR_0);
        VAR_0 = ((void*)0);
    }
    return 1;
}
