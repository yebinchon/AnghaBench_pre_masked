
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rb_root {int dummy; } ;
struct jffs2_sb_info {int dummy; } ;
struct jffs2_node_frag {scalar_t__ ofs; scalar_t__ size; TYPE_1__* node; } ;
struct TYPE_4__ {int flash_offset; } ;
struct TYPE_3__ {TYPE_2__* raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int,scalar_t__) ;
 int FUNC_2 (struct jffs2_node_frag*,struct rb_root*) ;
 struct jffs2_node_frag* FUNC_3 (struct rb_root*) ;
 struct jffs2_node_frag* FUNC_4 (struct jffs2_node_frag*) ;
 struct jffs2_node_frag* FUNC_5 (struct rb_root*,scalar_t__) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_node_frag*) ;
 int FUNC_7 (TYPE_2__*) ;

uint32_t FUNC_8(struct jffs2_sb_info *VAR_2, struct rb_root *VAR_3, uint32_t VAR_4)
{
 struct jffs2_node_frag *VAR_5 = FUNC_5(VAR_3, VAR_4);

 FUNC_0("truncating fragtree to 0x%08x bytes\n", VAR_4);


 if (VAR_5 && VAR_5->ofs != VAR_4) {
  if (VAR_5->ofs+VAR_5->size > VAR_4) {
   VAR_5->size = VAR_4 - VAR_5->ofs;
  }
  VAR_5 = FUNC_4(VAR_5);
 }
 while (VAR_5 && VAR_5->ofs >= VAR_4) {
  struct jffs2_node_frag *VAR_6 = FUNC_4(VAR_5);

  FUNC_2(VAR_5, VAR_3);
  FUNC_6(VAR_2, VAR_5);
  VAR_5 = VAR_6;
 }

 if (VAR_4 == 0)
  return 0;

 VAR_5 = FUNC_3(VAR_3);


 if (!VAR_5)
  return 0;
 if (VAR_5->ofs + VAR_5->size < VAR_4)
  return VAR_5->ofs + VAR_5->size;



 if (VAR_5->node && (VAR_5->ofs & (VAR_0 - 1)) == 0) {
  FUNC_1("marking the last fragment 0x%08x-0x%08x REF_PRISTINE.\n",
   VAR_5->ofs, VAR_5->ofs + VAR_5->size);
  VAR_5->node->raw->flash_offset = FUNC_7(VAR_5->node->raw) | VAR_1;
 }
 return VAR_4;
}
