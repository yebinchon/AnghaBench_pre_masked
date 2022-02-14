
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxio_ucontext {int lock; int qpids; } ;
struct cxio_rdev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cxio_rdev *VAR_0, struct cxio_ucontext *VAR_1)
{
 FUNC_0(&VAR_1->qpids);
 FUNC_1(&VAR_1->lock);
}
