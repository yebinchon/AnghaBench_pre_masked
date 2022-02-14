
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* upl_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int ext_ref_count; } ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(
 upl_t VAR_0,
 boolean_t VAR_1)
{
 FUNC_1(VAR_0);
 if (VAR_1) {
  VAR_0->ext_ref_count++;
 } else {
  if (!VAR_0->ext_ref_count) {
   FUNC_0("upl_set_referenced not %p\n", VAR_0);
  }
  VAR_0->ext_ref_count--;
 }
 FUNC_2(VAR_0);
}
