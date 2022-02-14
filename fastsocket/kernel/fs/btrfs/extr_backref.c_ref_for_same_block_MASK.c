
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ objectid; scalar_t__ offset; } ;
struct __prelim_ref {scalar_t__ level; scalar_t__ root_id; scalar_t__ parent; TYPE_1__ key_for_search; } ;



__attribute__((used)) static inline int FUNC_0(struct __prelim_ref *VAR_0,
         struct __prelim_ref *VAR_1)
{
 if (VAR_0->level != VAR_1->level)
  return 0;
 if (VAR_0->root_id != VAR_1->root_id)
  return 0;
 if (VAR_0->key_for_search.type != VAR_1->key_for_search.type)
  return 0;
 if (VAR_0->key_for_search.objectid != VAR_1->key_for_search.objectid)
  return 0;
 if (VAR_0->key_for_search.offset != VAR_1->key_for_search.offset)
  return 0;
 if (VAR_0->parent != VAR_1->parent)
  return 0;

 return 1;
}
