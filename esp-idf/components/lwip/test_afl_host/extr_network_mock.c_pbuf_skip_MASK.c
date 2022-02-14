
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct pbuf {scalar_t__ len; struct pbuf* next; } ;



struct pbuf* FUNC_0(struct pbuf* VAR_0, u16_t VAR_1, u16_t* VAR_2)
{
    u16_t VAR_3 = VAR_1;
    struct pbuf* VAR_4 = VAR_0;


    while ((VAR_4 != ((void*)0)) && (VAR_4->len <= VAR_3)) {
        VAR_3 -= VAR_4->len;
        VAR_4 = VAR_4->next;
    }
    if (VAR_2 != ((void*)0)) {
        *VAR_2 = VAR_3;
    }
    return VAR_4;
}
