
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vnode_t ;
struct cs_blob {scalar_t__ csb_end_offset; scalar_t__ csb_base_offset; scalar_t__ csb_start_offset; } ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct cs_blob* FUNC_0 (int *,int,scalar_t__) ;

boolean_t
FUNC_1(
 vnode_t VAR_2,
 mach_vm_offset_t VAR_3,
 mach_vm_size_t VAR_4)
{
 struct cs_blob *VAR_5;
 mach_vm_offset_t VAR_6;
 mach_vm_offset_t VAR_7;

 if (VAR_2 == ((void*)0)) {

  return VAR_0;
 }
 if (VAR_4 == 0) {

  return VAR_0;
 }
 if (VAR_3 + VAR_4 < VAR_3) {

  return VAR_0;
 }

 VAR_5 = FUNC_0(VAR_2, -1, VAR_3);
 if (VAR_5 == ((void*)0)) {
  return VAR_0;
 }







 VAR_6 = (mach_vm_offset_t) (VAR_5->csb_base_offset +
      VAR_5->csb_start_offset);
 VAR_7 = (mach_vm_offset_t) (VAR_5->csb_base_offset +
           VAR_5->csb_end_offset);
 if (VAR_6 > VAR_3 || VAR_7 < (VAR_3 + VAR_4)) {

  return VAR_0;
 }

 return VAR_1;
}
