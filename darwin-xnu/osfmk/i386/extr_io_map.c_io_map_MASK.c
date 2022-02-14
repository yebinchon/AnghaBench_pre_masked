
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef scalar_t__ vm_map_offset_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int *,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,unsigned int) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;

vm_offset_t
FUNC_5(vm_map_offset_t VAR_6, vm_size_t VAR_7, unsigned int VAR_8)
{
 vm_offset_t VAR_9;

 if (VAR_4 == VAR_1) {



     VAR_9 = VAR_5;
     VAR_5 += FUNC_4(VAR_7);




     (void) FUNC_3(VAR_9, VAR_6, VAR_6 + FUNC_4(VAR_7),
          VAR_2|VAR_3,
          VAR_8);
 }
 else {
     (void) FUNC_1(VAR_4, &VAR_9, FUNC_4(VAR_7), VAR_0);
     (void) FUNC_2(VAR_9, VAR_6, VAR_6 + FUNC_4(VAR_7),
       VAR_2|VAR_3,
       VAR_8);
 }
 return (VAR_9);
}
