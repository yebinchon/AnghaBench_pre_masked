
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int upl_page_info_array_t ;
typedef int boolean_t ;
struct TYPE_4__ {unsigned int wimg_bits; } ;


 int FUNC_0 (TYPE_1__*,int ,unsigned int,unsigned int,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;

void
FUNC_2(
  vm_object_t VAR_2,
  upl_page_info_array_t VAR_3,
  unsigned int VAR_4,
  boolean_t VAR_5)
{
 unsigned int VAR_6 = 0;

 VAR_6 = VAR_2->wimg_bits & VAR_0;
 FUNC_1(VAR_3);
 if (VAR_6 != VAR_1) {
  FUNC_0(VAR_2, VAR_3, VAR_6, VAR_4, VAR_5);
 }
}
