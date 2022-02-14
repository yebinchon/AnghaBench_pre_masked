
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_t ;
typedef scalar_t__ vm_map_entry_t ;
typedef int vm_map_copy_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(
 vm_map_t VAR_2,
 vm_map_entry_t VAR_3,
 vm_map_copy_t VAR_4)
{
 vm_map_entry_t VAR_5;

 while (FUNC_1(VAR_4) != FUNC_2(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_0(VAR_4, VAR_5);
  FUNC_3(VAR_2, VAR_3, VAR_5,
     VAR_0);
  VAR_3 = VAR_5;
 }
 FUNC_4(VAR_1, VAR_4);
}
