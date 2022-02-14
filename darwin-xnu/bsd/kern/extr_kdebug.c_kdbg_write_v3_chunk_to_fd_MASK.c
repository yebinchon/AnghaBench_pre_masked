
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct vnode {int dummy; } ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
typedef int proc_t ;
struct TYPE_3__ {scalar_t__ length; int sub_tag; int tag; } ;
typedef TYPE_1__ kd_chunk_header_v3 ;
typedef int caddr_t ;
struct TYPE_4__ {int fg_offset; scalar_t__ fg_data; int fg_cred; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,struct fileproc*,int) ;
 scalar_t__ FUNC_4 (int ,int,struct fileproc**,int) ;
 int FUNC_5 (int ,size_t,struct vnode*,struct vfs_context*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;

int
FUNC_10(uint32_t VAR_5, uint32_t VAR_6, uint64_t VAR_7, void *VAR_8, uint64_t VAR_9, int VAR_10)
{
 proc_t VAR_11;
 struct vfs_context VAR_12;
 struct fileproc *VAR_13;
 vnode_t VAR_14;
 VAR_11 = FUNC_1();

 FUNC_6(VAR_11);
 if ( (FUNC_4(VAR_11, VAR_10, &VAR_13, 1)) ) {
  FUNC_7(VAR_11);
  return VAR_2;
 }

 VAR_12.vc_thread = FUNC_2();
 VAR_12.vc_ucred = VAR_13->f_fglob->fg_cred;

 if (FUNC_0(VAR_13->f_fglob) != VAR_0) {
  FUNC_3(VAR_11, VAR_10, VAR_13, 1);
  FUNC_7(VAR_11);
  return VAR_1;
 }
 VAR_14 = (struct vnode *) VAR_13->f_fglob->fg_data;
 FUNC_7(VAR_11);

 if ( (FUNC_8(VAR_14)) == 0 ) {
  VAR_4 = VAR_13->f_fglob->fg_offset;

  kd_chunk_header_v3 VAR_15 = {
   .tag = VAR_5,
   .sub_tag = VAR_6,
   .length = VAR_7,
  };

  int VAR_16 = FUNC_5((caddr_t) &VAR_15, sizeof(kd_chunk_header_v3), VAR_14, &VAR_12, VAR_4);
  if (!VAR_16) {
   VAR_4 += sizeof(kd_chunk_header_v3);
  }

  VAR_16 = FUNC_5((caddr_t) VAR_8, (size_t) VAR_9, VAR_14, &VAR_12, VAR_4);
  if (!VAR_16) {
   VAR_4 += VAR_9;
  }

  VAR_13->f_fglob->fg_offset = VAR_4;
  FUNC_9(VAR_14);
 }

 FUNC_3(VAR_11, VAR_10, VAR_13, 0);
 return VAR_3;
}
