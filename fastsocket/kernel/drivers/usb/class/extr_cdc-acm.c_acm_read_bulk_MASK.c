
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int actual_length; struct acm_ru* context; } ;
struct acm_ru {int list; struct acm_rb* buffer; struct acm* instance; } ;
struct acm_rb {int list; int size; } ;
struct acm {int urb_task; int susp_count; int read_lock; int spare_read_bufs; int spare_read_urbs; int filled_read_bufs; int processing; TYPE_1__* data; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct acm*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct urb *VAR_0)
{
 struct acm_rb *VAR_1;
 struct acm_ru *VAR_2 = VAR_0->context;
 struct acm *VAR_3 = VAR_2->instance;
 int VAR_4 = VAR_0->status;

 FUNC_1("Entering acm_read_bulk with status %d", VAR_4);

 if (!FUNC_0(VAR_3)) {
  FUNC_2(&VAR_3->data->dev, "Aborting, acm not ready");
  return;
 }
 FUNC_9(VAR_3->dev);

 if (VAR_4)
  FUNC_2(&VAR_3->data->dev, "bulk rx status %d\n", VAR_4);

 VAR_1 = VAR_2->buffer;
 VAR_1->size = VAR_0->actual_length;

 if (FUNC_3(VAR_4 == 0)) {
  FUNC_6(&VAR_3->read_lock);
  VAR_3->processing++;
  FUNC_5(&VAR_2->list, &VAR_3->spare_read_urbs);
  FUNC_5(&VAR_1->list, &VAR_3->filled_read_bufs);
  FUNC_7(&VAR_3->read_lock);
 } else {

  FUNC_6(&VAR_3->read_lock);
  FUNC_5(&VAR_2->list, &VAR_3->spare_read_urbs);
  FUNC_4(&VAR_1->list, &VAR_3->spare_read_bufs);
  FUNC_7(&VAR_3->read_lock);


 }
 if (FUNC_3(!VAR_3->susp_count))
  FUNC_8(&VAR_3->urb_task);
}
