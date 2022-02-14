
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prev; } ;
struct TYPE_4__ {TYPE_1__ list; } ;
struct carlfw_list_entry {TYPE_2__ h; } ;
struct carlfw {int dummy; } ;
struct carl9170fw_desc_head {int dummy; } ;


 int FUNC_0 (struct carlfw*,struct carl9170fw_desc_head const*,struct carl9170fw_desc_head*,struct carl9170fw_desc_head*) ;
 struct carlfw_list_entry* FUNC_1 (struct carl9170fw_desc_head*) ;
 struct carl9170fw_desc_head* FUNC_2 (struct carlfw_list_entry*) ;

int FUNC_3(struct carlfw *VAR_0,
      const struct carl9170fw_desc_head *VAR_1,
      struct carl9170fw_desc_head *VAR_2)
{
 struct carl9170fw_desc_head *VAR_3;
 struct carlfw_list_entry *VAR_4;

 VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_2((struct carlfw_list_entry *) VAR_4->h.list.prev);

 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);
}
