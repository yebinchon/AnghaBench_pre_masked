
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6gmac {int dummy; } ;
struct mii_bus {struct s6gmac* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct s6gmac*,int ) ;
 int FUNC_1 (struct s6gmac*) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_2)
{
 struct s6gmac *VAR_3 = VAR_2->priv;
 FUNC_1(VAR_3);
 if (FUNC_0(VAR_3, VAR_1))
  return -VAR_0;
 return 0;
}
