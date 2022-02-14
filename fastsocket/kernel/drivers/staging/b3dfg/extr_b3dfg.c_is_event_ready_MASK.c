
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b3dfg_dev {unsigned long cstate_tstamp; int buffer_lock; int cstate_lock; int transmission_enabled; } ;
struct b3dfg_buffer {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct b3dfg_dev *VAR_1, struct b3dfg_buffer *VAR_2,
     unsigned long VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(&VAR_1->buffer_lock, VAR_5);
 FUNC_0(&VAR_1->cstate_lock);
 VAR_4 = (!VAR_1->transmission_enabled ||
    VAR_2->state == VAR_0 ||
    VAR_3 != VAR_1->cstate_tstamp);
 FUNC_2(&VAR_1->cstate_lock);
 FUNC_3(&VAR_1->buffer_lock, VAR_5);

 return VAR_4;
}
