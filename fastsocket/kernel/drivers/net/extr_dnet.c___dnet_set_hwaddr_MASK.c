
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dnet {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dnet*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dnet *VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(*((u16 *) VAR_3->dev->dev_addr));
 FUNC_1(VAR_3, VAR_0, VAR_4);
 VAR_4 = FUNC_0(*((u16 *) (VAR_3->dev->dev_addr + 2)));
 FUNC_1(VAR_3, VAR_1, VAR_4);
 VAR_4 = FUNC_0(*((u16 *) (VAR_3->dev->dev_addr + 4)));
 FUNC_1(VAR_3, VAR_2, VAR_4);
}
