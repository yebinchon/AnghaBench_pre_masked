
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * stat_desc; int dyn_tree; } ;
struct TYPE_8__ {int * stat_desc; int dyn_tree; } ;
struct TYPE_7__ {int * stat_desc; int dyn_tree; } ;
struct TYPE_10__ {int last_eob_len; long compressed_len; long bits_sent; scalar_t__ bi_valid; scalar_t__ bi_buf; TYPE_3__ bl_desc; int bl_tree; TYPE_2__ d_desc; int dyn_dtree; TYPE_1__ l_desc; int dyn_ltree; } ;
typedef TYPE_4__ deflate_state ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

void
FUNC_2(deflate_state *VAR_3)
{
    FUNC_1();

    VAR_3->l_desc.dyn_tree = VAR_3->dyn_ltree;
    VAR_3->l_desc.stat_desc = &VAR_2;

    VAR_3->d_desc.dyn_tree = VAR_3->dyn_dtree;
    VAR_3->d_desc.stat_desc = &VAR_1;

    VAR_3->bl_desc.dyn_tree = VAR_3->bl_tree;
    VAR_3->bl_desc.stat_desc = &VAR_0;

    VAR_3->bi_buf = 0;
    VAR_3->bi_valid = 0;
    VAR_3->last_eob_len = 8;






    FUNC_0(VAR_3);
}
