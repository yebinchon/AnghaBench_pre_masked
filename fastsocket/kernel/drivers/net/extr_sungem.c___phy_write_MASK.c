
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct gem {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct gem *VAR_6, int VAR_7, int VAR_8, u16 VAR_9)
{
 u32 VAR_10;
 int VAR_11 = 10000;

 VAR_10 = (1 << 30);
 VAR_10 |= (1 << 28);
 VAR_10 |= (VAR_7 << 23) & VAR_2;
 VAR_10 |= (VAR_8 << 18) & VAR_3;
 VAR_10 |= (VAR_5);
 VAR_10 |= (VAR_9 & VAR_1);
 FUNC_2(VAR_10, VAR_6->regs + VAR_0);

 while (VAR_11--) {
  VAR_10 = FUNC_0(VAR_6->regs + VAR_0);
  if (VAR_10 & VAR_4)
   break;

  FUNC_1(10);
 }
}
