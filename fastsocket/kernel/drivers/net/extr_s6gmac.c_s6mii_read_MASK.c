
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s6gmac {scalar_t__ reg; } ;
struct mii_bus {struct s6gmac* priv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct s6gmac*,int) ;
 int FUNC_2 (struct s6gmac*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_7, int VAR_8, int VAR_9)
{
 struct s6gmac *VAR_10 = VAR_7->priv;
 FUNC_2(VAR_10);
 if (FUNC_1(VAR_10, 256))
  return -VAR_0;
 FUNC_3(VAR_8 << VAR_2 |
  VAR_9 << VAR_3,
  VAR_10->reg + VAR_1);
 FUNC_3(1 << VAR_5, VAR_10->reg + VAR_4);
 FUNC_3(0, VAR_10->reg + VAR_4);
 if (FUNC_1(VAR_10, 256))
  return -VAR_0;
 return (u16)FUNC_0(VAR_10->reg + VAR_6);
}
