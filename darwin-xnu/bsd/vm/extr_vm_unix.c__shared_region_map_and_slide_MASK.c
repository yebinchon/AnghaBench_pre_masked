
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vm_prot_t ;
typedef int user_addr_t ;
typedef size_t uint32_t ;
struct vnode_attr {scalar_t__ va_uid; int va_access_time; } ;
struct vnode {scalar_t__ v_type; scalar_t__ v_mount; int v_flag; int v_name; } ;
struct vm_shared_region {int dummy; } ;
struct shared_file_mapping_np {int sfm_init_prot; int sfm_max_prot; int sfm_file_offset; int sfm_size; int sfm_address; } ;
struct proc {int p_flag; int p_comm; int p_pid; TYPE_1__* p_fd; } ;
struct fileproc {TYPE_2__* f_fglob; } ;
typedef int off_t ;
typedef int memory_object_size_t ;
typedef scalar_t__ memory_object_control_t ;
typedef int kern_return_t ;
struct TYPE_5__ {int fg_flag; scalar_t__ fg_data; } ;
struct TYPE_4__ {struct vnode* fd_rdir; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (size_t,int*) ;
 int VAR_10 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_11 ;
 int FUNC_4 (struct vnode_attr*) ;
 int FUNC_5 (struct vnode_attr*,int ) ;
 int FUNC_6 (struct vnode_attr*,int ) ;
 scalar_t__ FUNC_7 (struct vnode*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct vnode* FUNC_10 () ;
 int FUNC_11 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_12 (struct proc*,int,struct fileproc**,int ) ;
 int FUNC_13 (int ,TYPE_2__*,int ,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 struct vnode* VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_15 (struct vnode*,int ,int ) ;
 scalar_t__ FUNC_16 (struct vnode*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct vm_shared_region*) ;
 int FUNC_20 (struct vm_shared_region*,size_t,struct shared_file_mapping_np*,scalar_t__,int ,void*,size_t,int ,int ) ;
 struct vm_shared_region* FUNC_21 (int ) ;
 int FUNC_22 (struct vnode*,struct vnode_attr*,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct vnode*) ;
 int FUNC_25 (int ,int ,struct vnode**,int ) ;
 struct vnode* FUNC_26 (struct vnode*) ;
 int FUNC_27 (struct vnode*) ;
 int FUNC_28 (struct vnode*,struct vnode_attr*,int ) ;
 int FUNC_29 (struct vnode*,int *,int ) ;
 int FUNC_30 (struct vnode*) ;
 int FUNC_31 (struct vnode*) ;

int
FUNC_32(
 struct proc *VAR_21,
 int VAR_22,
 uint32_t VAR_23,
 struct shared_file_mapping_np *VAR_24,
 uint32_t VAR_25,
 user_addr_t VAR_26,
 user_addr_t VAR_27)
{
 int VAR_28;
 kern_return_t VAR_29;
 struct fileproc *VAR_30;
 struct vnode *VAR_31, *VAR_32, *VAR_33;
 struct vnode_attr VAR_34;
 off_t VAR_35;
 memory_object_size_t VAR_36;



 memory_object_control_t VAR_37;
 struct vm_shared_region *VAR_38;
 uint32_t VAR_39;

 FUNC_2(
  ("shared_region: %p [%d(%s)] -> map\n",
   (void )FUNC_7(FUNC_10()),
   VAR_21->p_pid, VAR_21->p_comm));

 VAR_38 = ((void*)0);
 VAR_30 = ((void*)0);
 VAR_31 = ((void*)0);
 VAR_33 = ((void*)0);


 VAR_28 = FUNC_12(VAR_21, VAR_22, &VAR_30, 0);
 if (VAR_28) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map: "
    "fd=%d lookup failed (error=%d)\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm, VAR_22, VAR_28));
  goto done;
 }


 if (FUNC_0(VAR_30->f_fglob) != VAR_0) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map: "
    "fd=%d not a vnode (type=%d)\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    VAR_22, FUNC_0(VAR_30->f_fglob)));
  VAR_28 = VAR_2;
  goto done;
 }


 if (! (VAR_30->f_fglob->fg_flag & VAR_5)) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map: "
    "fd=%d not readable\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm, VAR_22));
  VAR_28 = VAR_4;
  goto done;
 }


