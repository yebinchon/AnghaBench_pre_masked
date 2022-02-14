
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long uint32_t ;
typedef unsigned long u32 ;
struct map_info {int dummy; } ;
struct cfi_private {int device_type; } ;
struct TYPE_3__ {unsigned long* x; } ;
typedef TYPE_1__ map_word ;


 unsigned long FUNC_0 (int,struct map_info*,struct cfi_private*) ;
 TYPE_1__ FUNC_1 (struct map_info*,unsigned long) ;

__attribute__((used)) static inline u32 FUNC_2(struct map_info *VAR_0, uint32_t VAR_1,
 struct cfi_private *VAR_2)
{
 map_word VAR_3;
 unsigned long VAR_4;
 u32 VAR_5 = FUNC_0(1, VAR_0, VAR_2);
 VAR_4 = (1 << (VAR_2->device_type * 8)) -1;
 VAR_3 = FUNC_1(VAR_0, VAR_1 + VAR_5);
 return VAR_3.x[0] & VAR_4;
}
