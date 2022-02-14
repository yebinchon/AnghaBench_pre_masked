
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int ppnum_t ;
struct TYPE_4__ {int vmp_fictitious; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;

vm_page_t
FUNC_2(
 ppnum_t VAR_5)
{
 vm_page_t VAR_6;

 if ((VAR_6 = (vm_page_t)FUNC_1(VAR_4))) {

  FUNC_0(VAR_6, VAR_5, VAR_0);
  VAR_6->vmp_fictitious = VAR_1;

  VAR_2++;
 } else
  VAR_3++;

 return VAR_6;
}
