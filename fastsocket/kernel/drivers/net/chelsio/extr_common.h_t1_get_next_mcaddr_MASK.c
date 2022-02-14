
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct t1_rx_mode {TYPE_2__* list; TYPE_1__* dev; int idx; } ;
struct TYPE_4__ {struct TYPE_4__* next; int * dmi_addr; } ;
struct TYPE_3__ {scalar_t__ mc_count; } ;



__attribute__((used)) static inline u8 *FUNC_0(struct t1_rx_mode *VAR_0)
{
 u8 *VAR_1 = ((void*)0);

 if (VAR_0->idx++ < VAR_0->dev->mc_count) {
  VAR_1 = VAR_0->list->dmi_addr;
  VAR_0->list = VAR_0->list->next;
 }
 return VAR_1;
}
