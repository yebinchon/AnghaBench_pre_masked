
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef int uint64_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;

void
FUNC_8(
 vm_map_t VAR_5,
 vm_offset_t VAR_6,
 vm_size_t VAR_7)
{
 kern_return_t VAR_8;

 FUNC_2(VAR_6 >= VAR_4);

 FUNC_0(VAR_1, VAR_2, VAR_7, VAR_6);

 if(VAR_7 == 0) {



  return;
 }

 VAR_8 = FUNC_5(VAR_5,
      FUNC_7(VAR_6,
          FUNC_1(VAR_5)),
      FUNC_6(VAR_6 + VAR_7,
          FUNC_1(VAR_5)),
      VAR_3);
 if (VAR_8 != VAR_0)
  FUNC_3("kmem_free");
}
