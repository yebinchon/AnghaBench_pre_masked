
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef size_t u16_t ;
struct pbuf {size_t len; scalar_t__ payload; } ;


 struct pbuf* FUNC_0 (struct pbuf*,size_t,size_t*) ;

void FUNC_1(struct pbuf* VAR_0, u16_t VAR_1, u8_t VAR_2)
{
    u16_t VAR_3;
    struct pbuf* VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);


    if ((VAR_4 != ((void*)0)) && (VAR_4->len > VAR_3)) {
        ((u8_t*)VAR_4->payload)[VAR_3] = VAR_2;
    }
}
