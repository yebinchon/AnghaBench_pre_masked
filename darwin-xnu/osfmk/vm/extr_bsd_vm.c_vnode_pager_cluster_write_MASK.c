
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vnode_pager_t ;
typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef scalar_t__ upl_size_t ;
typedef int upl_offset_t ;
struct TYPE_3__ {int vnode_handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,int ,scalar_t__,scalar_t__,int,int*) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(
 vnode_pager_t VAR_6,
 vm_object_offset_t VAR_7,
 vm_size_t VAR_8,
 vm_object_offset_t * VAR_9,
 int * VAR_10,
 int VAR_11)
{
 vm_size_t VAR_12;
 int VAR_13;

 if (VAR_11 & VAR_4) {

         VAR_11 |= VAR_5;

  if ( (VAR_11 & VAR_2) && VAR_10)
          VAR_11 |= VAR_3;

         while (VAR_8) {
   VAR_12 = (VAR_8 < VAR_0) ? VAR_8 : VAR_0;

   FUNC_0((upl_size_t) VAR_12 == VAR_12);
   FUNC_2(VAR_6->vnode_handle,
          ((void*)0), (upl_offset_t)0, VAR_7, (upl_size_t)VAR_12, VAR_11, &VAR_13);

   if ( (VAR_11 & VAR_3) ) {
           if ( (*VAR_10 = VAR_13) )
            break;
   }
   VAR_8 -= VAR_12;
   VAR_7 += VAR_12;
  }
  if (VAR_9)
   *VAR_9 = VAR_7;

 } else {
         vm_object_offset_t VAR_14;
         vm_object_offset_t VAR_15;




  VAR_14 = FUNC_3(VAR_6->vnode_handle);

  if (VAR_14 > (VAR_7 + VAR_1)) {






          VAR_12 = VAR_0;
          VAR_15 = VAR_7 & ~((signed)(VAR_12 - 1));

   if ((VAR_15 + VAR_12) > VAR_14)
           VAR_12 = FUNC_1(((vm_size_t)(VAR_14 - VAR_15)));
  } else {







          VAR_15 = VAR_7;
   VAR_12 = VAR_1;
  }
  FUNC_0((upl_size_t) VAR_12 == VAR_12);
         FUNC_2(VAR_6->vnode_handle,
         ((void*)0), (upl_offset_t)(VAR_7 - VAR_15), VAR_15, (upl_size_t) VAR_12,
         (VAR_11 & VAR_2) | VAR_5, ((void*)0));
 }
}
