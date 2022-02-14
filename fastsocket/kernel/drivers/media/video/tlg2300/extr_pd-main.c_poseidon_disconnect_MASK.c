
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct poseidon {int kref; int v4l2_dev; int dvb_data; int lock; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct poseidon* FUNC_1 (struct usb_interface*) ;
 scalar_t__ FUNC_2 (struct poseidon*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct poseidon*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct poseidon*) ;
 int FUNC_8 (struct poseidon*) ;
 int FUNC_9 (struct poseidon*) ;
 int VAR_1 ;
 int FUNC_10 (struct poseidon*) ;
 int FUNC_11 (struct poseidon*) ;
 int FUNC_12 (struct usb_interface*,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_2)
{
 struct poseidon *VAR_3 = FUNC_1(VAR_2);

 if (!VAR_3)
  return;
 FUNC_4(VAR_3);
 if (FUNC_2(VAR_3))
  return;

 FUNC_5(&VAR_3->lock);
 VAR_3->state |= VAR_0;
 FUNC_6(&VAR_3->lock);


 FUNC_11(VAR_3);
 FUNC_0(&VAR_3->dvb_data);


 FUNC_13(&VAR_3->v4l2_dev);

 FUNC_7(VAR_3);
 FUNC_10(VAR_3);

 FUNC_9(VAR_3);
 FUNC_8(VAR_3);

 FUNC_12(VAR_2, ((void*)0));
 FUNC_3(&VAR_3->kref, VAR_1);
}
