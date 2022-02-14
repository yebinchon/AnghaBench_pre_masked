
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* pm_action ) (TYPE_2__*,int ) ;int * pm_buffer; } ;
struct TYPE_5__ {scalar_t__ pb_type; TYPE_2__ pb_memory; int * pb_mbuf; } ;
typedef TYPE_1__ pbuf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void
FUNC_4(pbuf_t *VAR_4)
{

 if (VAR_4->pb_type == VAR_1) {
  if (VAR_4->pb_mbuf) {
   FUNC_1(VAR_4->pb_mbuf);
   VAR_4->pb_mbuf = ((void*)0);
  }
 } else
 if (VAR_4->pb_type == VAR_2) {
  FUNC_0(VAR_4->pb_memory.pm_buffer != ((void*)0));
  (void) (VAR_4->pb_memory.pm_action)(&VAR_4->pb_memory,
      VAR_0);
 } else {
  FUNC_0(VAR_4->pb_type == VAR_3);
 }

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));
}
