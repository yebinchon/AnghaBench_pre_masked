
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ,int,int ) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_2,
 vm_offset_t *VAR_3,
 vm_size_t VAR_4,
 vm_tag_t VAR_5,
 int VAR_6)
{
 kern_return_t VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, 0, VAR_6, VAR_5);
 FUNC_0(VAR_0, VAR_1, VAR_4, *VAR_3);
 return VAR_7;
}
