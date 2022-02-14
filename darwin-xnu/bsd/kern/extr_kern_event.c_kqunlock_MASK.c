
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* kq; } ;
typedef TYPE_2__ kqueue_t ;
struct TYPE_4__ {int kq_lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void
FUNC_1(kqueue_t VAR_0)
{
 FUNC_0(&VAR_0.kq->kq_lock);
}
