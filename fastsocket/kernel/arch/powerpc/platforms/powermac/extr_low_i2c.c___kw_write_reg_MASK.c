
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmac_i2c_host_kw {unsigned int bsteps; scalar_t__ base; } ;
typedef scalar_t__ reg_t ;


 int FUNC_0 (struct pmac_i2c_host_kw*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct pmac_i2c_host_kw *VAR_1,
      reg_t VAR_2, u8 VAR_3)
{
 FUNC_1(VAR_3, VAR_1->base + (((unsigned)VAR_2) << VAR_1->bsteps));
 (void)FUNC_0(VAR_1, VAR_0);
}
