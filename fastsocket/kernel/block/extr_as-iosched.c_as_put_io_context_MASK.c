
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct as_io_context {int lock; int last_end_request; int state; } ;
struct TYPE_3__ {struct as_io_context* aic; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct request*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct request *VAR_2)
{
 struct as_io_context *VAR_3;

 if (FUNC_6(!FUNC_0(VAR_2)))
  return;

 VAR_3 = FUNC_0(VAR_2)->aic;

 if (FUNC_2(VAR_2) && VAR_3) {
  unsigned long VAR_4;

  FUNC_4(&VAR_3->lock, VAR_4);
  FUNC_3(VAR_0, &VAR_3->state);
  VAR_3->last_end_request = VAR_1;
  FUNC_5(&VAR_3->lock, VAR_4);
 }

 FUNC_1(FUNC_0(VAR_2));
}
