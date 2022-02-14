
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wahc {size_t nep_buffer_size; int notifs_queued; int nep_buffer; TYPE_1__* usb_iface; } ;
struct wa_notif_work {size_t size; int work; int data; int wa; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*) ;
 struct wa_notif_work* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,size_t) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct wahc*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(struct wahc *VAR_3, size_t VAR_4)
{
 int VAR_5 = 0;
 struct device *VAR_6 = &VAR_3->usb_iface->dev;
 struct wa_notif_work *VAR_7;


 FUNC_0(VAR_4 > VAR_3->nep_buffer_size);
 if (VAR_4 == 0)
  goto out;
 if (FUNC_3(&VAR_3->notifs_queued) > 200) {
  if (FUNC_7())
   FUNC_4(VAR_6, "Too many notifications queued, "
    "throttling back\n");
  goto out;
 }
 VAR_7 = FUNC_5(sizeof(*VAR_7) + VAR_4, VAR_0);
 if (VAR_7 == ((void*)0)) {
  if (FUNC_7())
   FUNC_4(VAR_6, "No memory to queue notification\n");
  goto out;
 }
 FUNC_1(&VAR_7->work, VAR_1);
 VAR_7->wa = FUNC_9(VAR_3);
 VAR_7->size = VAR_4;
 FUNC_6(VAR_7->data, VAR_3->nep_buffer, VAR_4);
 FUNC_2(&VAR_3->notifs_queued);
 FUNC_8(VAR_2, &VAR_7->work);
out:

 return VAR_5;
}
