
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {char* va_name; scalar_t__ va_parentid; } ;
typedef int ino64_t ;
struct TYPE_20__ {int v_flag; char* v_name; int v_id; TYPE_14__* v_mount; struct TYPE_20__* v_parent; } ;
struct TYPE_19__ {TYPE_2__* fd_rdir; } ;
struct TYPE_18__ {int mnt_flag; int mnt_kern_flag; TYPE_2__* mnt_vnodecovered; } ;
struct TYPE_17__ {TYPE_1__* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_8 ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__* VAR_14 ;
 int FUNC_4 (struct vnode_attr*) ;
 scalar_t__ FUNC_5 (struct vnode_attr*,int ) ;
 int FUNC_6 (struct vnode_attr*,int ) ;
 int FUNC_7 (TYPE_14__*,int ,TYPE_2__**,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_8 (char*,char*,int) ;
 TYPE_2__* VAR_20 ;
 int FUNC_9 (char const*) ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_10__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int *,int ,int ) ;
 int FUNC_12 (TYPE_2__*,struct vnode_attr*,int ) ;
 scalar_t__ FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_2__*,char const*,int,int ,int ) ;

int
FUNC_17(vnode_t VAR_23, vnode_t VAR_24, char *VAR_25, int VAR_26, int *VAR_27, int VAR_28, vfs_context_t VAR_29)
{
        vnode_t VAR_30, VAR_31;
 vnode_t VAR_32;
        vnode_t VAR_33;
 char *VAR_34;
 const char *VAR_35;
 int VAR_36;
 int VAR_37 = 0;
 int VAR_38;

 if (VAR_23 == VAR_14)
  return (VAR_5);

 if (VAR_26 <= 1)
  return (VAR_7);




 if (FUNC_10(VAR_29)->p_fd)
  VAR_33 = FUNC_10(VAR_29)->p_fd->fd_rdir;
 else
  VAR_33 = ((void*)0);

 VAR_32 = VAR_14;
again:
 VAR_30 = VAR_23;

 VAR_34 = &VAR_25[VAR_26-1];
 *VAR_34 = '\0';
 FUNC_2();




 while (VAR_30 && VAR_30->v_flag & VAR_18) {
  if (VAR_30->v_mount == ((void*)0)) {
   VAR_37 = VAR_5;
   goto out_unlock;
  }
         if ((VAR_30->v_mount->mnt_flag & VAR_11) || (VAR_30 == VAR_33)) {




          *--VAR_34 = '/';

   goto out_unlock;
  } else {





   if (VAR_28 & VAR_3) {
    *--VAR_34 = '/';
    goto out_unlock;
   } else {
    VAR_30 = VAR_30->v_mount->mnt_vnodecovered;
   }
  }
 }

 while ((VAR_30 != VAR_14) && (VAR_30->v_parent != VAR_30)) {
  int VAR_39;






  VAR_38 = (VAR_30->v_flag & VAR_15) &&
                (VAR_30->v_mount->mnt_kern_flag & VAR_10) &&
                !(VAR_28 & VAR_2);

  if (!VAR_38) {
   VAR_35 = VAR_30->v_name;

   if (VAR_35 == ((void*)0) || *VAR_35 == '\0') {
    if (VAR_30->v_parent != ((void*)0))
     VAR_37 = VAR_5;
    else
     VAR_37 = VAR_6;
    goto out_unlock;
   }
   VAR_36 = FUNC_9(VAR_35);



   if ((VAR_34 - VAR_25) < (VAR_36 + 1)) {
    VAR_37 = VAR_7;
    goto out_unlock;
   }



   VAR_35 += VAR_36;

   for (; VAR_36 > 0; VAR_36--)
          *--VAR_34 = *--VAR_35;



   *--VAR_34 = '/';
  }




  if (((VAR_30->v_parent != VAR_14) && !VAR_38) ||
    (VAR_28 & VAR_2)) {
   if ((VAR_30->v_parent == VAR_14) && (VAR_20 != VAR_30)) {





    VAR_37 = VAR_6;


   }
   VAR_30 = VAR_30->v_parent;







   if (VAR_30 && !FUNC_14(VAR_30) && VAR_30->v_parent) {
    VAR_30 = VAR_30->v_parent;
   }
  } else {



   struct vnode_attr VAR_40;
   vnode_t VAR_41;




   if (!(VAR_30->v_mount->mnt_kern_flag & VAR_10)) {
    VAR_37 = VAR_6;
    goto out_unlock;
   }
   VAR_39 = VAR_30->v_id;

   FUNC_3();

   if (VAR_30 != VAR_23 && VAR_30 != VAR_24 && VAR_30 != VAR_32) {
    if (VAR_32) {
     FUNC_15(VAR_32);
     VAR_32 = VAR_14;
    }
    if (FUNC_13(VAR_30, VAR_39))
     goto again;
    VAR_32 = VAR_30;
   }
   FUNC_4(&VAR_40);
   FUNC_6(&VAR_40, VAR_22);

   if (VAR_38) {
    FUNC_6(&VAR_40, VAR_21);
    FUNC_1(VAR_40.va_name, VAR_19, VAR_9, VAR_12, VAR_13);
   } else {
    VAR_40.va_name = ((void*)0);
   }



   VAR_37 = FUNC_12(VAR_30, &VAR_40, VAR_29);

   if (VAR_38) {
    if ((VAR_37 == 0) && (FUNC_5(&VAR_40, VAR_21))) {
     VAR_35 = VAR_40.va_name;
     FUNC_16(VAR_30, ((void*)0), VAR_35, FUNC_9(VAR_35), 0, VAR_16);
    } else if (VAR_30->v_name) {
     VAR_35 = VAR_30->v_name;
     VAR_37 = 0;
    } else {
     VAR_37 = VAR_6;
     goto bad_news;
    }
    VAR_36 = FUNC_9(VAR_35);




    if ((VAR_34 - VAR_25) < (VAR_36 + 1)) {
     VAR_37 = VAR_7;
    } else {

     VAR_35 += VAR_36;

     for (; VAR_36 > 0; VAR_36--) {
      *--VAR_34 = *--VAR_35;
     }



     *--VAR_34 = '/';
    }
bad_news:
    FUNC_0(VAR_40.va_name, VAR_9, VAR_12);
   }
   if (VAR_37 || !FUNC_5(&VAR_40, VAR_22)) {
    VAR_37 = VAR_6;
    goto out;
   }



   if ((VAR_37 = FUNC_7(VAR_30->v_mount, (ino64_t)VAR_40.va_parentid, &VAR_41, VAR_29)))
    goto out;

   if (!VAR_38 && (VAR_30->v_parent != VAR_41))
    FUNC_16(VAR_30, VAR_41, ((void*)0), 0, 0, VAR_17);

   if (VAR_32)
    FUNC_15(VAR_32);
   VAR_30 = VAR_41;
   VAR_32 = VAR_30;

   FUNC_2();







   if (VAR_30 && !FUNC_14(VAR_30) && VAR_30->v_parent)
    VAR_30 = VAR_30->v_parent;
  }

  if (VAR_30 && (VAR_28 & VAR_0)) {
   VAR_39 = VAR_30->v_id;

   FUNC_3();

   if (VAR_30 != VAR_23 && VAR_30 != VAR_24 && VAR_30 != VAR_32) {
    if (VAR_32) {
     FUNC_15(VAR_32);
     VAR_32 = VAR_14;
    }
    if (FUNC_13(VAR_30, VAR_39))
     goto again;
    VAR_32 = VAR_30;
   }
   if ((VAR_37 = FUNC_11(VAR_30, ((void*)0), VAR_8, VAR_29)))
    goto out;

   FUNC_2();
  }







  VAR_31 = VAR_30;

  while (VAR_31) {
   if (VAR_31 == VAR_33)
    goto out_unlock;

   if (!(VAR_31->v_flag & VAR_18) || !VAR_31->v_mount)
    break;

   if (VAR_28 & VAR_3) {

    VAR_31 = ((void*)0);
   } else {
    VAR_31 = VAR_31->v_mount->mnt_vnodecovered;
   }
  }
  if (VAR_31 == VAR_14)
   goto out_unlock;
  VAR_30 = VAR_31;
 }
out_unlock:
 FUNC_3();
out:
 if (VAR_32)
  FUNC_15(VAR_32);



 FUNC_8(VAR_25, VAR_34, &VAR_25[VAR_26] - VAR_34);




 *VAR_27 = &VAR_25[VAR_26] - VAR_34;





 if ((VAR_37 == VAR_6) && (VAR_28 & VAR_1)) {
  VAR_37 = VAR_4;
 }

 return (VAR_37);
}
