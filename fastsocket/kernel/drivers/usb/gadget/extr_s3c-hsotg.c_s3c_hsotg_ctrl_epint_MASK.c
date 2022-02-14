
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s3c_hsotg {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct s3c_hsotg *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6 = 1 << VAR_2;
 u32 VAR_7;

 if (!VAR_3)
  VAR_6 <<= 16;

 FUNC_1(VAR_5);
 VAR_7 = FUNC_2(VAR_1->regs + VAR_0);
 if (VAR_4)
  VAR_7 |= VAR_6;
 else
  VAR_7 &= ~VAR_6;
 FUNC_3(VAR_7, VAR_1->regs + VAR_0);
 FUNC_0(VAR_5);
}
