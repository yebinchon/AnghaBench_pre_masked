
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
struct TYPE_8__ {void* vmkf_fourk; } ;
typedef TYPE_1__ vm_map_kernel_flags_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct vnode {int dummy; } ;
struct segment_command_64 {scalar_t__ vmaddr; scalar_t__ vmsize; scalar_t__ fileoff; scalar_t__ filesize; int initprot; int maxprot; int flags; size_t nsects; int segname; } ;
struct segment_command {int dummy; } ;
struct section_64 {int dummy; } ;
struct section {int dummy; } ;
struct load_command {scalar_t__ cmd; size_t cmdsize; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef scalar_t__ load_return_t ;
struct TYPE_9__ {scalar_t__ cs_end_offset; scalar_t__ min_vm_addr; scalar_t__ max_vm_addr; scalar_t__ all_image_info_addr; scalar_t__ entry_point; int validentry; scalar_t__ mach_header; } ;
typedef TYPE_2__ load_result_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ int64_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 TYPE_1__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_32 ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__,void*,scalar_t__,scalar_t__,int,int,TYPE_2__*) ;
 scalar_t__ VAR_33 ;
 int FUNC_7 (struct segment_command_64*,int,size_t,char const*,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__,struct vnode*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,scalar_t__*,scalar_t__,scalar_t__,int ,TYPE_1__,int ,int ,int ,void*,int,int,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,scalar_t__) ;
 int FUNC_19 (struct segment_command*,struct segment_command_64*) ;

