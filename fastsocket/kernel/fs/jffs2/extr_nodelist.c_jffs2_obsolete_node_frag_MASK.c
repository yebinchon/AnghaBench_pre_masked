
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_sb_info {int dummy; } ;
struct jffs2_node_frag {TYPE_1__* node; } ;
struct TYPE_2__ {int raw; int frags; scalar_t__ size; scalar_t__ ofs; } ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct jffs2_node_frag*) ;
 int FUNC_3 (struct jffs2_sb_info*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct jffs2_sb_info *VAR_0,
         struct jffs2_node_frag *VAR_1)
{
 if (VAR_1->node) {
  VAR_1->node->frags--;
  if (!VAR_1->node->frags) {

   FUNC_0("marking old node @0x%08x (0x%04x-0x%04x) obsolete\n",
    FUNC_5(VAR_1->node->raw), VAR_1->node->ofs, VAR_1->node->ofs+VAR_1->node->size);
   FUNC_3(VAR_0, VAR_1->node->raw);
   FUNC_1(VAR_1->node);
  } else {
   FUNC_0("marking old node @0x%08x (0x%04x-0x%04x) REF_NORMAL. frags is %d\n",
    FUNC_5(VAR_1->node->raw), VAR_1->node->ofs, VAR_1->node->ofs+VAR_1->node->size, VAR_1->node->frags);
   FUNC_4(VAR_1->node->raw);
  }

 }
 FUNC_2(VAR_1);
}
