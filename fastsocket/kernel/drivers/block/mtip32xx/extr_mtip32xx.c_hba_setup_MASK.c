
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct driver_data {scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct driver_data *VAR_3)
{
 u32 VAR_4;
 VAR_4 = FUNC_0(VAR_3->mmio + VAR_0);


 FUNC_1(VAR_4 |
  VAR_1 |
  VAR_2,
  VAR_3->mmio + VAR_0);
}
