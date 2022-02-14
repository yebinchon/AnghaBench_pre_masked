
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_6__ {scalar_t__ vmp_fictitious; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(
 vm_page_t VAR_1)
{
 FUNC_0(VAR_1);

 if (VAR_1->vmp_fictitious) {
  FUNC_2(VAR_1);
 } else {
  FUNC_1(VAR_1,
    VAR_0);
 }
}