 VAR_28 = FUNC_23((vnode_t) VAR_30->f_fglob->fg_data);
 if (VAR_28) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map: "
    "fd=%d getwithref failed (error=%d)\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm, VAR_22, VAR_28));
  goto done;
 }
 VAR_31 = (struct vnode *) VAR_30->f_fglob->fg_data;


 if (VAR_31->v_type != VAR_14) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "not a file (type=%d)\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31),
    VAR_31->v_name, VAR_31->v_type));
  VAR_28 = VAR_2;
  goto done;
 }
 VAR_32 = VAR_21->p_fd->fd_rdir;
 if (VAR_32 == ((void*)0)) {
  VAR_32 = VAR_16;
 } else {



  VAR_28 = VAR_2;
  goto done;
 }

 if (VAR_31->v_mount != VAR_32->v_mount) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "not on process's root volume\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name));
  VAR_28 = VAR_4;
  goto done;
 }


 FUNC_4(&VAR_34);
 FUNC_6(&VAR_34, VAR_20);
 VAR_28 = FUNC_22(VAR_31, &VAR_34, FUNC_17());
 if (VAR_28) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "vnode_getattr(%p) failed (error=%d)\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name,
    (void )FUNC_7(VAR_31), VAR_28));
  goto done;
 }
 if (VAR_34.va_uid != 0) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "owned by uid=%d instead of 0\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31),
    VAR_31->v_name, VAR_34.va_uid));
  VAR_28 = VAR_4;
  goto done;
 }

 if (VAR_17) {

  VAR_28 = FUNC_25(VAR_18, 0, &VAR_33, FUNC_17());
  if (VAR_28) {
   FUNC_3(
    ("shared_region: %p [%d(%s)] map(%p:'%s'): "
     "vnode_lookup(%s) failed (error=%d)\n",
     (void )FUNC_7(FUNC_10()),
     VAR_21->p_pid, VAR_21->p_comm,
     (void )FUNC_7(VAR_31), VAR_31->v_name,
     VAR_18, VAR_28));
   goto done;
  }


  if (FUNC_26(VAR_31) != VAR_33) {
   FUNC_3(
    ("shared_region: %p [%d(%s)] map(%p:'%s'): "
     "shared cache file not in %s\n",
     (void )FUNC_7(FUNC_10()),
     VAR_21->p_pid, VAR_21->p_comm,
     (void )FUNC_7(VAR_31),
     VAR_31->v_name, VAR_18));
   VAR_28 = VAR_4;
   goto done;
  }
 }


 VAR_28 = FUNC_29(VAR_31, &VAR_35, FUNC_17());
 if (VAR_28) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "vnode_size(%p) failed (error=%d)\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name,
    (void )FUNC_7(VAR_31), VAR_28));
  goto done;
 }
 VAR_36 = VAR_35;


 VAR_37 = FUNC_16(VAR_31, VAR_11);
 if (VAR_37 == VAR_8) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "no memory object\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name));
  VAR_28 = VAR_2;
  goto done;
 }


 if (!FUNC_8()) {

 } else for (VAR_39 = 0; VAR_39 < VAR_23; VAR_39++) {
  if (VAR_24[VAR_39].sfm_init_prot & VAR_13) {

   continue;
  }
  if (FUNC_15(VAR_31,
            VAR_24[VAR_39].sfm_file_offset,
            VAR_24[VAR_39].sfm_size)) {

   continue;
  }
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "mapping #%d/%d [0x%llx:0x%llx:0x%llx:0x%x:0x%x] "
    "is not code-signed\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name,
    VAR_39, VAR_23,
    VAR_24[VAR_39].sfm_address,
    VAR_24[VAR_39].sfm_size,
    VAR_24[VAR_39].sfm_file_offset,
    VAR_24[VAR_39].sfm_max_prot,
    VAR_24[VAR_39].sfm_init_prot));
  VAR_28 = VAR_2;
  goto done;
 }


 VAR_38 = FUNC_21(FUNC_9());
 if (VAR_38 == ((void*)0)) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "no shared region\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name));
  VAR_28 = VAR_2;
  goto done;
 }


 VAR_29 = FUNC_20(VAR_38,
           VAR_23,
           VAR_24,
           VAR_37,
           VAR_36,
           (void *) VAR_21->p_fd->fd_rdir,
           VAR_25,
           VAR_26,
           VAR_27);
 if (VAR_29 != VAR_6) {
  FUNC_3(
   ("shared_region: %p [%d(%s)] map(%p:'%s'): "
    "vm_shared_region_map_file() failed kr=0x%x\n",
    (void )FUNC_7(FUNC_10()),
    VAR_21->p_pid, VAR_21->p_comm,
    (void )FUNC_7(VAR_31), VAR_31->v_name, VAR_29));
  switch (VAR_29) {
  case 131:
   VAR_28 = VAR_1;
   break;
  case 128:
   VAR_28 = VAR_4;
   break;
  case 129:
   VAR_28 = VAR_3;
   break;
  case 132:
  case 130:
  default:
   VAR_28 = VAR_2;
   break;
  }
  goto done;
 }

 VAR_28 = 0;

 FUNC_24(VAR_31);

 VAR_31->v_flag |= VAR_15;

 FUNC_30(VAR_31);


 if (! (FUNC_31(VAR_31) & VAR_9)) {
  FUNC_4(&VAR_34);
  FUNC_14(&VAR_34.va_access_time);
  FUNC_5(&VAR_34, VAR_19);
  FUNC_28(VAR_31, &VAR_34, FUNC_17());
 }

 if (VAR_21->p_flag & VAR_10) {

  FUNC_1(~((uint32_t)VAR_10), &VAR_21->p_flag);
 }

done:
 if (VAR_31 != ((void*)0)) {




  (void) FUNC_27(VAR_31);
  VAR_31 = ((void*)0);
 }
 if (VAR_30 != ((void*)0)) {

  FUNC_11(VAR_21, VAR_22, VAR_30, 0);
  VAR_30 = ((void*)0);
 }
 if (VAR_33 != ((void*)0)) {
  (void)FUNC_27(VAR_33);
  VAR_33 = ((void*)0);
 }

 if (VAR_38 != ((void*)0)) {
  FUNC_19(VAR_38);
 }

 FUNC_2(
  ("shared_region: %p [%d(%s)] <- map\n",
   (void )FUNC_7(FUNC_10()),
   VAR_21->p_pid, VAR_21->p_comm));

 return VAR_28;
}
