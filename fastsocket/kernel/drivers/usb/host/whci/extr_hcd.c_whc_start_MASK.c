
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wusbhc {int mutex; int cluster_id; } ;
struct whc {scalar_t__ base; } ;
struct usb_hcd {int uses_new_polling; int state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 struct wusbhc* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct whc*,int ) ;
 int FUNC_6 (struct whc*,int ,int ) ;
 int FUNC_7 () ;
 struct whc* FUNC_8 (struct wusbhc*) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_10)
{
 struct wusbhc *VAR_11 = FUNC_4(VAR_10);
 struct whc *VAR_12 = FUNC_8(VAR_11);
 u8 VAR_13;
 int VAR_14;

 FUNC_1(&VAR_11->mutex);

 FUNC_0(VAR_7
    | VAR_8
    | VAR_4
    | VAR_5
    | VAR_6
    | VAR_9,
    VAR_12->base + VAR_3);


 VAR_13 = FUNC_7();
 VAR_14 = FUNC_5(VAR_12, VAR_13);
 if (VAR_14 < 0)
  goto out;
 VAR_11->cluster_id = VAR_13;


 FUNC_6(VAR_12, VAR_2, VAR_2);

 VAR_10->uses_new_polling = 1;
 FUNC_3(VAR_0, &VAR_10->flags);
 VAR_10->state = VAR_1;

out:
 FUNC_2(&VAR_11->mutex);
 return VAR_14;
}