__attribute__((used)) static
load_return_t
FUNC_20(
 struct load_command *VAR_34,
 uint32_t VAR_35,
 void * VAR_36,
 off_t VAR_37,
 off_t VAR_38,
 struct vnode *VAR_39,
 vm_map_t VAR_40,
 int64_t VAR_41,
 load_result_t *VAR_42)
{
 struct segment_command_64 VAR_43, *VAR_44;
 kern_return_t VAR_45;
 vm_map_size_t VAR_46;
 vm_prot_t VAR_47;
 vm_prot_t VAR_48;
 size_t VAR_49, VAR_50,
    VAR_51;
 vm_map_offset_t VAR_52, VAR_53;
 vm_map_offset_t VAR_54, VAR_55;
 vm_map_offset_t VAR_56, VAR_57, VAR_58;
 vm_map_offset_t VAR_59, VAR_60;
 kern_return_t VAR_61;
 boolean_t VAR_62;
 vm_map_size_t VAR_63;
 vm_map_offset_t VAR_64;





 VAR_63 = FUNC_1(VAR_16, FUNC_15(VAR_40));
 VAR_64 = FUNC_1(VAR_14, FUNC_14(VAR_40));

 VAR_62 = VAR_0;
 if (VAR_5 == VAR_34->cmd) {
  VAR_49 = sizeof(struct segment_command_64);
  VAR_51 = sizeof(struct section_64);




 } else {
  VAR_49 = sizeof(struct segment_command);
  VAR_51 = sizeof(struct section);
 }
 if (VAR_34->cmdsize < VAR_49)
  return (VAR_6);
 VAR_50 = VAR_34->cmdsize - VAR_49;

 if (VAR_5 == VAR_34->cmd) {
  VAR_44 = (struct segment_command_64 *)VAR_34;
 } else {
  VAR_44 = &VAR_43;
  FUNC_19((struct segment_command *)VAR_34, VAR_44);
 }

 if (VAR_62) {
  FUNC_0(("+++ load_segment %s "
         "vm[0x%llx:0x%llx] file[0x%llx:0x%llx] "
         "prot %d/%d flags 0x%x\n",
         VAR_44->segname,
         (uint64_t)(VAR_41 + VAR_44->vmaddr),
         (uint64_t)(VAR_41 + VAR_44->vmaddr + VAR_44->vmsize),
         VAR_37 + VAR_44->fileoff,
         VAR_37 + VAR_44->fileoff + VAR_44->filesize,
         VAR_44->initprot,
         VAR_44->maxprot,
         VAR_44->flags));
 }





 if (VAR_44->fileoff + VAR_44->filesize < VAR_44->fileoff ||
     VAR_44->fileoff + VAR_44->filesize > (uint64_t)VAR_38) {
  return (VAR_6);
 }




 if (VAR_50 / VAR_51 < VAR_44->nsects) {
  return (VAR_6);
 }



 VAR_52 = VAR_37 + VAR_44->fileoff;
 VAR_53 = VAR_44->filesize;
 if ((VAR_52 & VAR_15) != 0 ||

     (VAR_52 & FUNC_14(VAR_40)) != 0) {





  return (VAR_6);
 }






 if (VAR_42->cs_end_offset &&
     VAR_42->cs_end_offset < (off_t)VAR_44->fileoff &&
     VAR_42->cs_end_offset - VAR_44->fileoff < VAR_44->filesize)
        {
  if (VAR_30)
   FUNC_9("section outside code signature\n");
  return VAR_6;
 }

 VAR_54 = VAR_44->vmaddr + VAR_41;
 VAR_55 = VAR_44->vmsize;

 if (VAR_55 == 0)
  return (VAR_10);
 if (VAR_44->vmaddr == 0 &&
     VAR_53 == 0 &&
     VAR_55 != 0 &&
     (VAR_44->initprot & VAR_26) == VAR_28 &&
     (VAR_44->maxprot & VAR_26) == VAR_28) {
  VAR_57 = VAR_54 + VAR_55;
  if (VAR_57 < VAR_54) {
   return (VAR_6);
  }
  if (VAR_62) {
   FUNC_0(("++++++ load_segment: "
          "page_zero up to 0x%llx\n",
          (uint64_t) VAR_57));
  }







  {
   VAR_57 = FUNC_17(VAR_57,
         VAR_15);
   VAR_58 = VAR_57;
  }
  VAR_45 = FUNC_16(VAR_40,
           VAR_58);
  if (VAR_45 != VAR_4) {
   return (VAR_7);
  }
  return (VAR_10);
 } else {






 }
 {
  VAR_59 = FUNC_18(VAR_52,
            VAR_64);
  VAR_60 = FUNC_17(VAR_52 + VAR_53,
          VAR_64);
  VAR_56 = FUNC_18(VAR_54,
          VAR_64);
  VAR_57 = FUNC_17(VAR_54 + VAR_55,
        VAR_64);
 }

 if (VAR_56 < VAR_42->min_vm_addr)
  VAR_42->min_vm_addr = VAR_56;
 if (VAR_57 > VAR_42->max_vm_addr)
  VAR_42->max_vm_addr = VAR_57;

 if (VAR_40 == VAR_25)
  return (VAR_10);

 if (VAR_55 > 0) {
  VAR_47 = (VAR_44->initprot) & VAR_26;
  VAR_48 = (VAR_44->maxprot) & VAR_26;



  if (VAR_62) {
   FUNC_0(("++++++ load_segment: "
          "mapping at vm [0x%llx:0x%llx] of "
          "file [0x%llx:0x%llx]\n",
          (uint64_t) VAR_56,
          (uint64_t) VAR_57,
          (uint64_t) VAR_59,
          (uint64_t) VAR_60));
  }
  VAR_45 = FUNC_6(VAR_40,
      VAR_56,
      VAR_57,
      VAR_36,
      VAR_59,
      VAR_60,
      VAR_47,
      VAR_48,
      VAR_42);
  if (VAR_45) {
   return VAR_8;
  }
 }






 if ((VAR_57 - VAR_56) > (VAR_60 - VAR_59)) {
  VAR_46 = (VAR_57 - VAR_56) - (VAR_60 - VAR_59);
 } else {
  VAR_46 = 0;
 }
 if (VAR_46 > 0) {
  mach_vm_offset_t VAR_65;

  VAR_65 = VAR_56 + (VAR_60 - VAR_59);
  if (VAR_62) {
   FUNC_0(("++++++ load_segment: "
          "delta mapping vm [0x%llx:0x%llx]\n",
          (uint64_t) VAR_65,
          (uint64_t) (VAR_65 + VAR_46)));
  }
  VAR_61 = FUNC_6(VAR_40,
     VAR_65,
     VAR_65 + VAR_46,
     VAR_12,
     0,
     VAR_46,
     VAR_44->initprot,
     VAR_44->maxprot,
     VAR_42);
  if (VAR_61 != VAR_4) {
   return(VAR_8);
  }
 }

 if ( (VAR_44->fileoff == 0) && (VAR_44->filesize != 0) )
  VAR_42->mach_header = VAR_54;

 if (VAR_44->flags & VAR_17) {
  VAR_45 = FUNC_11(VAR_59,
           VAR_60 - VAR_59,
           VAR_39,
           VAR_37,
           VAR_40,
           VAR_56,
           VAR_57 - VAR_56);
  if (VAR_45 != VAR_10) {
   return VAR_45;
  }
 } else {
  VAR_45 = VAR_10;
 }

 if (VAR_10 == VAR_45 &&
     VAR_35 == VAR_13 &&
     VAR_42->all_image_info_addr == VAR_11) {
  FUNC_7(VAR_44,
         VAR_5 == VAR_34->cmd,
         VAR_51,
         ((const char *)VAR_34 +
          VAR_49),
         VAR_41,
         VAR_42);
 }

 if (VAR_42->entry_point != VAR_11) {
  if ((VAR_42->entry_point >= VAR_54) && (VAR_42->entry_point < (VAR_54 + VAR_55))) {
   if ((VAR_44->initprot & (VAR_29|VAR_27)) == (VAR_29|VAR_27)) {
    VAR_42->validentry = 1;
   } else {

    VAR_42->validentry = 0;
   }
  }
 }

 return VAR_45;
}
