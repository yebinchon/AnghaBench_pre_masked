
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct c2_dev {scalar_t__ regs; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(struct c2_dev *VAR_1, u32 VAR_2, u16 VAR_3)
{
 while (FUNC_2(VAR_1->regs + VAR_0) & 0x80000000)
  FUNC_3(10);

 FUNC_1(FUNC_0(VAR_2, VAR_3),
       VAR_1->regs + VAR_0);
}
