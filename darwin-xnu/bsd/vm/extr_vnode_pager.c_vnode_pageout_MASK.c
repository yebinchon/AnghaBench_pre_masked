
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_object_offset_t ;
typedef int vfs_context_t ;
typedef int * upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_t ;
typedef int upl_offset_t ;
struct vnode {scalar_t__ v_tag; TYPE_2__* v_mount; } ;
typedef int pager_return_t ;
typedef int off_t ;
typedef int daddr64_t ;
struct TYPE_4__ {TYPE_1__* mnt_vtable; } ;
struct TYPE_3__ {int vfc_vfsflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,int,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct vnode*,int *,int,int ,int,int,int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_4 (struct vnode*,int ,int ) ;
 int FUNC_5 (struct vnode*,int ) ;
 scalar_t__ FUNC_6 (struct vnode*,scalar_t__,int,int **,int **,int,int ) ;
 scalar_t__ FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int ) ;
 int FUNC_9 (int *,int,int,int ) ;
 int FUNC_10 (int *,int,int,int ) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 () ;

pager_return_t
FUNC_15(struct vnode *VAR_20,
 upl_t VAR_21,
 upl_offset_t VAR_22,
 vm_object_offset_t VAR_23,
 upl_size_t VAR_24,
 int VAR_25,
 int *VAR_26)
{
 int VAR_27 = VAR_7;
 int VAR_28 = 0;
 int VAR_29 = 0;
 daddr64_t VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 upl_offset_t VAR_34;
 upl_page_info_t *VAR_35;
 vfs_context_t VAR_36 = FUNC_14();

 VAR_31 = (int)VAR_24;

 if (VAR_31 <= 0) {
         VAR_27 = VAR_6;
  VAR_29 = VAR_3;
  goto out;
 }

 if (FUNC_2(VAR_20) == 0) {
  VAR_27 = VAR_6;
  VAR_29 = VAR_3;

  if (VAR_21 && !(VAR_25 & VAR_12))
          FUNC_9(VAR_21, VAR_22, VAR_24, VAR_9);
  goto out;
 }
 if ( !(VAR_25 & VAR_16)) {





  FUNC_0(VAR_4,
   (FUNC_1(VAR_2, 1)) | VAR_1,
   VAR_24, 1, 0, 0, 0);

  if ( (VAR_29 = FUNC_3(VAR_20, VAR_21, VAR_22, (off_t)VAR_23,
            (size_t)VAR_24, VAR_25, VAR_36)) )
   VAR_27 = VAR_6;

  FUNC_0(VAR_4,
   (FUNC_1(VAR_2, 1)) | VAR_0,
   VAR_24, 1, 0, 0, 0);

  goto out;
 }
 if (VAR_21 == ((void*)0)) {
  int VAR_37;

  if (VAR_20->v_mount->mnt_vtable->vfc_vfsflags & VAR_17) {







   FUNC_0(VAR_4,
    (FUNC_1(VAR_2, 1)) | VAR_1,
    VAR_24, (int)VAR_23, 0, 0, 0);

   if ( (VAR_29 = FUNC_3(VAR_20, ((void*)0), VAR_22, (off_t)VAR_23,
             VAR_24, VAR_25, VAR_36)) ) {
    VAR_27 = VAR_6;
   }
   FUNC_0(VAR_4,
    (FUNC_1(VAR_2, 1)) | VAR_0,
    VAR_24, 0, 0, 0, 0);

   goto out;
  }
  if (VAR_25 & VAR_11)
   VAR_37 = VAR_14 | VAR_13;
  else
   VAR_37 = VAR_15 | VAR_13;

         if (FUNC_6(VAR_20, VAR_23, VAR_24, &VAR_21, &VAR_35, VAR_37, VAR_18) != VAR_5) {
   VAR_27 = VAR_6;
   VAR_29 = VAR_3;
   goto out;
  }
  VAR_22 = 0;
 } else
  VAR_35 = FUNC_11(VAR_21);







 VAR_33 = VAR_22 / VAR_8;

 for (VAR_32 = (VAR_22 + VAR_31) / VAR_8; VAR_32 > VAR_33;) {
         if (FUNC_13(VAR_35, --VAR_32))
          break;
  if (VAR_32 == VAR_33) {




          if ( !(VAR_25 & VAR_12))
           FUNC_9(VAR_21, VAR_22, VAR_31, VAR_9);

   goto out;
  }
 }
 VAR_31 = ((VAR_32 + 1) - VAR_33) * VAR_8;
 if (FUNC_7(VAR_20) == 0) {






  for (VAR_34 = VAR_22; VAR_31; VAR_31 -= VAR_8, VAR_34 += VAR_8) {






   {
           VAR_30 = FUNC_8(VAR_20, (off_t)VAR_23);
           VAR_28 = FUNC_4(VAR_20, VAR_30, 0);
   }
   if (VAR_28) {
           if ( !(VAR_25 & VAR_12))
            FUNC_9(VAR_21, VAR_34, VAR_8, VAR_9);
    if (VAR_29 == 0)
            VAR_29 = VAR_28;
    VAR_27 = VAR_6;

   } else if ( !(VAR_25 & VAR_12)) {
           FUNC_10(VAR_21, VAR_34, VAR_8, VAR_10);
   }
   VAR_23 += VAR_8;
  }
  goto out;
 }

 VAR_34 = VAR_22;
 VAR_32 = VAR_33;

 while (VAR_31) {
  int VAR_38;
  int VAR_39;

  if ( !FUNC_13(VAR_35, VAR_32)) {





          VAR_23 += VAR_8;
   VAR_34 += VAR_8;
   VAR_31 -= VAR_8;
   VAR_32++;

   continue;
  }
  if ( !FUNC_12(VAR_35, VAR_32)) {
   {
           VAR_30 = FUNC_8(VAR_20, (off_t)VAR_23);
           VAR_28 = FUNC_4(VAR_20, VAR_30, 0);
   }
   if (VAR_28) {
           if ( !(VAR_25 & VAR_12))
            FUNC_9(VAR_21, VAR_34, VAR_8, VAR_9);
    if (VAR_29 == 0)
            VAR_29 = VAR_28;
    VAR_27 = VAR_6;

   } else if ( !(VAR_25 & VAR_12)) {
           FUNC_10(VAR_21, VAR_34, VAR_8, VAR_10);
   }
          VAR_23 += VAR_8;
   VAR_34 += VAR_8;
   VAR_31 -= VAR_8;
   VAR_32++;

   continue;
  }
  VAR_39 = 1;
  VAR_38 = VAR_31 - VAR_8;

  while (VAR_38) {
   if ( !FUNC_12(VAR_35, VAR_32 + VAR_39))
    break;
   VAR_39++;
   VAR_38 -= VAR_8;
  }
  VAR_38 = VAR_39 * VAR_8;

  FUNC_0(VAR_4,
   (FUNC_1(VAR_2, 1)) | VAR_1,
   VAR_38, (int)VAR_23, 0, 0, 0);

  if ( (VAR_28 = FUNC_3(VAR_20, VAR_21, VAR_34, (off_t)VAR_23,
        VAR_38, VAR_25, VAR_36)) ) {
          if (VAR_29 == 0)
                  VAR_29 = VAR_28;
   VAR_27 = VAR_6;
  }
  FUNC_0(VAR_4,
   (FUNC_1(VAR_2, 1)) | VAR_0,
   VAR_38, 0, 0, 0, 0);

         VAR_23 += VAR_38;
  VAR_34 += VAR_38;
  VAR_31 -= VAR_38;
  VAR_32 += VAR_39;
 }
out:
 if (VAR_26)
  *VAR_26 = VAR_29;

 return (VAR_27);
}
