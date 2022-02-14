
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timestamp; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct qdio_q {int last_move; TYPE_2__ u; int irq_ptr; scalar_t__ qdio_error; } ;


 int VAR_0 ;
 int FUNC_0 (struct qdio_q*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct qdio_q *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 if ((VAR_2 != VAR_1->last_move) || VAR_1->qdio_error) {
  VAR_1->last_move = VAR_2;
  if (!FUNC_2(VAR_1->irq_ptr) && !VAR_0)
   VAR_1->u.in.timestamp = FUNC_1();
  return 1;
 } else
  return 0;
}
