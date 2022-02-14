
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16_t ;
struct pbuf {scalar_t__ payload; void* len; int type_internal; int * next; void* tot_len; } ;
typedef int pbuf_type ;
typedef int pbuf_layer ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;

struct pbuf * FUNC_1(pbuf_layer VAR_2, u16_t VAR_3, pbuf_type VAR_4)
{
    struct pbuf * VAR_5;
    VAR_5 = (struct pbuf *)FUNC_0(VAR_0);
    VAR_5->tot_len = VAR_3;
    VAR_5->next = ((void*)0);
    VAR_5->type_internal = VAR_1;
    VAR_5->len = VAR_3;
    VAR_5->payload = FUNC_0(VAR_3);
    return VAR_5;
}
