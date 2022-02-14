
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ next; } ;
struct TYPE_5__ {TYPE_1__ list; } ;
struct carlfw_list_entry {TYPE_2__ h; } ;
struct carlfw {int desc_list; } ;
struct carl9170fw_desc_head {int dummy; } ;
struct TYPE_6__ {int list; } ;


 struct carlfw_list_entry* FUNC_0 (struct carl9170fw_desc_head*) ;
 void* FUNC_1 (struct carlfw_list_entry*) ;
 TYPE_3__ VAR_0 ;
 scalar_t__ FUNC_2 (struct carlfw_list_entry*,int *,int ) ;

void *FUNC_3(struct carlfw *VAR_1,
         struct carl9170fw_desc_head *VAR_2)
{
 struct carlfw_list_entry *VAR_3;

 if (!VAR_2)
  VAR_3 = (struct carlfw_list_entry *) &VAR_1->desc_list;
 else
  VAR_3 = FUNC_0(VAR_2);

 if (FUNC_2(VAR_3, &VAR_1->desc_list, VAR_0.list))
  return ((void*)0);

 VAR_3 = (struct carlfw_list_entry *) VAR_3->h.list.next;

 return FUNC_1(VAR_3);
}
