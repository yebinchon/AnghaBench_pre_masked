
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct vnode {TYPE_1__* v_mount; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {int offset; size_t length; int extentsCount; struct TYPE_6__* extents; } ;
typedef TYPE_2__ dk_unmap_t ;
typedef TYPE_2__ dk_extent_t ;
typedef scalar_t__ daddr64_t ;
typedef int caddr_t ;
struct TYPE_5__ {struct vnode* mnt_devvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnode*,scalar_t__,size_t,scalar_t__*,size_t*,int *,int,int *) ;
 int FUNC_1 (struct vnode*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 () ;

u_int32_t FUNC_4 (
  struct vnode *VAR_4,
  off_t VAR_5,
  size_t VAR_6)
{
 daddr64_t VAR_7;
 size_t VAR_8;
 size_t VAR_9 = 0;
 off_t VAR_10 = VAR_5;
 size_t VAR_11 = VAR_6;
 int VAR_12 = 0;
 u_int32_t VAR_13 = 0;
 struct vnode *VAR_14;
 dk_extent_t VAR_15;
 dk_unmap_t VAR_16;



 VAR_14 = VAR_4->v_mount->mnt_devvp;


 VAR_12 = FUNC_1(VAR_14, VAR_0, (caddr_t)&VAR_13, 0, FUNC_3());
 if (VAR_12) {
  goto trim_exit;
 }






 while (VAR_9 < VAR_6) {






  VAR_12 = FUNC_0 (VAR_4, VAR_10, VAR_11,
    &VAR_7, &VAR_8, ((void*)0), VAR_3 | VAR_2, ((void*)0));

  if (VAR_12) {
   goto trim_exit;
  }




  FUNC_2 (&VAR_15, 0, sizeof(dk_extent_t));
  FUNC_2 (&VAR_16, 0, sizeof(dk_unmap_t));
  VAR_15.offset = (uint64_t) VAR_7 * (u_int64_t) VAR_13;
  VAR_15.length = VAR_8;
  VAR_16.extents = &VAR_15;
  VAR_16.extentsCount = 1;
  VAR_12 = FUNC_1(VAR_14, VAR_1, (caddr_t)&VAR_16, 0, FUNC_3());

  if (VAR_12) {
   goto trim_exit;
  }
  VAR_11 = VAR_11 - VAR_8;
  VAR_9 = VAR_9 + VAR_8;
  VAR_10 = VAR_10 + VAR_8;
 }
trim_exit:

 return VAR_12;

}
