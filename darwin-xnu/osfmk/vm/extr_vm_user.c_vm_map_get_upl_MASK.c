
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef scalar_t__ vm_map_t ;
typedef int vm_map_offset_t ;
typedef int upl_t ;
typedef int upl_size_t ;
typedef int upl_page_info_array_t ;
typedef int upl_control_flags_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int *,int *,int ,unsigned int*,int*,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_4,
 vm_map_offset_t VAR_5,
 upl_size_t *VAR_6,
 upl_t *VAR_7,
 upl_page_info_array_t VAR_8,
 unsigned int *VAR_9,
 upl_control_flags_t *VAR_10,
 vm_tag_t VAR_11,
 int VAR_12)
{
 upl_control_flags_t VAR_13;
 kern_return_t VAR_14;

 if (VAR_3 == VAR_4)
  return VAR_0;

 VAR_13 = *VAR_10 & ~VAR_2;
 if (VAR_12)
  VAR_13 |= VAR_1;

 VAR_14 = FUNC_0(VAR_4,
          VAR_5,
          VAR_6,
          VAR_7,
          VAR_8,
          VAR_9,
          &VAR_13,
          VAR_11);

 *VAR_10 = (VAR_13 & ~VAR_1);
 return VAR_14;
}
