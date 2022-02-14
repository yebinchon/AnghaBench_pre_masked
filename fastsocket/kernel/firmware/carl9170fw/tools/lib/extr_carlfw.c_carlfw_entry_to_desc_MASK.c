
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carl9170fw_desc_head {int dummy; } ;
struct carlfw_list_entry {struct carl9170fw_desc_head head; } ;



__attribute__((used)) static inline struct carl9170fw_desc_head *FUNC_0(struct carlfw_list_entry *VAR_0)
{
 return &VAR_0->head;
}
