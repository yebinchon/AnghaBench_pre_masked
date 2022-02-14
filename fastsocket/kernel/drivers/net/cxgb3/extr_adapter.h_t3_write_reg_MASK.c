
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct adapter {scalar_t__ regs; } ;


 int FUNC_0 (struct adapter*,int ,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct adapter *VAR_1, u32 VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_1, VAR_0, "setting register 0x%x to 0x%x\n", VAR_2, VAR_3);
 FUNC_1(VAR_3, VAR_1->regs + VAR_2);
}
