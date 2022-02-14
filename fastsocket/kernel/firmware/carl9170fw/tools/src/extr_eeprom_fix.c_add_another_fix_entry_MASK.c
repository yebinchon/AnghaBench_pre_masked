
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carlfw {int dummy; } ;
struct carl9170fw_fix_entry {int dummy; } ;
struct TYPE_2__ {int length; } ;
struct carl9170fw_fix_desc {int * data; TYPE_1__ head; } ;


 scalar_t__ FUNC_0 (struct carl9170fw_fix_desc*) ;
 scalar_t__ FUNC_1 (struct carl9170fw_fix_desc*) ;
 struct carl9170fw_fix_desc* FUNC_2 (struct carlfw*,TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct carl9170fw_fix_entry*,int) ;

__attribute__((used)) static int
FUNC_5(struct carlfw *VAR_0, struct carl9170fw_fix_desc *VAR_1,
   struct carl9170fw_fix_entry *VAR_2)
{
 unsigned int VAR_3;

 VAR_1 = FUNC_2(VAR_0, &VAR_1->head, sizeof(*VAR_2));
 if (FUNC_0(VAR_1))
  return (int) FUNC_1(VAR_1);

 VAR_3 = (FUNC_3(VAR_1->head.length) - sizeof(*VAR_1)) /
  sizeof(*VAR_2) - 1;

 FUNC_4(&VAR_1->data[VAR_3], VAR_2, sizeof(*VAR_2));
 return 0;
}
