
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_bus {struct sdio_func* host_sdio; } ;
struct sdio_func {int dummy; } ;
struct b43_wldev {TYPE_2__* dev; } ;
struct b43_sdio {void (* irq_handler ) (struct b43_wldev*) ;struct b43_wldev* irq_handler_opaque; } ;
struct TYPE_4__ {TYPE_1__* sdev; } ;
struct TYPE_3__ {struct ssb_bus* bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdio_func*) ;
 int FUNC_1 (struct sdio_func*,int ) ;
 struct b43_sdio* FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*) ;

int FUNC_4(struct b43_wldev *VAR_1,
    void (*VAR_2)(struct b43_wldev *VAR_3))
{
 struct ssb_bus *VAR_4 = VAR_1->dev->sdev->bus;
 struct sdio_func *VAR_5 = VAR_4->host_sdio;
 struct b43_sdio *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_6->irq_handler_opaque = VAR_1;
 VAR_6->irq_handler = VAR_2;
 FUNC_0(VAR_5);
 VAR_7 = FUNC_1(VAR_5, VAR_0);
 FUNC_3(VAR_5);

 return VAR_7;
}
