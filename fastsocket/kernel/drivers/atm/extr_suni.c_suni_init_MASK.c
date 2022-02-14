
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct suni_priv {int dummy; } ;
struct atm_dev {int * phy; int phy_data; } ;
struct TYPE_2__ {unsigned char type; struct atm_dev* dev; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (struct atm_dev*) ;
 int FUNC_2 (unsigned char,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct atm_dev*) ;
 int VAR_12 ;

int FUNC_6(struct atm_dev *VAR_13)
{
 unsigned char VAR_14;

 if (!(VAR_13->phy_data = FUNC_4(sizeof(struct suni_priv),VAR_1)))
  return -VAR_0;
 FUNC_1(VAR_13)->dev = VAR_13;

 VAR_14 = FUNC_0(VAR_2);
 FUNC_1(VAR_13)->type = (VAR_14 & VAR_6) >> VAR_7;
 FUNC_2(VAR_14 | VAR_5,VAR_2);
 FUNC_2(VAR_14,VAR_2);
 FUNC_2((FUNC_0(VAR_3) & VAR_8),VAR_3);
        FUNC_5(VAR_13);
 FUNC_3(VAR_9,0,VAR_9,
     VAR_10);
 FUNC_2(VAR_4,VAR_11);
 VAR_13->phy = &VAR_12;

 return 0;
}
