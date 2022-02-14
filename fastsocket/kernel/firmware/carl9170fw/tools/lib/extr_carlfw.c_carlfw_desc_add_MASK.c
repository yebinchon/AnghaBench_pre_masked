
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int list; } ;
struct carlfw_list_entry {TYPE_1__ h; } ;
struct carlfw {int dummy; } ;
struct carl9170fw_desc_head {int dummy; } ;
struct TYPE_5__ {int list; } ;
struct TYPE_6__ {TYPE_2__ h; } ;


 scalar_t__ FUNC_0 (struct carlfw_list_entry*) ;
 int FUNC_1 (struct carlfw_list_entry*) ;
 struct carlfw_list_entry* FUNC_2 (struct carlfw*,struct carl9170fw_desc_head const*) ;
 TYPE_3__* FUNC_3 (struct carl9170fw_desc_head*) ;
 int FUNC_4 (int *,int *,int *) ;

int FUNC_5(struct carlfw *VAR_0,
      const struct carl9170fw_desc_head *VAR_1,
      struct carl9170fw_desc_head *VAR_2,
      struct carl9170fw_desc_head *VAR_3)
{
 struct carlfw_list_entry *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(&VAR_4->h.list, &((FUNC_3(VAR_2))->h.list),
   &((FUNC_3(VAR_3))->h.list));
 return 0;
}
