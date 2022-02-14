
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct ioat_chan_common {scalar_t__ reg_base; TYPE_1__* device; } ;
struct TYPE_2__ {int version; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline u64 FUNC_3(struct ioat_chan_common *VAR_0)
{
 u8 VAR_1 = VAR_0->device->version;
 u64 VAR_2;
 u32 VAR_3;




 VAR_3 = FUNC_2(VAR_0->reg_base + FUNC_1(VAR_1));
 VAR_2 = FUNC_2(VAR_0->reg_base + FUNC_0(VAR_1));
 VAR_2 <<= 32;
 VAR_2 |= VAR_3;

 return VAR_2;
}
