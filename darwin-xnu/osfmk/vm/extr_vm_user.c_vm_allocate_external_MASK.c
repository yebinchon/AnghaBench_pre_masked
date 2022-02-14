
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef int vm_map_t ;
typedef int kern_return_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int *,int ,int,int ) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_0,
 vm_offset_t *VAR_1,
 vm_size_t VAR_2,
 int VAR_3)
{
 vm_tag_t VAR_4;

    FUNC_0(VAR_3, VAR_4);
    return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4));
}
