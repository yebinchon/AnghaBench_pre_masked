
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_raw_node_ref {scalar_t__ flash_offset; struct jffs2_raw_node_ref* next_in_ino; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline struct jffs2_raw_node_ref *FUNC_0(struct jffs2_raw_node_ref *VAR_2)
{
 VAR_2++;


 if (VAR_2->flash_offset == VAR_1) {
  VAR_2 = VAR_2->next_in_ino;
  if (!VAR_2)
   return VAR_2;
 }


 if (VAR_2->flash_offset == VAR_0)
  return ((void*)0);

 return VAR_2;
}
