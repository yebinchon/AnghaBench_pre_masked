
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* kq; } ;
typedef TYPE_2__ kqueue_t ;
struct TYPE_4__ {int kq_state; int kq_reqlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(kqueue_t VAR_2)
{
 FUNC_0(VAR_2.kq->kq_state & (VAR_0 | VAR_1));
 FUNC_1(&VAR_2.kq->kq_reqlock);
}
