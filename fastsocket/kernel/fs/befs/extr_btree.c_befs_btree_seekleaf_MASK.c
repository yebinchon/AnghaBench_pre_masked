
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int fs64 ;
typedef int befs_off_t ;
typedef int befs_data_stream ;
typedef int befs_btree_super ;
struct TYPE_7__ {scalar_t__ all_key_count; int overflow; } ;
struct TYPE_8__ {TYPE_1__ head; } ;
typedef TYPE_2__ befs_btree_node ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct super_block*,int *,TYPE_2__*,int ) ;
 int * FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct super_block*,char*,...) ;
 int FUNC_3 (struct super_block*,char*,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct super_block*,int ) ;

__attribute__((used)) static int
FUNC_6(struct super_block *VAR_3, befs_data_stream * VAR_4,
      befs_btree_super * VAR_5, befs_btree_node * VAR_6,
      befs_off_t * VAR_7)
{

 FUNC_2(VAR_3, "---> befs_btree_seekleaf()");

 if (FUNC_0(VAR_3, VAR_4, VAR_6, *VAR_7) != VAR_2) {
  FUNC_3(VAR_3, "befs_btree_seekleaf() failed to read "
      "node at %Lu", *VAR_7);
  goto error;
 }
 FUNC_2(VAR_3, "Seekleaf to root node %Lu", *VAR_7);

 if (VAR_6->head.all_key_count == 0 && FUNC_4(VAR_6)) {
  FUNC_2(VAR_3, "<--- befs_btree_seekleaf() Tree is EMPTY");
  return VAR_0;
 }

 while (!FUNC_4(VAR_6)) {

  if (VAR_6->head.all_key_count == 0) {
   FUNC_2(VAR_3, "befs_btree_seekleaf() encountered "
       "an empty interior node: %Lu. Using Overflow "
       "node: %Lu", *VAR_7,
       VAR_6->head.overflow);
   *VAR_7 = VAR_6->head.overflow;
  } else {
   fs64 *VAR_8 = FUNC_1(VAR_6);
   *VAR_7 = FUNC_5(VAR_3, VAR_8[0]);
  }
  if (FUNC_0(VAR_3, VAR_4, VAR_6, *VAR_7) != VAR_2) {
   FUNC_3(VAR_3, "befs_btree_seekleaf() failed to read "
       "node at %Lu", *VAR_7);
   goto error;
  }

  FUNC_2(VAR_3, "Seekleaf to child node %Lu", *VAR_7);
 }
 FUNC_2(VAR_3, "Node %Lu is a leaf node", *VAR_7);

 return VAR_2;

      error:
 FUNC_2(VAR_3, "<--- befs_btree_seekleaf() ERROR");
 return VAR_1;
}
