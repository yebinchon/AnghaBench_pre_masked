
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct efx_filter_spec {size_t type; int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static inline u32
FUNC_0(const struct efx_filter_spec *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = VAR_3[VAR_4->type];
 if (!(VAR_4->flags & VAR_0))
  VAR_6 += VAR_2;

 return VAR_6 << VAR_1 | VAR_5;
}
