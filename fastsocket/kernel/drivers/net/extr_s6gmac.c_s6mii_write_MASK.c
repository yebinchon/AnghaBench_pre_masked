
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
 scalar_t__ FUNC_0 (struct s6gmac*,int) ;
 int FUNC_1 (struct s6gmac*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_5, int VAR_6, int VAR_7, u16 VAR_8)
{
 struct s6gmac *VAR_9 = VAR_5->priv;
 FUNC_1(VAR_9);
 if (FUNC_0(VAR_9, 256))
  return -VAR_0;
 FUNC_2(VAR_6 << VAR_2 |
  VAR_7 << VAR_3,
  VAR_9->reg + VAR_1);
 FUNC_2(VAR_8, VAR_9->reg + VAR_4);
 if (FUNC_0(VAR_9, 256))
  return -VAR_0;
 return 0;
}
