
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ene_device {TYPE_1__* pnp_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ene_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ene_device *VAR_2, int VAR_3)
{
 VAR_3 = VAR_3 && FUNC_1(&VAR_2->pnp_dev->dev);
 FUNC_0("wake on IR %s", VAR_3 ? "enabled" : "disabled");
 FUNC_2(VAR_2, VAR_0, VAR_1, VAR_3);
}
