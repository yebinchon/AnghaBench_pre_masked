
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
struct vnode {int dummy; } ;
struct cs_blob {int dummy; } ;
typedef int memory_object_t ;
typedef scalar_t__ memory_object_offset_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cs_blob*,int ,scalar_t__,void const*,scalar_t__*,unsigned int*) ;
 struct cs_blob* FUNC_1 (struct vnode*) ;

boolean_t
FUNC_2(
 struct vnode *VAR_2,
 memory_object_t VAR_3,
 memory_object_offset_t VAR_4,
 const void *VAR_5,
 vm_size_t VAR_6,
 unsigned *VAR_7)
{
 vm_size_t VAR_8;
 boolean_t VAR_9 = VAR_1;

 struct cs_blob *VAR_10 = FUNC_1(VAR_2);

 *VAR_7 = 0;

 for (VAR_8 = 0;
   VAR_8 < VAR_6;
                                                         ) {
  unsigned VAR_11 = 0;
  boolean_t VAR_12;
  vm_size_t VAR_13 = 0;

  VAR_12 = FUNC_0(VAR_10,
             VAR_3,
             VAR_4 + VAR_8,
             (const void *)((const char *)VAR_5 + VAR_8),
             &VAR_13,
             &VAR_11);

  *VAR_7 |= VAR_11;

  if (VAR_13 == 0) {

   VAR_9 = VAR_0;
   break;
  } else if (VAR_12 == VAR_0) {
   VAR_9 = VAR_0;

  }

  VAR_8 += VAR_13;
 }

 return VAR_9;
}
