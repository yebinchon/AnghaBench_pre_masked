
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ cmd; unsigned long nsects; scalar_t__ cmdsize; int segname; } ;
typedef TYPE_1__ kernel_segment_command_t ;
struct TYPE_7__ {int segname; int sectname; } ;
typedef TYPE_2__ kernel_section_t ;
struct TYPE_8__ {unsigned long ncmds; scalar_t__ filetype; } ;
typedef TYPE_3__ kernel_mach_header_t ;


 scalar_t__ LC_SEGMENT_KERNEL ;
 scalar_t__ MH_OBJECT ;
 scalar_t__ strncmp (int ,char const*,int) ;

kernel_section_t *
getsectbynamefromheader(
    kernel_mach_header_t *mhp,
    const char *segname,
    const char *sectname)
{
 kernel_segment_command_t *sgp;
 kernel_section_t *sp;
 unsigned long i, j;

 sgp = (kernel_segment_command_t *)
       ((uintptr_t)mhp + sizeof(kernel_mach_header_t));
 for(i = 0; i < mhp->ncmds; i++){
     if(sgp->cmd == LC_SEGMENT_KERNEL)
  if(strncmp(sgp->segname, segname, sizeof(sgp->segname)) == 0 ||
     mhp->filetype == MH_OBJECT){
      sp = (kernel_section_t *)((uintptr_t)sgp +
    sizeof(kernel_segment_command_t));
      for(j = 0; j < sgp->nsects; j++){
   if(strncmp(sp->sectname, sectname,
      sizeof(sp->sectname)) == 0 &&
      strncmp(sp->segname, segname,
      sizeof(sp->segname)) == 0)
       return(sp);
   sp = (kernel_section_t *)((uintptr_t)sp +
        sizeof(kernel_section_t));
      }
  }
     sgp = (kernel_segment_command_t *)((uintptr_t)sgp + sgp->cmdsize);
 }
 return((kernel_section_t *)((void*)0));
}
