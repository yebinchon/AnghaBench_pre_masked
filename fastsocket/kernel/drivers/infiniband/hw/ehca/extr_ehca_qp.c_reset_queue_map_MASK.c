
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ehca_queue_map {int tail; int entries; TYPE_1__* map; scalar_t__ next_wqe_idx; scalar_t__ left_to_poll; } ;
struct TYPE_2__ {int reported; scalar_t__ cqe_req; } ;



__attribute__((used)) static void FUNC_0(struct ehca_queue_map *VAR_0)
{
 int VAR_1;

 VAR_0->tail = VAR_0->entries - 1;
 VAR_0->left_to_poll = 0;
 VAR_0->next_wqe_idx = 0;
 for (VAR_1 = 0; VAR_1 < VAR_0->entries; VAR_1++) {
  VAR_0->map[VAR_1].reported = 1;
  VAR_0->map[VAR_1].cqe_req = 0;
 }
}
