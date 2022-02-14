
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; int transfer_buffer_length; int actual_length; struct acm_wb* context; } ;
struct acm_wb {struct acm* instance; } ;
struct acm {int drain_wait; int work; int write_lock; TYPE_1__* data; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct acm*) ;
 int FUNC_1 (struct acm*,struct acm_wb*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_1)
{
 struct acm_wb *VAR_2 = VAR_1->context;
 struct acm *VAR_3 = VAR_2->instance;
 unsigned long VAR_4;

 if (VAR_0 || VAR_1->status
   || (VAR_1->actual_length != VAR_1->transfer_buffer_length))
  FUNC_2(&VAR_3->data->dev, "tx %d/%d bytes -- > %d\n",
   VAR_1->actual_length,
   VAR_1->transfer_buffer_length,
   VAR_1->status);

 FUNC_4(&VAR_3->write_lock, VAR_4);
 FUNC_1(VAR_3, VAR_2);
 FUNC_5(&VAR_3->write_lock, VAR_4);
 if (FUNC_0(VAR_3))
  FUNC_3(&VAR_3->work);
 else
  FUNC_6(&VAR_3->drain_wait);
}
