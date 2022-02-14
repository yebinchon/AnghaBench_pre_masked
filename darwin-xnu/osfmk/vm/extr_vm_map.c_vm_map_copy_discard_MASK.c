
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* vm_map_entry_t ;
typedef TYPE_2__* vm_map_copy_t ;
struct TYPE_18__ {int type; scalar_t__ size; scalar_t__ offset; int cpy_object; } ;
struct TYPE_17__ {int is_sub_map; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;


 TYPE_2__* VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (char*,long long,long long) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_2__*) ;

void
FUNC_11(
 vm_map_copy_t VAR_4)
{
 if (VAR_4 == VAR_0)
  return;

 switch (VAR_4->type) {
 case 130:
  while (FUNC_6(VAR_4) !=
         FUNC_7(VAR_4)) {
   vm_map_entry_t VAR_5 = FUNC_6(VAR_4);

   FUNC_5(VAR_4, VAR_5);
   if (VAR_5->is_sub_map) {
    FUNC_8(FUNC_1(VAR_5));
   } else {
    FUNC_9(FUNC_0(VAR_5));
   }
   FUNC_4(VAR_4, VAR_5);
  }
  break;
        case 128:
  FUNC_9(VAR_4->cpy_object);
  break;
 case 129:






  if (VAR_4->size > VAR_2 || VAR_4->offset)
   FUNC_3("Invalid vm_map_copy_t sz:%lld, ofst:%lld",
         (long long)VAR_4->size, (long long)VAR_4->offset);
  FUNC_2(VAR_4, VAR_4->size + VAR_1);
  return;
 }
 FUNC_10(VAR_3, VAR_4);
}
