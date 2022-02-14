
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct tifm_dev {TYPE_1__ dev; } ;
struct tifm_adapter {int (* eject ) (struct tifm_adapter*,struct tifm_dev*) ;} ;


 struct tifm_adapter* FUNC_0 (int ) ;
 int FUNC_1 (struct tifm_adapter*,struct tifm_dev*) ;

void FUNC_2(struct tifm_dev *VAR_0)
{
 struct tifm_adapter *VAR_1 = FUNC_0(VAR_0->dev.parent);
 VAR_1->eject(VAR_1, VAR_0);
}
