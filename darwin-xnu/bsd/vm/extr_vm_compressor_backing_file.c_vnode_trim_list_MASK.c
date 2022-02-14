
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int uint64_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct vnode {int dummy; } ;
struct trim_list {size_t tl_offset; size_t tl_length; struct trim_list* tl_next; } ;
typedef size_t off_t ;
struct TYPE_13__ {int extentsCount; TYPE_4__* extents; int options; } ;
typedef TYPE_3__ dk_unmap_t ;
struct TYPE_14__ {int offset; size_t length; } ;
typedef TYPE_4__ dk_extent_t ;
typedef int daddr64_t ;
typedef int caddr_t ;
typedef scalar_t__ boolean_t ;
typedef TYPE_3__ _dk_cs_unmap_t ;
struct TYPE_12__ {TYPE_1__* v_mount; } ;
struct TYPE_11__ {int mnt_ioflags; int mnt_devblocksize; struct vnode* mnt_devvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,size_t,size_t,int*,size_t*,int *,int,int *) ;
 int FUNC_1 (struct vnode*,int ,int ,int ,int ) ;
 int VAR_9 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 int FUNC_5 () ;

u_int32_t FUNC_6 (vnode_t VAR_10, struct trim_list *VAR_11, boolean_t VAR_12)
{
 int VAR_13 = 0;
 int VAR_14 = 0;
 u_int32_t VAR_15 = 0;
 struct vnode *VAR_16;
 dk_extent_t *VAR_17;
 dk_unmap_t VAR_18;
 _dk_cs_unmap_t VAR_19;

 if ( !(VAR_10->v_mount->mnt_ioflags & VAR_4))
  return (VAR_1);

 if (VAR_11 == ((void*)0))
  return (0);




 VAR_16 = VAR_10->v_mount->mnt_devvp;
 VAR_15 = VAR_10->v_mount->mnt_devblocksize;

 VAR_17 = FUNC_2(sizeof(dk_extent_t) * VAR_2);

 if (VAR_10->v_mount->mnt_ioflags & VAR_3) {
  FUNC_4 (&VAR_19, 0, sizeof(_dk_cs_unmap_t));
  VAR_19.extents = VAR_17;

  if (VAR_12 == VAR_6)
   VAR_19.options = VAR_5;
 } else {
  FUNC_4 (&VAR_18, 0, sizeof(dk_unmap_t));
  VAR_18.extents = VAR_17;
 }

 while (VAR_11) {
  daddr64_t VAR_20;
  size_t VAR_21;
  size_t VAR_22;
  size_t VAR_23;
  off_t VAR_24;

  VAR_24 = VAR_11->tl_offset;
  VAR_23 = VAR_11->tl_length;
  VAR_22 = 0;






  while (VAR_22 < VAR_11->tl_length) {






   VAR_13 = FUNC_0 (VAR_10, VAR_24, VAR_23,
            &VAR_20, &VAR_21, ((void*)0), VAR_8 | VAR_7, ((void*)0));

   if (VAR_13) {
    goto trim_exit;
   }
   if (VAR_20 != -1) {
           VAR_17[VAR_14].offset = (uint64_t) VAR_20 * (u_int64_t) VAR_15;
    VAR_17[VAR_14].length = VAR_21;

    VAR_14++;
   }
   if (VAR_14 == VAR_2) {

    if (VAR_10->v_mount->mnt_ioflags & VAR_3) {
     VAR_19.extentsCount = VAR_14;
     VAR_13 = FUNC_1(VAR_16, VAR_9, (caddr_t)&VAR_19, 0, FUNC_5());
    } else {
     VAR_18.extentsCount = VAR_14;
     VAR_13 = FUNC_1(VAR_16, VAR_0, (caddr_t)&VAR_18, 0, FUNC_5());
    }
    if (VAR_13) {
     goto trim_exit;
    }
    VAR_14 = 0;
   }
   VAR_22 += VAR_21;
   VAR_24 += VAR_21;
   VAR_23 -= VAR_21;
  }
  VAR_11 = VAR_11->tl_next;
 }
 if (VAR_14) {
  if (VAR_10->v_mount->mnt_ioflags & VAR_3) {
   VAR_19.extentsCount = VAR_14;
   VAR_13 = FUNC_1(VAR_16, VAR_9, (caddr_t)&VAR_19, 0, FUNC_5());
  } else {
   VAR_18.extentsCount = VAR_14;
   VAR_13 = FUNC_1(VAR_16, VAR_0, (caddr_t)&VAR_18, 0, FUNC_5());
  }
 }
trim_exit:
 FUNC_3(VAR_17, sizeof(dk_extent_t) * VAR_2);

 return VAR_13;
}
