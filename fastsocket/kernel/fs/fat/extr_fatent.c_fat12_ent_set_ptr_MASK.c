
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* ent12_p; } ;
struct fat_entry {int nr_bhs; TYPE_1__ u; struct buffer_head** bhs; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct fat_entry *VAR_0, int VAR_1)
{
 struct buffer_head **VAR_2 = VAR_0->bhs;
 if (VAR_0->nr_bhs == 1) {
  FUNC_0(VAR_1 >= (VAR_2[0]->b_size - 1));
  VAR_0->u.ent12_p[0] = VAR_2[0]->b_data + VAR_1;
  VAR_0->u.ent12_p[1] = VAR_2[0]->b_data + (VAR_1 + 1);
 } else {
  FUNC_0(VAR_1 != (VAR_2[0]->b_size - 1));
  VAR_0->u.ent12_p[0] = VAR_2[0]->b_data + VAR_1;
  VAR_0->u.ent12_p[1] = VAR_2[1]->b_data;
 }
}
