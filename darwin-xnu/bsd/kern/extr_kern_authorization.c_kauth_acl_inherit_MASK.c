
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {TYPE_2__* va_acl; } ;
typedef TYPE_2__* kauth_acl_t ;
struct TYPE_8__ {int acl_flags; unsigned int acl_entrycount; TYPE_1__* acl_ace; } ;
struct TYPE_7__ {int ace_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 unsigned int VAR_8 ;
 int FUNC_1 (struct vnode_attr*) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ) ;
 TYPE_2__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,struct vnode_attr*,int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(vnode_t VAR_10, kauth_acl_t VAR_11, kauth_acl_t *VAR_12, int VAR_13, vfs_context_t VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 unsigned int VAR_18;
 struct vnode_attr VAR_19;
 kauth_acl_t VAR_20, VAR_21;
 VAR_20 = ((void*)0);
 if ((VAR_11 == ((void*)0) || !(VAR_11->acl_flags & VAR_7)) &&
     (VAR_10 != ((void*)0)) && !FUNC_6(FUNC_8(VAR_10))) {
  FUNC_1(&VAR_19);
  FUNC_3(&VAR_19, VAR_9);
  if ((VAR_16 = FUNC_7(VAR_10, &VAR_19, VAR_14)) != 0) {
   FUNC_0("    ERROR - could not get parent directory ACL for inheritance");
   return(VAR_16);
  }
  if (FUNC_2(&VAR_19, VAR_9))
   VAR_20 = VAR_19.va_acl;
 }





 VAR_15 = 0;
 if (VAR_20 != ((void*)0)) {
  for (VAR_18 = 0; VAR_18 < VAR_20->acl_entrycount; VAR_18++) {
   if (VAR_20->acl_ace[VAR_18].ace_flags & (VAR_13 ? VAR_1 : VAR_2))
    VAR_15++;
  }
 }

 if (VAR_11 == ((void*)0)) {





 }

 if (VAR_11 != ((void*)0)) {
  if (VAR_11->acl_entrycount != VAR_8)
   VAR_15 += VAR_11->acl_entrycount;
  else
   VAR_11 = ((void*)0);
 }







 if ((VAR_15 == 0) && (VAR_11 == ((void*)0))) {
  *VAR_12 = ((void*)0);
  VAR_16 = 0;
  goto out;
 }




 if ((VAR_21 = FUNC_4(VAR_15)) == ((void*)0)) {
  FUNC_0("    ERROR - could not allocate %d-entry result buffer for inherited ACL", VAR_15);
  VAR_16 = VAR_0;
  goto out;
 }






 VAR_17 = 0;
 if (VAR_11 != ((void*)0)) {
  for (VAR_18 = 0; VAR_18 < VAR_11->acl_entrycount; VAR_18++) {
   if (!(VAR_11->acl_ace[VAR_18].ace_flags & VAR_3)) {
    VAR_21->acl_ace[VAR_17++] = VAR_11->acl_ace[VAR_18];
   }
  }
  FUNC_0("    INHERIT - applied %d of %d initial entries", VAR_17, VAR_11->acl_entrycount);
 }
 if (VAR_20 != ((void*)0)) {
  for (VAR_18 = 0; VAR_18 < VAR_20->acl_entrycount; VAR_18++) {







   if (VAR_20->acl_ace[VAR_18].ace_flags & (VAR_13 ? VAR_1 : VAR_2)) {
    VAR_21->acl_ace[VAR_17] = VAR_20->acl_ace[VAR_18];
    VAR_21->acl_ace[VAR_17].ace_flags |= VAR_3;
    VAR_21->acl_ace[VAR_17].ace_flags &= ~VAR_6;







    if ((VAR_21->acl_ace[VAR_17].ace_flags & VAR_5) || !VAR_13) {
     VAR_21->acl_ace[VAR_17].ace_flags &=
         ~(VAR_4);
    }
    VAR_17++;
   }
  }
 }
 VAR_21->acl_entrycount = VAR_17;
 *VAR_12 = VAR_21;
 FUNC_0("    INHERIT - product ACL has %d entries", VAR_17);
 VAR_16 = 0;
out:
 if (VAR_20 != ((void*)0))
  FUNC_5(VAR_20);
 return(VAR_16);
}
