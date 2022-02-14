
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int list; int bad_frames_preempt; struct b43_wl* wl; struct b43_bus_dev* dev; int use_pio; } ;
struct b43_wl {int nr_devs; int devlist; } ;
struct b43_bus_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct b43_bus_dev*,struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int VAR_3 ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*) ;
 int FUNC_5 (struct b43_wldev*) ;
 struct b43_wldev* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct b43_bus_dev *VAR_5, struct b43_wl *VAR_6)
{
 struct b43_wldev *VAR_7;
 int VAR_8 = -VAR_1;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  goto out;

 VAR_7->use_pio = VAR_3;
 VAR_7->dev = VAR_5;
 VAR_7->wl = VAR_6;
 FUNC_3(VAR_7, VAR_0);
 VAR_7->bad_frames_preempt = VAR_4;
 FUNC_0(&VAR_7->list);

 VAR_8 = FUNC_4(VAR_7);
 if (VAR_8)
  goto err_kfree_wldev;

 FUNC_7(&VAR_7->list, &VAR_6->devlist);
 VAR_6->nr_devs++;
 FUNC_1(VAR_5, VAR_7);
 FUNC_2(VAR_7);

      out:
 return VAR_8;

      err_kfree_wldev:
 FUNC_5(VAR_7);
 return VAR_8;
}
