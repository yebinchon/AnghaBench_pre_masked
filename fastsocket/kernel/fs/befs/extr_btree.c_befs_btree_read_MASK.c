
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint ;
typedef int u16 ;
struct super_block {int dummy; } ;
typedef scalar_t__ loff_t ;
typedef int fs64 ;
typedef scalar_t__ befs_off_t ;
typedef int befs_data_stream ;
struct TYPE_12__ {scalar_t__ root_node_ptr; } ;
typedef TYPE_2__ befs_btree_super ;
struct TYPE_11__ {scalar_t__ all_key_count; scalar_t__ right; } ;
struct TYPE_13__ {int * bh; TYPE_1__ head; } ;
typedef TYPE_3__ befs_btree_node ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct super_block*,TYPE_3__*,int,int*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct super_block*,int *,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct super_block*,int *,TYPE_2__*) ;
 int * FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct super_block*,int *,TYPE_2__*,TYPE_3__*,scalar_t__*) ;
 int FUNC_5 (struct super_block*,char*,...) ;
 int FUNC_6 (struct super_block*,char*,...) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct super_block*,int ) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int,int ) ;
 int FUNC_11 (char*,char*,int) ;

int
FUNC_12(struct super_block *VAR_6, befs_data_stream * VAR_7,
  loff_t VAR_8, size_t VAR_9, char *VAR_10, size_t * VAR_11,
  befs_off_t * VAR_12)
{
 befs_btree_node *VAR_13;
 befs_btree_super VAR_14;
 befs_off_t VAR_15 = 0;
 int VAR_16;
 fs64 *VAR_17;
 char *VAR_18;
 u16 VAR_19;
 int VAR_20;

 uint VAR_21 = 0;

 FUNC_5(VAR_6, "---> befs_btree_read()");

 if (FUNC_2(VAR_6, VAR_7, &VAR_14) != VAR_3) {
  FUNC_6(VAR_6,
      "befs_btree_read() failed to read index superblock");
  goto error;
 }

 if ((VAR_13 = (befs_btree_node *)
      FUNC_10(sizeof (befs_btree_node), VAR_4)) == ((void*)0)) {
  FUNC_6(VAR_6, "befs_btree_read() failed to allocate %u "
      "bytes of memory", sizeof (befs_btree_node));
  goto error;
 }

 VAR_15 = VAR_14.root_node_ptr;
 VAR_13->bh = ((void*)0);


 VAR_20 = FUNC_4(VAR_6, VAR_7, &VAR_14, VAR_13, &VAR_15);
 if (VAR_20 == VAR_0) {
  FUNC_7(VAR_13->bh);
  FUNC_9(VAR_13);
  *VAR_12 = 0;
  *VAR_11 = 0;
  FUNC_5(VAR_6, "<--- befs_btree_read() Tree is EMPTY");
  return VAR_0;
 } else if (VAR_20 == VAR_2) {
  goto error_alloc;
 }



 while (VAR_21 + VAR_13->head.all_key_count <= VAR_8) {


  if (VAR_13->head.right == VAR_5) {
   *VAR_11 = 0;
   *VAR_12 = 0;
   FUNC_5(VAR_6,
       "<--- befs_btree_read() END of keys at %Lu",
       VAR_21 + VAR_13->head.all_key_count);
   FUNC_7(VAR_13->bh);
   FUNC_9(VAR_13);
   return VAR_1;
  }

  VAR_21 += VAR_13->head.all_key_count;
  VAR_15 = VAR_13->head.right;

  if (FUNC_1(VAR_6, VAR_7, VAR_13, VAR_15) != VAR_3) {
   FUNC_6(VAR_6, "befs_btree_read() failed to read "
       "node at %Lu", VAR_15);
   goto error_alloc;
  }
 }


 VAR_16 = VAR_8 - VAR_21;


 VAR_17 = FUNC_3(VAR_13);

 VAR_18 = FUNC_0(VAR_6, VAR_13, VAR_16, &VAR_19);

 FUNC_5(VAR_6, "Read [%Lu,%d]: keysize %d", VAR_15, VAR_16, VAR_19);

 if (VAR_9 < VAR_19 + 1) {
  FUNC_6(VAR_6, "befs_btree_read() keybuf too small (%u) "
      "for key of size %d", VAR_9, VAR_19);
  FUNC_7(VAR_13->bh);
  goto error_alloc;
 };

 FUNC_11(VAR_10, VAR_18, VAR_19);
 *VAR_12 = FUNC_8(VAR_6, VAR_17[VAR_16]);
 *VAR_11 = VAR_19;
 VAR_10[VAR_19] = '\0';

 FUNC_5(VAR_6, "Read [%Lu,%d]: Key \"%.*s\", Value %Lu", VAR_15,
     VAR_16, VAR_19, VAR_10, *VAR_12);

 FUNC_7(VAR_13->bh);
 FUNC_9(VAR_13);

 FUNC_5(VAR_6, "<--- befs_btree_read()");

 return VAR_3;

      error_alloc:
 FUNC_9(VAR_13);

      error:
 *VAR_11 = 0;
 *VAR_12 = 0;
 FUNC_5(VAR_6, "<--- befs_btree_read() ERROR");
 return VAR_2;
}
