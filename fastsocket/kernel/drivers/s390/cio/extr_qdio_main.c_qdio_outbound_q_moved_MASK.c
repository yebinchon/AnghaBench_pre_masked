
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {int last_move; int nr; int irq_ptr; scalar_t__ qdio_error; } ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qdio_q*) ;

__attribute__((used)) static inline int FUNC_2(struct qdio_q *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if ((VAR_2 != VAR_1->last_move) || VAR_1->qdio_error) {
  VAR_1->last_move = VAR_2;
  FUNC_0(VAR_0, VAR_1->irq_ptr, "out moved:%1d", VAR_1->nr);
  return 1;
 } else
  return 0;
}
