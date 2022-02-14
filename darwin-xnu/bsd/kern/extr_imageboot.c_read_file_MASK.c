
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int dummy; } ;
struct nameidata {struct vnode* ni_vp; } ;
typedef int proc_t ;
typedef size_t off_t ;
typedef int kauth_cred_t ;
typedef int caddr_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nameidata*,int ,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vnode*,int ,int ) ;
 int FUNC_4 (struct vnode*,int ,int ) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct nameidata*) ;
 int FUNC_8 (struct nameidata*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,struct vnode*,int ,size_t,int ,int ,int ,int ,int*,int ) ;
 int FUNC_14 (struct vnode*) ;
 int FUNC_15 (struct vnode*,size_t*,int ) ;

__attribute__((used)) static int
FUNC_16(const char *VAR_9, void **VAR_10, size_t *VAR_11)
{
 int VAR_12 = 0;
 struct nameidata VAR_13 = {};
 struct vnode *VAR_14 = ((void*)0);
 off_t VAR_15 = 0;
 int VAR_16 = 0;
 char *VAR_17 = ((void*)0);
 bool VAR_18 = 0;

 vfs_context_t VAR_19 = FUNC_10();
 proc_t VAR_20 = FUNC_11(VAR_19);
 kauth_cred_t VAR_21 = FUNC_12(VAR_19);

 FUNC_2(&VAR_13, VAR_5, VAR_6, VAR_4, VAR_8, FUNC_1(VAR_9), VAR_19);
 if ((VAR_12 = FUNC_7(&VAR_13)) != 0) {
  FUNC_0("namei failed (%s)", VAR_9);
  goto out;
 }
 FUNC_8(&VAR_13);
 VAR_14 = VAR_13.ni_vp;

 if ((VAR_12 = FUNC_15(VAR_14, &VAR_15, VAR_19)) != 0) {
  FUNC_0("failed to get vnode size");
  goto out;
 }
 if (VAR_15 < 0) {
  FUNC_9("negative file size");
 }

 if ((VAR_12 = FUNC_4(VAR_14, VAR_2, VAR_19)) != 0) {
  FUNC_0("failed to open vnode");
  goto out;
 }
 VAR_18 = 1;


 if (*VAR_11 && *VAR_11 < (size_t)VAR_15) {
  VAR_15 = *VAR_11;
 }

 VAR_17 = FUNC_5(VAR_15);
 if (VAR_17 == ((void*)0)) {
  VAR_12 = VAR_1;
  goto out;
 }

 if ((VAR_12 = FUNC_13(VAR_7, VAR_14, (caddr_t)VAR_17, VAR_15, 0, VAR_8, VAR_3, VAR_21, &VAR_16, VAR_20)) != 0) {
  FUNC_0("vn_rdwr() failed");
  goto out;
 }

 if (VAR_16) {

  FUNC_0("vn_rdwr resid = %d", VAR_16);
  VAR_12 = VAR_0;
  goto out;
 }

out:
 if (VAR_18) {
  FUNC_3(VAR_14, VAR_2, VAR_19);
 }
 if (VAR_14) {
  FUNC_14(VAR_14);
  VAR_14 = ((void*)0);
 }

 if (VAR_12) {
  FUNC_6(VAR_17);
 } else {
  *VAR_10 = VAR_17;
  *VAR_11 = VAR_15;
 }

 return VAR_12;
}
