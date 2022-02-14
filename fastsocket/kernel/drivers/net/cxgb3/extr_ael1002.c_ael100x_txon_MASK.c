
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ prtad; } ;
struct cphy {int adapter; TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct cphy *VAR_3)
{
 int VAR_4 =
  VAR_3->mdio.prtad == 0 ? VAR_2 : VAR_1;

 FUNC_0(100);
 FUNC_1(VAR_3->adapter, VAR_0, 0, VAR_4);
 FUNC_0(30);
}
