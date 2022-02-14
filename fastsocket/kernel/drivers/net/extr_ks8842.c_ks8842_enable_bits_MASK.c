
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ks8842_adapter {scalar_t__ hw_addr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ks8842_adapter*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ks8842_adapter *VAR_0, u16 VAR_1,
 u16 VAR_2, int VAR_3)
{
 u16 VAR_4;
 FUNC_2(VAR_0, VAR_1);
 VAR_4 = FUNC_0(VAR_0->hw_addr + VAR_3);
 VAR_4 |= VAR_2;
 FUNC_1(VAR_4, VAR_0->hw_addr + VAR_3);
}
