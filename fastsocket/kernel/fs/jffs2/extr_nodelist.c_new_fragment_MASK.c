
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct jffs2_node_frag {struct jffs2_full_dnode* node; void* size; void* ofs; } ;
struct jffs2_full_dnode {int dummy; } ;


 int FUNC_0 (char*) ;
 struct jffs2_node_frag* FUNC_1 () ;
 scalar_t__ FUNC_2 (struct jffs2_node_frag*) ;

__attribute__((used)) static struct jffs2_node_frag * FUNC_3(struct jffs2_full_dnode *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 struct jffs2_node_frag *VAR_3;

 VAR_3 = FUNC_1();
 if (FUNC_2(VAR_3)) {
  VAR_3->ofs = VAR_1;
  VAR_3->size = VAR_2;
  VAR_3->node = VAR_0;
 } else {
  FUNC_0("cannot allocate a jffs2_node_frag object\n");
 }

 return VAR_3;
}
