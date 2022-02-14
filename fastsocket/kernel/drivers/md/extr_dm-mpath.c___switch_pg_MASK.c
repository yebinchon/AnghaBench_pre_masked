
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pgpath {int pg; } ;
struct multipath {int pg_init_required; int queue_io; scalar_t__ pg_init_count; scalar_t__ hw_handler_name; int current_pg; } ;



__attribute__((used)) static void FUNC_0(struct multipath *VAR_0, struct pgpath *VAR_1)
{
 VAR_0->current_pg = VAR_1->pg;


 if (VAR_0->hw_handler_name) {
  VAR_0->pg_init_required = 1;
  VAR_0->queue_io = 1;
 } else {
  VAR_0->pg_init_required = 0;
  VAR_0->queue_io = 0;
 }

 VAR_0->pg_init_count = 0;
}
