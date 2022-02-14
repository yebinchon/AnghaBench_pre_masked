
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int point; } ;
typedef TYPE_1__ ccv_mser_node_t ;
struct TYPE_6__ {int reinit; int last_size; int size; int prev_size; int last_mscr_area; int mscr_area; scalar_t__ prev_chi; scalar_t__ chi; scalar_t__ step_now; scalar_t__ rank; int max_point; int min_point; } ;
typedef TYPE_2__ ccv_mscr_root_t ;



__attribute__((used)) static void FUNC_0(ccv_mscr_root_t* VAR_0, ccv_mser_node_t* VAR_1)
{
 VAR_0->reinit = 0x7FFFFFFF;
 VAR_0->min_point = VAR_0->max_point = VAR_1->point;
 VAR_0->rank = VAR_0->step_now = 0;
 VAR_0->chi = VAR_0->prev_chi = 0;
 VAR_0->last_size = VAR_0->size = VAR_0->prev_size = 1;
 VAR_0->last_mscr_area = VAR_0->mscr_area = -1;
}
