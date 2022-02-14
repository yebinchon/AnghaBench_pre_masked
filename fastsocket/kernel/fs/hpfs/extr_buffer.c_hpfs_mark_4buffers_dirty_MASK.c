
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {TYPE_1__** bh; scalar_t__ data; } ;
struct TYPE_2__ {int b_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,int) ;

void FUNC_3(struct quad_buffer_head *VAR_0)
{
 FUNC_0(("hpfs_mark_4buffers_dirty\n"));
 FUNC_2(VAR_0->bh[0]->b_data, VAR_0->data, 512);
 FUNC_2(VAR_0->bh[1]->b_data, VAR_0->data + 512, 512);
 FUNC_2(VAR_0->bh[2]->b_data, VAR_0->data + 2 * 512, 512);
 FUNC_2(VAR_0->bh[3]->b_data, VAR_0->data + 3 * 512, 512);
 FUNC_1(VAR_0->bh[0]);
 FUNC_1(VAR_0->bh[1]);
 FUNC_1(VAR_0->bh[2]);
 FUNC_1(VAR_0->bh[3]);
}
