
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rb_root {int rb_node; } ;
struct jffs2_sb_info {int dummy; } ;
struct TYPE_6__ {int rb_right; } ;
struct jffs2_node_frag {TYPE_2__ rb; scalar_t__ size; scalar_t__ ofs; TYPE_1__* node; } ;
struct TYPE_5__ {scalar_t__ ofs; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct jffs2_node_frag*) ;
 struct jffs2_node_frag* FUNC_2 (int *,scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,struct rb_root*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct jffs2_sb_info *VAR_1, struct rb_root *VAR_2,
           struct jffs2_node_frag *VAR_3,
          struct jffs2_node_frag *VAR_4, uint32_t VAR_5)
{
 if (VAR_5 < VAR_3->node->ofs) {

  struct jffs2_node_frag *VAR_6;

  VAR_6= FUNC_2(((void*)0), VAR_5, VAR_3->node->ofs - VAR_5);
  if (FUNC_5(!VAR_6)) {
   FUNC_1(VAR_3);
   return -VAR_0;
  }

  if (VAR_4) {



   FUNC_0("add hole frag %#04x-%#04x on the right of the new frag.\n",
    VAR_6->ofs, VAR_6->ofs + VAR_6->size);
   FUNC_4(&VAR_6->rb, &VAR_4->rb, &VAR_4->rb.rb_right);
  } else {
   FUNC_0("Add hole frag %#04x-%#04x to the root of the tree.\n",
    VAR_6->ofs, VAR_6->ofs + VAR_6->size);
   FUNC_4(&VAR_6->rb, ((void*)0), &VAR_2->rb_node);
  }
  FUNC_3(&VAR_6->rb, VAR_2);
  VAR_4 = VAR_6;
 }

 if (VAR_4) {



  FUNC_0("add the new node at the right\n");
  FUNC_4(&VAR_3->rb, &VAR_4->rb, &VAR_4->rb.rb_right);
 } else {
  FUNC_0("insert the new node at the root of the tree\n");
  FUNC_4(&VAR_3->rb, ((void*)0), &VAR_2->rb_node);
 }
 FUNC_3(&VAR_3->rb, VAR_2);

 return 0;
}
