
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,int,int ,int,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int,int ,int,int ,int,int ) ;

vm_offset_t
FUNC_2(vm_map_t VAR_5, int VAR_6, int VAR_7, kern_return_t *VAR_8)
{
 vm_offset_t VAR_9 = 0;
 kern_return_t VAR_10 = VAR_0;

 if (!VAR_7)
  VAR_10 = FUNC_0(VAR_5, &VAR_9, VAR_6, 0, VAR_1 | VAR_2, VAR_4);
 else
  VAR_10 = FUNC_1(VAR_5, &VAR_9, VAR_6, VAR_3, 0xfffff, 0, VAR_1 | VAR_2, VAR_4);

 if (VAR_10 != VAR_0)
  VAR_9 = 0;
 if (VAR_8)
  *VAR_8 = VAR_10;

 return VAR_9;
}
