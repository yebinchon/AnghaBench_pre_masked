
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_pio {struct b43legacy_pioqueue* queue0; struct b43legacy_pioqueue* queue1; struct b43legacy_pioqueue* queue2; struct b43legacy_pioqueue* queue3; } ;
struct b43legacy_wldev {int wl; int irq_mask; TYPE_2__* dev; struct b43legacy_pio pio; } ;
struct b43legacy_pioqueue {int dummy; } ;
struct TYPE_3__ {int revision; } ;
struct TYPE_4__ {TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct b43legacy_pioqueue*) ;
 struct b43legacy_pioqueue* FUNC_1 (struct b43legacy_wldev*,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct b43legacy_wldev *VAR_6)
{
 struct b43legacy_pio *VAR_7 = &VAR_6->pio;
 struct b43legacy_pioqueue *VAR_8;
 int VAR_9 = -VAR_5;

 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (!VAR_8)
  goto out;
 VAR_7->queue0 = VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_2);
 if (!VAR_8)
  goto err_destroy0;
 VAR_7->queue1 = VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_3);
 if (!VAR_8)
  goto err_destroy1;
 VAR_7->queue2 = VAR_8;

 VAR_8 = FUNC_1(VAR_6, VAR_4);
 if (!VAR_8)
  goto err_destroy2;
 VAR_7->queue3 = VAR_8;

 if (VAR_6->dev->id.revision < 3)
  VAR_6->irq_mask |= VAR_0;

 FUNC_2(VAR_6->wl, "PIO initialized\n");
 VAR_9 = 0;
out:
 return VAR_9;

err_destroy2:
 FUNC_0(VAR_7->queue2);
 VAR_7->queue2 = ((void*)0);
err_destroy1:
 FUNC_0(VAR_7->queue1);
 VAR_7->queue1 = ((void*)0);
err_destroy0:
 FUNC_0(VAR_7->queue0);
 VAR_7->queue0 = ((void*)0);
 goto out;
}
