
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct carlfw_list_entry {TYPE_1__ h; } ;
struct carlfw {int desc_list; } ;
struct carl9170fw_desc_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct carlfw_list_entry*) ;
 int FUNC_1 (struct carlfw_list_entry*) ;
 struct carlfw_list_entry* FUNC_2 (struct carlfw*,struct carl9170fw_desc_head const*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct carlfw *VAR_0,
 const struct carl9170fw_desc_head *VAR_1)
{
 struct carlfw_list_entry *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 FUNC_3(&VAR_2->h.list, &VAR_0->desc_list);
 return 0;
}
