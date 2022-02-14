
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ks8842_adapter {scalar_t__ hw_addr; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct ks8842_adapter*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ks8842_adapter *VAR_0, u16 VAR_1,
 u32 VAR_2, int VAR_3)
{
 FUNC_1(VAR_0, VAR_1);
 FUNC_0(VAR_2, VAR_0->hw_addr + VAR_3);
}
