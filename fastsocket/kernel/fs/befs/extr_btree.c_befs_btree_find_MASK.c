
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int befs_off_t ;
typedef int befs_data_stream ;
struct TYPE_11__ {int root_node_ptr; } ;
typedef TYPE_2__ befs_btree_super ;
struct TYPE_10__ {int overflow; } ;
struct TYPE_12__ {int * bh; TYPE_1__ head; } ;
typedef TYPE_3__ befs_btree_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct super_block*,int *,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (struct super_block*,int *,TYPE_2__*) ;
 int FUNC_2 (struct super_block*,char*,...) ;
 int FUNC_3 (struct super_block*,char*,...) ;
 int FUNC_4 (struct super_block*,TYPE_3__*,char const*,int*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (int,int ) ;

int
FUNC_9(struct super_block *VAR_5, befs_data_stream * VAR_6,
  const char *VAR_7, befs_off_t * VAR_8)
{
 befs_btree_node *VAR_9 = ((void*)0);
 befs_btree_super VAR_10;
 befs_off_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_5, "---> befs_btree_find() Key: %s", VAR_7);

 if (FUNC_1(VAR_5, VAR_6, &VAR_10) != VAR_3) {
  FUNC_3(VAR_5,
      "befs_btree_find() failed to read index superblock");
  goto error;
 }

 VAR_9 = FUNC_8(sizeof (befs_btree_node),
      VAR_4);
 if (!VAR_9) {
  FUNC_3(VAR_5, "befs_btree_find() failed to allocate %u "
      "bytes of memory", sizeof (befs_btree_node));
  goto error;
 }

 VAR_9->bh = ((void*)0);


 VAR_11 = VAR_10.root_node_ptr;
 if (FUNC_0(VAR_5, VAR_6, VAR_9, VAR_11) != VAR_3) {
  FUNC_3(VAR_5, "befs_btree_find() failed to read "
      "node at %Lu", VAR_11);
  goto error_alloc;
 }

 while (!FUNC_5(VAR_9)) {
  VAR_12 = FUNC_4(VAR_5, VAR_9, VAR_7, &VAR_11);
  if (VAR_12 == VAR_1)
   VAR_11 = VAR_9->head.overflow;

  if (FUNC_0(VAR_5, VAR_6, VAR_9, VAR_11) != VAR_3) {
   FUNC_3(VAR_5, "befs_btree_find() failed to read "
       "node at %Lu", VAR_11);
   goto error_alloc;
  }
 }



 VAR_12 = FUNC_4(VAR_5, VAR_9, VAR_7, VAR_8);

 FUNC_6(VAR_9->bh);
 FUNC_7(VAR_9);

 if (VAR_12 != VAR_0) {
  FUNC_2(VAR_5, "<--- befs_btree_find() Key %s not found", VAR_7);
  *VAR_8 = 0;
  return VAR_1;
 }
 FUNC_2(VAR_5, "<--- befs_btree_find() Found key %s, value %Lu",
     VAR_7, *VAR_8);
 return VAR_3;

      error_alloc:
 FUNC_7(VAR_9);
      error:
 *VAR_8 = 0;
 FUNC_2(VAR_5, "<--- befs_btree_find() ERROR");
 return VAR_2;
}
