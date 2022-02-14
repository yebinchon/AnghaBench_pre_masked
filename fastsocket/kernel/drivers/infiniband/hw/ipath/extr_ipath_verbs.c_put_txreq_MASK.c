
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct ipath_verbs_txreq {TYPE_1__ txreq; } ;
struct ipath_ibdev {int pending_lock; int txreq_free; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct ipath_ibdev *VAR_0,
        struct ipath_verbs_txreq *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->pending_lock, VAR_2);
 FUNC_0(&VAR_1->txreq.list, &VAR_0->txreq_free);
 FUNC_2(&VAR_0->pending_lock, VAR_2);
}
