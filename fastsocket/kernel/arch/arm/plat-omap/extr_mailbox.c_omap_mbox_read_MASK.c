
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int queue_lock; } ;
struct request {scalar_t__ special; } ;
struct omap_mbox {TYPE_1__* rxq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ mbox_msg_t ;
struct TYPE_2__ {struct request_queue* queue; } ;


 int FUNC_0 (struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*) ;
 struct omap_mbox* FUNC_2 (struct device*) ;
 int FUNC_3 (struct omap_mbox*,scalar_t__) ;
 int FUNC_4 (char*,char,char,char,char) ;
 int FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 unsigned long VAR_3;
 struct request *VAR_4;
 mbox_msg_t *VAR_5 = (mbox_msg_t *) VAR_2;
 struct omap_mbox *VAR_6 = FUNC_2(VAR_0);
 struct request_queue *VAR_7 = VAR_6->rxq->queue;

 while (1) {
  FUNC_6(VAR_7->queue_lock, VAR_3);
  VAR_4 = FUNC_1(VAR_7);
  FUNC_7(VAR_7->queue_lock, VAR_3);

  if (!VAR_4)
   break;

  *VAR_5 = (mbox_msg_t)VAR_4->special;

  FUNC_0(VAR_4, 0);

  if (FUNC_8(FUNC_3(VAR_6, *VAR_5))) {
   FUNC_5("mbox: Illegal seq bit!(%08x) ignored\n", *VAR_5);
   continue;
  }
  VAR_5++;
 }

 FUNC_4("%02x %02x %02x %02x\n", VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);

 return (size_t) ((char *)VAR_5 - VAR_2);
}
