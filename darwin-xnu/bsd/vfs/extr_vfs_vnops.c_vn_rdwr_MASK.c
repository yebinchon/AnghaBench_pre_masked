
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vnode {int dummy; } ;
typedef int proc_t ;
typedef int off_t ;
typedef int kauth_cred_t ;
typedef int int64_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef enum uio_rw { ____Placeholder_uio_rw } uio_rw ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int,struct vnode*,int ,int,int ,int,int,int ,int*,int ) ;

int
FUNC_1(
 enum uio_rw VAR_0,
 struct vnode *VAR_1,
 caddr_t VAR_2,
 int VAR_3,
 off_t VAR_4,
 enum uio_seg VAR_5,
 int VAR_6,
 kauth_cred_t VAR_7,
 int *VAR_8,
 proc_t VAR_9)
{
 int64_t VAR_10;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_0,
   VAR_1,
   (uint64_t)(uintptr_t)VAR_2,
   (int64_t)VAR_3,
   VAR_4,
   VAR_5,
   VAR_6,
   VAR_7,
   &VAR_10,
   VAR_9);


 if (VAR_8 != ((void*)0)) {
  *VAR_8 = VAR_10;
 }

 return VAR_11;
}
