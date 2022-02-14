
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ssb_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ dev; } ;
struct TYPE_5__ {struct ssb_device* dev; } ;
struct ssb_bus {TYPE_3__ chipco; TYPE_2__ pcicore; } ;
struct b43legacy_wldev {TYPE_1__* dev; } ;
struct TYPE_4__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct ssb_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_1)
{
 struct ssb_bus *VAR_2 = VAR_1->dev->bus;
 struct ssb_device *VAR_3, *VAR_4 = ((void*)0);




 VAR_3 = VAR_2->chipco.dev ? : VAR_4;
 if (!VAR_3)
  return;
 FUNC_0(VAR_3, VAR_0, 0);
}
