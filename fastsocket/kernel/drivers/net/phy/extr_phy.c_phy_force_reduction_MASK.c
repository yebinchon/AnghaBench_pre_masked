
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int duplex; int speed; int supported; } ;
struct TYPE_2__ {int duplex; int speed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,char*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct phy_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->speed, VAR_2->duplex);

 VAR_3++;

 VAR_3 = FUNC_1(VAR_3, VAR_2->supported);

 VAR_2->speed = VAR_1[VAR_3].speed;
 VAR_2->duplex = VAR_1[VAR_3].duplex;

 FUNC_2("Trying %d/%s\n", VAR_2->speed,
   VAR_0 == VAR_2->duplex ?
   "FULL" : "HALF");
}
