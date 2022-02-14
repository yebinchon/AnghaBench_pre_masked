
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int seqnum; } ;
struct usbip_header {TYPE_2__ base; } ;
struct usbip_device {int dummy; } ;
struct stub_priv {int list; struct stub_device* sdev; int seqnum; } ;
struct stub_device {int priv_lock; int priv_init; TYPE_1__* interface; struct usbip_device ud; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct stub_priv* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_2 ;
 int FUNC_5 (struct usbip_device*,int ) ;

__attribute__((used)) static struct stub_priv *FUNC_6(struct stub_device *VAR_3,
      struct usbip_header *VAR_4)
{
 struct stub_priv *VAR_5;
 struct usbip_device *VAR_6 = &VAR_3->ud;
 unsigned long VAR_7;

 FUNC_3(&VAR_3->priv_lock, VAR_7);

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (!VAR_5) {
  FUNC_0(&VAR_3->interface->dev, "alloc stub_priv\n");
  FUNC_4(&VAR_3->priv_lock, VAR_7);
  FUNC_5(VAR_6, VAR_1);
  return ((void*)0);
 }

 VAR_5->seqnum = VAR_4->base.seqnum;
 VAR_5->sdev = VAR_3;





 FUNC_2(&VAR_5->list, &VAR_3->priv_init);

 FUNC_4(&VAR_3->priv_lock, VAR_7);

 return VAR_5;
}
