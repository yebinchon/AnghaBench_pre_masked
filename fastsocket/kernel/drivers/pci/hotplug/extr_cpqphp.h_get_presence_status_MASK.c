
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slot {int device; } ;
struct controller {int slot_device_offset; scalar_t__ hpc_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct controller *VAR_1,
          struct slot *VAR_2)
{
 int VAR_3 = 0;
 u8 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_2->device - VAR_1->slot_device_offset;

 VAR_5 = FUNC_0(VAR_1->hpc_reg + VAR_0);
 VAR_3 = (int) ((((~VAR_5) >> 23) | ((~VAR_5) >> 15))
    >> VAR_4) & 0x02;

 return VAR_3;
}
