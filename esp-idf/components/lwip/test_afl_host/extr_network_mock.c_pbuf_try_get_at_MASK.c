
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef size_t u16_t ;
struct pbuf {size_t len; scalar_t__ payload; } ;


 struct pbuf* FUNC_0 (struct pbuf const*,size_t,size_t*) ;

int FUNC_1(const struct pbuf* VAR_0, u16_t VAR_1)
{
    u16_t VAR_2;
    struct pbuf* VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);


    if ((VAR_3 != ((void*)0)) && (VAR_3->len > VAR_2)) {
        return ((u8_t*)VAR_3->payload)[VAR_2];
    }
    return -1;
}
