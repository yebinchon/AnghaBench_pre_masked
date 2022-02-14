
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_message {int (* receive ) (struct ap_device*,struct ap_message*,int ) ;} ;
struct ap_device {int unregistered; int device; int lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ap_device*,struct ap_message*) ;
 int FUNC_3 (struct ap_device*,unsigned long*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ap_device*,struct ap_message*,int ) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ap_device *VAR_2, struct ap_message *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;



 FUNC_0(!VAR_3->receive);

 FUNC_5(&VAR_2->lock);
 if (!VAR_2->unregistered) {

  VAR_5 = FUNC_3(VAR_2, &VAR_4);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_2, VAR_3);
  if (!VAR_5)
   FUNC_8(&VAR_1);
  if (VAR_5 == -VAR_0)
   VAR_2->unregistered = 1;
 } else {
  VAR_3->receive(VAR_2, VAR_3, FUNC_1(-VAR_0));
  VAR_5 = -VAR_0;
 }
 FUNC_6(&VAR_2->lock);
 if (VAR_5 == -VAR_0)
  FUNC_4(&VAR_2->device);
}
