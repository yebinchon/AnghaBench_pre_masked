
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pipe_control {int * cpu_page; } ;
struct intel_ring_buffer {struct pipe_control* private; } ;



__attribute__((used)) static void
FUNC_0(struct intel_ring_buffer *VAR_0, u32 VAR_1)
{
 struct pipe_control *VAR_2 = VAR_0->private;
 VAR_2->cpu_page[0] = VAR_1;
}
