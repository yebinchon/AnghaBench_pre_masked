
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_pager_t ;
typedef int vm_size_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int * upl_t ;
typedef int upl_size_t ;
typedef int upl_offset_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_4__ {int mo_control; } ;
struct TYPE_5__ {TYPE_1__ vn_pgr_hdr; int vnode_handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int,int **,int *,unsigned int*,int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,scalar_t__,int,int,int*) ;

kern_return_t
FUNC_5(
 vnode_pager_t VAR_8,
 vm_object_offset_t VAR_9,
 vm_object_offset_t VAR_10,
 uint32_t VAR_11,
 vm_size_t VAR_12)
{
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;

 FUNC_0(! (VAR_12 & VAR_2));

 if (VAR_11)
  VAR_15 |= VAR_4;

 FUNC_0((upl_size_t) VAR_12 == VAR_12);
 VAR_14 = FUNC_4(VAR_8->vnode_handle,
       (upl_t) ((void*)0),
       (upl_offset_t) (VAR_10 - VAR_9),
       VAR_9,
       (upl_size_t) VAR_12,
       VAR_15,
       &VAR_13);






 if (VAR_14 == 1) {
  int VAR_16;
  upl_t VAR_17 = ((void*)0);
  unsigned int VAR_18 = 0;
  kern_return_t VAR_19;

  VAR_16 = (VAR_5 |
       VAR_3 |
       VAR_6);
  VAR_18 = 0;
  FUNC_0((upl_size_t) VAR_12 == VAR_12);
  VAR_19 = FUNC_1(VAR_8->vn_pgr_hdr.mo_control,
            VAR_9, (upl_size_t) VAR_12,
            &VAR_17, ((void*)0), &VAR_18, VAR_16, VAR_7);
  if (VAR_19 == VAR_1) {
   FUNC_2(VAR_17, 0);
   FUNC_3(VAR_17);
  } else {







  }

  return VAR_0;
 }

 return VAR_1;

}
