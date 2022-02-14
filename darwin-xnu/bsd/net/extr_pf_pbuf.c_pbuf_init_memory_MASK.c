
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pbuf_memory {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {int * pb_next; struct ifnet* pb_ifp; struct pbuf_memory pb_memory; int pb_type; } ;
typedef TYPE_1__ pbuf_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(pbuf_t *VAR_1, const struct pbuf_memory *VAR_2, struct ifnet *VAR_3)
{

 VAR_1->pb_type = VAR_0;
 VAR_1->pb_memory = *VAR_2;
 VAR_1->pb_ifp = VAR_3;
 VAR_1->pb_next = ((void*)0);
 FUNC_0(VAR_1);
}
