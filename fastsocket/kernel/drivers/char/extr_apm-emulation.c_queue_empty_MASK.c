
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_queue {scalar_t__ event_head; scalar_t__ event_tail; } ;



__attribute__((used)) static inline int FUNC_0(struct apm_queue *VAR_0)
{
 return VAR_0->event_head == VAR_0->event_tail;
}
