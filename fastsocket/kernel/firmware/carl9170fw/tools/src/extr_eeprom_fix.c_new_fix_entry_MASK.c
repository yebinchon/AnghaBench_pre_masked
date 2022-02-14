
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct carlfw {int dummy; } ;
struct carl9170fw_fix_entry {int dummy; } ;
struct carl9170fw_fix_desc {int head; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int ,int ,int ) ;
 int FUNC_1 (struct carlfw*,int *) ;
 int FUNC_2 (unsigned int) ;
 struct carl9170fw_fix_desc* FUNC_3 (unsigned int) ;
 int FUNC_4 (int *,struct carl9170fw_fix_entry*,int) ;

__attribute__((used)) static int
FUNC_5(struct carlfw *VAR_4, struct carl9170fw_fix_entry *VAR_5)
{
 struct carl9170fw_fix_desc *VAR_6;
 unsigned int VAR_7;

 VAR_7 = sizeof(*VAR_6) + sizeof(*VAR_5);
 VAR_6 = FUNC_3(VAR_7);
 if (!VAR_6)
  return -VAR_2;

 FUNC_0(&VAR_6->head, (uint8_t *) VAR_3,
         FUNC_2(VAR_7),
         VAR_1,
         VAR_0);

 FUNC_4(&VAR_6->data[0], VAR_5, sizeof(*VAR_5));

 return FUNC_1(VAR_4, &VAR_6->head);
}
