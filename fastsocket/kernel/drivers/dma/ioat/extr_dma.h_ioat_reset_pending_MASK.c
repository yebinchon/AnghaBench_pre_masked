
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ioat_chan_common {scalar_t__ reg_base; TYPE_1__* device; } ;
struct TYPE_2__ {int version; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_2(struct ioat_chan_common *VAR_1)
{
 u8 VAR_2 = VAR_1->device->version;
 u8 VAR_3;

 VAR_3 = FUNC_1(VAR_1->reg_base + FUNC_0(VAR_2));
 return (VAR_3 & VAR_0) == VAR_0;
}
