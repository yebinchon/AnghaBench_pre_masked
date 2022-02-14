
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dummy; } ;
struct b43legacy_wldev {int __using_pio; int list; int isr_tasklet; int bad_frames_preempt; struct b43legacy_wl* wl; struct ssb_device* dev; } ;
struct b43legacy_wl {int nr_devs; int devlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct b43legacy_wldev*,int ) ;
 int FUNC_3 (struct b43legacy_wldev*) ;
 int FUNC_4 (struct b43legacy_wldev*) ;
 struct b43legacy_wldev* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct ssb_device*,struct b43legacy_wldev*) ;
 int FUNC_8 (int *,void (*) (unsigned long),unsigned long) ;

__attribute__((used)) static int FUNC_9(struct ssb_device *VAR_6,
         struct b43legacy_wl *VAR_7)
{
 struct b43legacy_wldev *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  goto out;

 VAR_8->dev = VAR_6;
 VAR_8->wl = VAR_7;
 FUNC_2(VAR_8, VAR_0);
 VAR_8->bad_frames_preempt = VAR_4;
 FUNC_8(&VAR_8->isr_tasklet,
       (void (*)(unsigned long))VAR_3,
       (unsigned long)VAR_8);
 if (VAR_5)
  VAR_8->__using_pio = 1;
 FUNC_0(&VAR_8->list);

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  goto err_kfree_wldev;

 FUNC_6(&VAR_8->list, &VAR_7->devlist);
 VAR_7->nr_devs++;
 FUNC_7(VAR_6, VAR_8);
 FUNC_1(VAR_8);
out:
 return VAR_9;

err_kfree_wldev:
 FUNC_4(VAR_8);
 return VAR_9;
}
