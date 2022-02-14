
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int delimiter_depth; int delimiter_branch; unsigned int usage_minimum; } ;
struct TYPE_3__ {int usage_page; } ;
struct hid_parser {TYPE_2__ local; TYPE_1__ global; } ;
struct hid_item {scalar_t__ size; int tag; } ;
typedef unsigned int __u32 ;






 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct hid_parser*,unsigned int) ;
 unsigned int FUNC_2 (struct hid_item*) ;

__attribute__((used)) static int FUNC_3(struct hid_parser *VAR_0, struct hid_item *VAR_1)
{
 __u32 VAR_2;
 unsigned VAR_3;

 if (VAR_1->size == 0) {
  FUNC_0("item data expected for local item\n");
  return -1;
 }

 VAR_2 = FUNC_2(VAR_1);

 switch (VAR_1->tag) {
 case 131:

  if (VAR_2) {






   if (VAR_0->local.delimiter_depth != 0) {
    FUNC_0("nested delimiters\n");
    return -1;
   }
   VAR_0->local.delimiter_depth++;
   VAR_0->local.delimiter_branch++;
  } else {
   if (VAR_0->local.delimiter_depth < 1) {
    FUNC_0("bogus close delimiter\n");
    return -1;
   }
   VAR_0->local.delimiter_depth--;
  }
  return 1;

 case 130:

  if (VAR_0->local.delimiter_branch > 1) {
   FUNC_0("alternative usage ignored\n");
   return 0;
  }

  if (VAR_1->size <= 2)
   VAR_2 = (VAR_0->global.usage_page << 16) + VAR_2;

  return FUNC_1(VAR_0, VAR_2);

 case 128:

  if (VAR_0->local.delimiter_branch > 1) {
   FUNC_0("alternative usage ignored\n");
   return 0;
  }

  if (VAR_1->size <= 2)
   VAR_2 = (VAR_0->global.usage_page << 16) + VAR_2;

  VAR_0->local.usage_minimum = VAR_2;
  return 0;

 case 129:

  if (VAR_0->local.delimiter_branch > 1) {
   FUNC_0("alternative usage ignored\n");
   return 0;
  }

  if (VAR_1->size <= 2)
   VAR_2 = (VAR_0->global.usage_page << 16) + VAR_2;

  for (VAR_3 = VAR_0->local.usage_minimum; VAR_3 <= VAR_2; VAR_3++)
   if (FUNC_1(VAR_0, VAR_3)) {
    FUNC_0("hid_add_usage failed\n");
    return -1;
   }
  return 0;

 default:

  FUNC_0("unknown local item tag 0x%x\n", VAR_1->tag);
  return 0;
 }
 return 0;
}
