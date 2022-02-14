
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct temac_local {int ndev; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct temac_local* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct temac_local*,int ) ;
 int FUNC_3 (struct temac_local*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct temac_local *VAR_7 = FUNC_1(VAR_6);
 unsigned int VAR_8;


 VAR_8 = FUNC_2(VAR_7, VAR_3);
 FUNC_3(VAR_7, VAR_3, VAR_8);

 if (VAR_8 & (VAR_0 | VAR_1))
  FUNC_0(VAR_7->ndev);

 return VAR_2;
}
