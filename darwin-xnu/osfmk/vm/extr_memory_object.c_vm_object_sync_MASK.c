
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_object_t ;
typedef scalar_t__ vm_object_size_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__,int *,int *,int ,int,int ) ;

boolean_t
FUNC_6(
 vm_object_t VAR_7,
 vm_object_offset_t VAR_8,
 vm_object_size_t VAR_9,
 boolean_t VAR_10,
 boolean_t VAR_11,
 boolean_t VAR_12)
{
 boolean_t VAR_13;
 int VAR_14;

        FUNC_0(VAR_6,
            "vm_o_sync, object 0x%X, offset 0x%X size 0x%x flush %d rtn %d\n",
            VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);






 FUNC_1(VAR_7);
 FUNC_2(VAR_7);

 if (VAR_10) {
         VAR_14 = VAR_0;







  VAR_14 |= VAR_1;
 } else
         VAR_14 = 0;

 if (VAR_12)
         VAR_14 |= VAR_2;

 VAR_13 = FUNC_5(VAR_7, VAR_8, (vm_object_size_t)VAR_9, ((void*)0), ((void*)0),
  (VAR_11) ?
   VAR_3 :
   VAR_4,
  VAR_14,
  VAR_5);


 FUNC_3(VAR_7);
 FUNC_4(VAR_7);
 return VAR_13;
}
