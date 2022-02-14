
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdio_q {int first_to_kick; int first_to_check; scalar_t__ qdio_error; TYPE_1__* irq_ptr; int nr; int (* handler ) (int ,scalar_t__,int ,int,int,int ) ;scalar_t__ is_input_q; } ;
struct TYPE_2__ {scalar_t__ state; int int_parm; int cdev; } ;


 int FUNC_0 (int ,TYPE_1__*,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qdio_q*,int,int) ;
 int FUNC_2 (struct qdio_q*,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int,int,int ) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct qdio_q *VAR_4)
{
 int VAR_5 = VAR_4->first_to_kick;
 int VAR_6 = VAR_4->first_to_check;
 int VAR_7;

 if (FUNC_5(VAR_4->irq_ptr->state != VAR_1))
  return;

 VAR_7 = FUNC_4(VAR_6, VAR_5);

 if (VAR_4->is_input_q) {
  FUNC_2(VAR_4, VAR_2);
  FUNC_0(VAR_0, VAR_4->irq_ptr, "kih s:%02x c:%02x", VAR_5, VAR_7);
 } else {
  FUNC_2(VAR_4, VAR_3);
  FUNC_0(VAR_0, VAR_4->irq_ptr, "koh: s:%02x c:%02x",
         VAR_5, VAR_7);
 }

 FUNC_1(VAR_4, VAR_5, VAR_7);

 VAR_4->handler(VAR_4->irq_ptr->cdev, VAR_4->qdio_error, VAR_4->nr, VAR_5, VAR_7,
     VAR_4->irq_ptr->int_parm);


 VAR_4->first_to_kick = VAR_6;
 VAR_4->qdio_error = 0;
}
