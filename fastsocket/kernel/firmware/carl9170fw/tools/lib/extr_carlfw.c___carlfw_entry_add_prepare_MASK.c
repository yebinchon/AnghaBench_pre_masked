
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlfw_list_entry {int data; } ;
struct carlfw {unsigned int desc_list_len; int desc_list_entries; } ;
struct carl9170fw_desc_head {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct carlfw_list_entry* FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 struct carlfw_list_entry* FUNC_2 (int) ;
 int FUNC_3 (int ,struct carl9170fw_desc_head const*,unsigned int) ;

__attribute__((used)) static struct carlfw_list_entry *FUNC_4(struct carlfw *VAR_2,
 const struct carl9170fw_desc_head *VAR_3)
{
 struct carlfw_list_entry *VAR_4;
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_3->length);

 if (VAR_5 < sizeof(struct carl9170fw_desc_head))
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_2(sizeof(*VAR_4) + VAR_5);
 if (!VAR_4)
  return FUNC_0(-VAR_1);

 VAR_2->desc_list_entries++;
 VAR_2->desc_list_len += VAR_5;

 FUNC_3(VAR_4->data, VAR_3, VAR_5);
 return VAR_4;
}
