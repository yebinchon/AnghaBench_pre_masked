
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct carl9170fw_fix_entry {scalar_t__ address; } ;
struct TYPE_2__ {int length; } ;
struct carl9170fw_fix_desc {struct carl9170fw_fix_entry* data; TYPE_1__ head; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct carl9170fw_fix_entry *
FUNC_1(struct carl9170fw_fix_desc *VAR_0, __le32 VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_3 = (FUNC_0(VAR_0->head.length) - sizeof(*VAR_0)) /
     sizeof(struct carl9170fw_fix_entry);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  if (VAR_1 == VAR_0->data[VAR_2].address)
   return &VAR_0->data[VAR_2];
 }

 return ((void*)0);
}
