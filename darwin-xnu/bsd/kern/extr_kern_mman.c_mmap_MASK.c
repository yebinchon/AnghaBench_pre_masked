
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
struct TYPE_17__ {void* vmkf_map_jit; } ;
typedef TYPE_2__ vm_map_kernel_flags_t ;
typedef int vfs_context_t ;
typedef scalar_t__ user_size_t ;
typedef int user_addr_t ;
typedef int uint32_t ;
struct vnode_attr {int va_access_time; } ;
struct vnode {scalar_t__ v_type; } ;
struct mmap_args {int fd; int addr; int prot; int flags; scalar_t__ pos; scalar_t__ len; } ;
struct fileproc {TYPE_10__* f_fglob; } ;
typedef TYPE_3__* proc_t ;
typedef int off_t ;
typedef scalar_t__ memory_object_t ;
typedef int * memory_object_control_t ;
typedef int kern_return_t ;
typedef void* boolean_t ;
struct TYPE_18__ {TYPE_1__* p_vmspace; } ;
struct TYPE_16__ {scalar_t__ vm_daddr; } ;
struct TYPE_15__ {int fg_flag; scalar_t__ fg_data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (TYPE_10__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int,int,int,int,int,int ) ;




 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 struct vnode* VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int FUNC_4 (struct vnode_attr*) ;
 int FUNC_5 (struct vnode_attr*,int ) ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_6 (int,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 TYPE_2__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_3__*,int,struct fileproc*,int ) ;
 int FUNC_11 (TYPE_3__*,int,struct fileproc**,int ) ;
 int VAR_52 ;
 int FUNC_12 (int ,TYPE_10__*,int,int,scalar_t__,int*) ;
 int FUNC_13 (TYPE_3__*,scalar_t__,scalar_t__,int,int,int*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_17 (TYPE_3__*,struct mmap_args*,int*,struct fileproc*,int ) ;
 int * FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (struct vnode*) ;
 int * FUNC_20 (struct vnode*,int ) ;
 int FUNC_21 (struct vnode*,TYPE_3__*,int ) ;
 int VAR_53 ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,scalar_t__*,scalar_t__,int ,int,TYPE_2__,int ,int ,int ,void*,int,int,int ) ;
 int FUNC_25 (int ,scalar_t__*,scalar_t__,int ,int,TYPE_2__,int ,int *,scalar_t__,void*,int,int,int ) ;
 scalar_t__ FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_29 (scalar_t__,scalar_t__) ;
 int FUNC_30 (struct vnode*,int *,int ,int ) ;
 int FUNC_31 (struct vnode*) ;
 scalar_t__ FUNC_32 (struct vnode*) ;
 int FUNC_33 (struct vnode*) ;
 int FUNC_34 (struct vnode*,struct vnode_attr*,int ) ;
 int FUNC_35 (struct vnode*) ;
 int VAR_54 ;

int
FUNC_36(proc_t VAR_55, struct mmap_args *VAR_56, user_addr_t *VAR_57)
{



 struct fileproc *VAR_58;
 struct vnode *VAR_59;
 int VAR_60;
 int VAR_61;
 int VAR_62=0;
 vm_map_t VAR_63;
 kern_return_t VAR_64;
 vm_map_offset_t VAR_65;
 vm_map_size_t VAR_66;
 vm_object_offset_t VAR_67;
 vm_object_offset_t VAR_68;
 int VAR_69 = 0;
 vm_tag_t VAR_70 = VAR_43;
 vm_map_kernel_flags_t VAR_71 = VAR_44;
 boolean_t VAR_72;
 vm_prot_t VAR_73;
 void *VAR_74;
 memory_object_t VAR_75 = VAR_22;
 memory_object_control_t VAR_76;
 int VAR_77=0;
 int VAR_78=0;
 int VAR_79 =0;
 int VAR_80 = VAR_56->fd;
 int VAR_81 = 0;
 VAR_63 = FUNC_8();
 VAR_65 = (vm_map_offset_t)VAR_56->addr;
 VAR_66 = (vm_map_size_t) VAR_56->len;

 FUNC_0(VAR_51, VAR_65);
 FUNC_0(VAR_52, VAR_66);
 FUNC_0(VAR_80, VAR_56->fd);

 VAR_61 = (VAR_56->prot & VAR_45);







 if (VAR_61 & (VAR_46 | VAR_48))
  VAR_61 |= VAR_47;


 VAR_60 = VAR_56->flags;
 VAR_59 = VAR_24;






 VAR_68 = (vm_object_offset_t)VAR_56->pos;



 if (VAR_68 + VAR_66 > (vm_object_offset_t)-VAR_25)
  return (VAR_5);





 VAR_67 = (VAR_68 & FUNC_26(VAR_63));
 VAR_68 -= (vm_object_offset_t)VAR_67;



 VAR_66 += VAR_67;
 VAR_66 = FUNC_28(VAR_66,
          FUNC_26(VAR_63));

 if (VAR_60 & VAR_16) {
  if ((VAR_60 & VAR_15) ||
      (VAR_60 & VAR_20) ||
      !(VAR_60 & VAR_14) ||
      (VAR_60 & VAR_18) ||
      (VAR_60 & VAR_19)) {
   return VAR_5;
  }
 }

 if ((VAR_60 & VAR_18) ||
     (VAR_60 & VAR_19)) {
  if ((VAR_60 & VAR_14) ||
      (VAR_60 & VAR_16)) {
   return VAR_5;
  }
  if (VAR_61 & (VAR_48 | VAR_46)) {
   return VAR_8;
  }
 }





 if (VAR_60 & VAR_15) {





  VAR_65 -= VAR_67;
  if (VAR_65 & FUNC_26(VAR_63))
   return (VAR_5);
 }
 VAR_69 = 0;

 if (VAR_60 & VAR_14) {

  VAR_73 = VAR_45;
  if (VAR_80 != -1) {




   VAR_69 = VAR_80 & (VAR_33 |
         VAR_40 |
         VAR_38 |
         VAR_32);
   if (VAR_69 != VAR_80) {

    return VAR_5;
   }
   FUNC_6(VAR_69, VAR_70);
   VAR_69 &= ~VAR_33;
  }

  VAR_74 = ((void*)0);
  VAR_68 = 0;
  VAR_77 = 1;
 } else {
  struct vnode_attr VAR_82;
  vfs_context_t VAR_83 = FUNC_22();

  if (VAR_60 & VAR_16)
   return VAR_5;





  VAR_62 = FUNC_11(VAR_55, VAR_80, &VAR_58, 0);
  if (VAR_62)
   return(VAR_62);
  VAR_78 = 1;
  switch (FUNC_2(VAR_58->f_fglob)) {
  case 133:
   VAR_56->addr = (user_addr_t)VAR_65;
   VAR_56->len = (user_size_t)VAR_66;
   VAR_56->prot = VAR_61;
   VAR_56->flags = VAR_60;
   VAR_56->pos = VAR_68;
   VAR_79 = FUNC_17(VAR_55, VAR_56, VAR_57, VAR_58, (off_t)VAR_67);
   goto bad;
  case 132:
   break;
  default:
   VAR_79 = VAR_5;
   goto bad;
  }
  VAR_59 = (struct vnode *)VAR_58->f_fglob->fg_data;
  VAR_79 = FUNC_31(VAR_59);
  if(VAR_79 != 0)
   goto bad;

  if (VAR_59->v_type != VAR_49 && VAR_59->v_type != VAR_31) {
   (void)FUNC_33(VAR_59);
   VAR_79 = VAR_5;
   goto bad;
  }

  FUNC_0(VAR_54, VAR_59, VAR_0);




  if ((FUNC_35(VAR_59) & VAR_23) == 0) {
   FUNC_4(&VAR_82);
   FUNC_15(&VAR_82.va_access_time);
   FUNC_5(&VAR_82, VAR_53);
   FUNC_34(VAR_59, &VAR_82, VAR_83);
  }





  if (VAR_59->v_type == VAR_31 || VAR_59->v_type == VAR_50) {
   (void)FUNC_33(VAR_59);
   VAR_79 = VAR_6;
   goto bad;
  } else {
   VAR_73 = VAR_46;
   if (VAR_58->f_fglob->fg_flag & VAR_10)
    VAR_73 |= VAR_47;
   else if (VAR_61 & VAR_26) {
    (void)FUNC_33(VAR_59);
    VAR_79 = VAR_4;
    goto bad;
   }
   if ((VAR_60 & VAR_20) != 0) {
    if ((VAR_58->f_fglob->fg_flag & VAR_11) != 0 &&




        !FUNC_32(VAR_59)) {






      VAR_79 = FUNC_30(VAR_59, ((void*)0), VAR_13, VAR_83);


      if ((VAR_61 & VAR_27) && (VAR_79 != 0)) {
       FUNC_33(VAR_59);
        goto bad;
       }


      if (VAR_79 == 0)
        VAR_73 |= VAR_48;

    } else if ((VAR_61 & VAR_27) != 0) {
     (void)FUNC_33(VAR_59);
     VAR_79 = VAR_4;
     goto bad;
    }
   } else
    VAR_73 |= VAR_48;

   VAR_74 = (void *)VAR_59;
  }
 }

 if (VAR_66 == 0) {
  if (!VAR_77)
   (void)FUNC_33(VAR_59);
  VAR_79 = 0;
  goto bad;
 }





 VAR_66 = FUNC_28(VAR_66,
          FUNC_26(VAR_63));

 if (VAR_68 & FUNC_26(VAR_63)) {
  if (!VAR_77)
   (void)FUNC_33(VAR_59);
  VAR_79 = VAR_5;
  goto bad;
 }

 if ((VAR_60 & VAR_15) == 0) {
  VAR_69 |= VAR_34;
  VAR_65 = FUNC_28(VAR_65,
           FUNC_26(VAR_63));
 } else {
  if (VAR_65 != FUNC_29(VAR_65,
         FUNC_26(VAR_63))) {
          if (!VAR_77)
           (void)FUNC_33(VAR_59);
   VAR_79 = VAR_5;
   goto bad;
  }
  VAR_69 |= VAR_35 | VAR_37;
 }

 if (VAR_60 & VAR_17)
  VAR_69 |= VAR_36;

 if (VAR_60 & VAR_16) {
  VAR_71.vmkf_map_jit = VAR_29;
 }

 if (VAR_60 & VAR_18) {
  VAR_69 |= VAR_39;
 }




 if (VAR_74 == ((void*)0)) {
  VAR_76 = ((void*)0);
  if (VAR_61 & (VAR_46 | VAR_48))
   VAR_61 |= VAR_47;
  if (VAR_73 & (VAR_46 | VAR_48))
   VAR_73 |= VAR_47;

map_anon_retry:
  VAR_64 = FUNC_24(VAR_63,
       &VAR_65, VAR_66,
       0, VAR_69, VAR_71,
       VAR_70,
       VAR_12, 0, VAR_9,
       VAR_61, VAR_73,
       (VAR_60 & VAR_20) ?
       VAR_42 :
       VAR_41);






  if ((VAR_64 == 130) && ((VAR_60 & VAR_15) == 0) && VAR_65 && (VAR_81++ == 0)) {
   VAR_65 = FUNC_27(VAR_63);
   goto map_anon_retry;
  }
 } else {
  if (FUNC_32(VAR_59)) {




   VAR_76 = ((void*)0);
   VAR_75 = FUNC_19(VAR_59);
   if (VAR_75 != VAR_22) {
    VAR_76 = FUNC_18(VAR_75);
   }
  } else {
   VAR_76 = FUNC_20(VAR_59, VAR_30);
  }

  if (VAR_76 == ((void*)0)) {
   (void)FUNC_33(VAR_59);
   VAR_79 = VAR_7;
   goto bad;
  }
  FUNC_21(VAR_59, VAR_55, FUNC_9());
  VAR_72 = VAR_9;
  if ((VAR_60 & (VAR_14|VAR_20)) == 0) {
   VAR_72 = VAR_29;
  }
  if (VAR_61 & (VAR_46 | VAR_48))
   VAR_61 |= VAR_47;
  if (VAR_73 & (VAR_46 | VAR_48))
   VAR_73 |= VAR_47;


map_file_retry:
  if ((VAR_60 & VAR_18) ||
      (VAR_60 & VAR_19)) {
   if (VAR_61 & (VAR_48 | VAR_46)) {
    FUNC_7(!VAR_77);
    FUNC_33(VAR_59);
    VAR_79 = VAR_8;
    goto bad;
   }

   VAR_73 &= VAR_61;
  }

  vm_object_offset_t VAR_84 = 0;
  if (FUNC_16(VAR_66, VAR_68, &VAR_84)) {
   FUNC_33(VAR_59);
   VAR_79 = VAR_5;
   goto bad;
  }

  VAR_64 = FUNC_25(VAR_63,
       &VAR_65, VAR_66,
       0, VAR_69, VAR_71,
       VAR_70,
       VAR_76, VAR_68,
       VAR_72, VAR_61, VAR_73,
       (VAR_60 & VAR_20) ?
       VAR_42 :
       VAR_41);






  if ((VAR_64 == 130) && ((VAR_60 & VAR_15) == 0) && VAR_65 && (VAR_81++ == 0)) {
   VAR_65 = FUNC_27(VAR_63);
   goto map_file_retry;
  }
 }

 if (!VAR_77) {
  (void)FUNC_33(VAR_59);
 }

 switch (VAR_64) {
 case 128:
  *VAR_57 = VAR_65 + VAR_67;
  VAR_79 = 0;
  break;
 case 131:
 case 130:
  VAR_79 = VAR_7;
  break;
 case 129:
  VAR_79 = VAR_4;
  break;
 default:
  VAR_79 = VAR_5;
  break;
 }
bad:
 if (VAR_75 != VAR_22) {





  FUNC_14(VAR_75);
 }
 if (VAR_78)
  FUNC_10(VAR_55, VAR_80, VAR_58, 0);

 FUNC_3((FUNC_1(VAR_1, VAR_28) | VAR_3), VAR_80, (uint32_t)(*VAR_57), (uint32_t)VAR_66, VAR_79, 0);

 FUNC_3((FUNC_1(VAR_2, VAR_28) | VAR_3), (uint32_t)(*VAR_57 >> 32), (uint32_t)(VAR_66 >> 32),
         (uint32_t)(VAR_68 >> 32), (uint32_t)VAR_68, 0);

 return(VAR_79);
}
