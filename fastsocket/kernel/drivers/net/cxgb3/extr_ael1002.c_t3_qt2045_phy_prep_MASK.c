
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdio_ops {int dummy; } ;
struct TYPE_2__ {int prtad; } ;
struct cphy {TYPE_1__ mdio; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cphy*,struct adapter*,int,int *,struct mdio_ops const*,int,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;

int FUNC_2(struct cphy *VAR_6, struct adapter *VAR_7,
         int VAR_8, const struct mdio_ops *VAR_9)
{
 unsigned int VAR_10;

 FUNC_0(VAR_6, VAR_7, VAR_8, &VAR_5, VAR_9,
    VAR_2 | VAR_3 | VAR_4,
    "10GBASE-CX4");





 if (!VAR_8 &&
     !FUNC_1(VAR_6, VAR_0, VAR_1, &VAR_10) &&
     VAR_10 == 0xffff)
  VAR_6->mdio.prtad = 1;
 return 0;
}
