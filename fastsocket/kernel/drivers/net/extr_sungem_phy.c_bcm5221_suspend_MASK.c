
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 int FUNC_1 (struct mii_phy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct mii_phy* VAR_4)
{
 u16 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_2,
  VAR_5 | VAR_3);

 VAR_5 = FUNC_0(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_0,
    VAR_5 | VAR_1);

 return 0;
}
