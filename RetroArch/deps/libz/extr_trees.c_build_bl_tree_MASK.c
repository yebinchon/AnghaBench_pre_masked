
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree_desc ;
struct TYPE_9__ {int max_code; } ;
struct TYPE_8__ {int max_code; } ;
struct TYPE_11__ {int opt_len; int static_len; TYPE_3__* bl_tree; int bl_desc; TYPE_2__ d_desc; scalar_t__ dyn_dtree; TYPE_1__ l_desc; scalar_t__ dyn_ltree; } ;
typedef TYPE_4__ deflate_state ;
typedef int ct_data ;
struct TYPE_10__ {scalar_t__ Len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t* VAR_1 ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (TYPE_4__*,int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(deflate_state *VAR_3)
{
   int VAR_4;


   FUNC_2(VAR_3, (ct_data *)VAR_3->dyn_ltree, VAR_3->l_desc.max_code);
   FUNC_2(VAR_3, (ct_data *)VAR_3->dyn_dtree, VAR_3->d_desc.max_code);


   FUNC_1(VAR_3, (tree_desc *)(&(VAR_3->bl_desc)));
   for (VAR_4 = VAR_0-1; VAR_4 >= 3; VAR_4--) {
      if (VAR_3->bl_tree[VAR_1[VAR_4]].Len != 0) break;
   }

   VAR_3->opt_len += 3*(VAR_4+1) + 5+5+4;
   FUNC_0((VAR_2, "\ndyn trees: dyn %ld, stat %ld",
            VAR_3->opt_len, VAR_3->static_len));

   return VAR_4;
}
