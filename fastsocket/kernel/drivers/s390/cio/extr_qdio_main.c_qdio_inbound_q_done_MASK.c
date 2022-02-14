
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ timestamp; } ;
struct TYPE_4__ {TYPE_1__ in; } ;
struct qdio_q {int first_to_check; int irq_ptr; TYPE_2__ u; int nr_buf_used; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qdio_q*,int ,unsigned char*,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct qdio_q*) ;

__attribute__((used)) static inline int FUNC_6(struct qdio_q *VAR_5)
{
 unsigned char VAR_6 = 0;

 if (!FUNC_1(&VAR_5->nr_buf_used))
  return 1;

 FUNC_5(VAR_5);
 FUNC_2(VAR_5, VAR_5->first_to_check, &VAR_6, 0);

 if (VAR_6 == VAR_4 || VAR_6 == VAR_3)

  return 0;

 if (FUNC_4(VAR_5->irq_ptr))
  return 1;


 if (VAR_1)
  return 1;





 if (FUNC_3() > VAR_5->u.in.timestamp + VAR_2) {
  FUNC_0(VAR_0, VAR_5->irq_ptr, "in done:%02x",
         VAR_5->first_to_check);
  return 1;
 } else
  return 0;
}
