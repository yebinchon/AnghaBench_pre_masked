
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmac_i2c_host_kw {unsigned int bsteps; scalar_t__ base; } ;
typedef scalar_t__ reg_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u8 FUNC_1(struct pmac_i2c_host_kw *VAR_0, reg_t VAR_1)
{
 return FUNC_0(VAR_0->base + (((unsigned int)VAR_1) << VAR_0->bsteps));
}
