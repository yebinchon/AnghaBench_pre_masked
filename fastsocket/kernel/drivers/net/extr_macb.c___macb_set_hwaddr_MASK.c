
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct macb {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct macb*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct macb *VAR_2)
{
 u32 VAR_3;
 u16 VAR_4;

 VAR_3 = FUNC_1(*((u32 *)VAR_2->dev->dev_addr));
 FUNC_2(VAR_2, VAR_0, VAR_3);
 VAR_4 = FUNC_0(*((u16 *)(VAR_2->dev->dev_addr + 4)));
 FUNC_2(VAR_2, VAR_1, VAR_4);
}
