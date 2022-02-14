
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cas {int phy_type; scalar_t__ regs; int phy_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cas *VAR_12, const int VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_12->regs + VAR_10);
 VAR_14 &= (VAR_3 | VAR_4);

 if (VAR_12->phy_type & VAR_2)
  VAR_14 |= VAR_5;


 if (VAR_13) {
  VAR_14 |= VAR_6;
  VAR_14 |= FUNC_0(VAR_8, VAR_9);
  VAR_14 |= FUNC_0(VAR_7, VAR_12->phy_addr);
 }
 FUNC_2((VAR_13) ? ~(VAR_1 | VAR_0) : 0xFFFF,
        VAR_12->regs + VAR_11);
 FUNC_2(VAR_14, VAR_12->regs + VAR_10);
}
