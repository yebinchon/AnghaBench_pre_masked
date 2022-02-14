
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {TYPE_1__* va_acl; void* va_guuid; void* va_uuuid; } ;
struct TYPE_3__ {scalar_t__ acl_entrycount; scalar_t__ acl_flags; } ;
struct kauth_filesec {void* fsec_group; void* fsec_owner; int fsec_magic; TYPE_1__ fsec_acl; } ;
typedef struct kauth_filesec* kauth_filesec_t ;
typedef TYPE_1__* kauth_acl_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_2 (struct vnode_attr*,int ) ;
 int FUNC_3 (struct vnode_attr*,int ) ;
 int FUNC_4 (int ,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct kauth_filesec*) ;
 scalar_t__ FUNC_7 (void**,void**) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,struct kauth_filesec**,int ) ;
 int FUNC_10 (int ,struct kauth_filesec*,TYPE_1__*,int ) ;
 int FUNC_11 (int ) ;

int
FUNC_12(vnode_t VAR_10, struct vnode_attr *VAR_11, vfs_context_t VAR_12)
{
 kauth_filesec_t VAR_13;
 kauth_acl_t VAR_14;
 struct kauth_filesec VAR_15;
 int VAR_16;

 VAR_16 = 0;







 if (FUNC_2(VAR_11, VAR_7) ||
     FUNC_2(VAR_11, VAR_9) ||
     FUNC_2(VAR_11, VAR_8)) {
  FUNC_4(VAR_12, VAR_10, "SETATTR - doing filesec fallback");





  if (!FUNC_5(VAR_10)) {
   FUNC_4(VAR_12, VAR_10, "SETATTR - Can't write ACL to file type %d", FUNC_11(VAR_10));
   VAR_16 = VAR_0;
   goto out;
  }






  VAR_13 = ((void*)0);
  if (!FUNC_1(VAR_11, VAR_7) ||
      !FUNC_1(VAR_11, VAR_9) ||
      !FUNC_1(VAR_11, VAR_8)) {
   if ((VAR_16 = FUNC_9(VAR_10, &VAR_13, VAR_12)) != 0) {
    FUNC_0("SETATTR - ERROR %d fetching filesec for update", VAR_16);
    goto out;
   }
  }

  if (VAR_13 == ((void*)0)) {
   FUNC_0("SETATTR - using local filesec for new/full update");
   VAR_13 = &VAR_15;
  } else {
   FUNC_0("SETATTR - updating existing filesec");
  }

  VAR_14 = &VAR_13->fsec_acl;


  if (VAR_13 == &VAR_15) {
   VAR_13->fsec_magic = VAR_2;
   VAR_13->fsec_owner = VAR_6;
   VAR_13->fsec_group = VAR_6;
   VAR_14->acl_entrycount = VAR_3;
   VAR_14->acl_flags = 0;
  }




  if (FUNC_1(VAR_11, VAR_9)) {
   FUNC_0("SETATTR - updating owner UUID");
   VAR_13->fsec_owner = VAR_11->va_uuuid;
   FUNC_3(VAR_11, VAR_9);
  }
  if (FUNC_1(VAR_11, VAR_8)) {
   FUNC_0("SETATTR - updating group UUID");
   VAR_13->fsec_group = VAR_11->va_guuid;
   FUNC_3(VAR_11, VAR_8);
  }
  if (FUNC_1(VAR_11, VAR_7)) {
   if (VAR_11->va_acl == ((void*)0)) {
    FUNC_0("SETATTR - removing ACL");
    VAR_14->acl_entrycount = VAR_3;
   } else {
    FUNC_0("SETATTR - setting ACL with %d entries", VAR_11->va_acl->acl_entrycount);
    VAR_14 = VAR_11->va_acl;
   }
   FUNC_3(VAR_11, VAR_7);
  }





  if ((VAR_14->acl_entrycount == VAR_3) &&
      FUNC_7(&VAR_13->fsec_owner, &VAR_6) &&
      FUNC_7(&VAR_13->fsec_group, &VAR_6)) {
   VAR_16 = FUNC_8(VAR_10, VAR_4, VAR_5, VAR_12);

   if (VAR_16 == VAR_1)
    VAR_16 = 0;
   FUNC_4(VAR_12, VAR_10, "SETATTR - remove filesec returning %d", VAR_16);
  } else {

   VAR_16 = FUNC_10(VAR_10, VAR_13, VAR_14, VAR_12);
   FUNC_4(VAR_12, VAR_10, "SETATTR - update filesec returning %d", VAR_16);
  }


  if (VAR_13 != &VAR_15)
   FUNC_6(VAR_13);
 }
out:

 return(VAR_16);
}
