
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_ring_buffer {int request_list; int active_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct intel_ring_buffer *VAR_0)
{
 FUNC_0(&VAR_0->active_list);
 FUNC_0(&VAR_0->request_list);
}
