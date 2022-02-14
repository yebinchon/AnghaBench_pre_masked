
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int * uio_t ;
typedef scalar_t__ uint32_t ;
typedef int kauth_filesec_t ;
typedef int kauth_acl_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,char*,int) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int * FUNC_8 (int,int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_11(vnode_t VAR_8, kauth_filesec_t VAR_9, kauth_acl_t VAR_10, vfs_context_t VAR_11)
{
 uio_t VAR_12;
 int VAR_13;
 uint32_t VAR_14;

 VAR_12 = ((void*)0);

 if ((VAR_12 = FUNC_8(2, 0, VAR_5, VAR_6)) == ((void*)0)) {
  FUNC_3("    ERROR - could not allocate iov to write ACL");
  VAR_13 = VAR_0;
  goto out;
 }




 VAR_14 = FUNC_1(VAR_10);

 FUNC_6(VAR_1, VAR_9, VAR_10);

 FUNC_7(VAR_12, FUNC_0(VAR_9), FUNC_4(0) - FUNC_2(VAR_3));
 FUNC_7(VAR_12, FUNC_0(VAR_10), VAR_14);
 VAR_13 = FUNC_10(VAR_8,
     VAR_4,
     VAR_12,
     VAR_7,
     VAR_11);
 FUNC_5(VAR_11, VAR_8, "SETATTR - set ACL returning %d", VAR_13);

 FUNC_6(VAR_2, VAR_9, VAR_10);

out:
 if (VAR_12 != ((void*)0))
  FUNC_9(VAR_12);
 return(VAR_13);
}
