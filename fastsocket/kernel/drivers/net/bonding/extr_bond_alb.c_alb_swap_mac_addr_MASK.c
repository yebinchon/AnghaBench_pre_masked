
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slave {TYPE_1__* dev; } ;
struct bonding {int dummy; } ;
struct TYPE_2__ {int * dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct slave*,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct bonding *VAR_1, struct slave *VAR_2, struct slave *VAR_3)
{
 u8 VAR_4[VAR_0];

 FUNC_1(VAR_4, VAR_2->dev->dev_addr, VAR_0);
 FUNC_0(VAR_2, VAR_3->dev->dev_addr);
 FUNC_0(VAR_3, VAR_4);

}
