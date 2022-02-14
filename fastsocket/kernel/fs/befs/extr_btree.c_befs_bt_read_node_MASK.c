
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint ;
struct super_block {int dummy; } ;
typedef int befs_off_t ;
typedef int befs_data_stream ;
struct TYPE_9__ {int all_key_length; int all_key_count; int overflow; int right; int left; } ;
typedef TYPE_2__ befs_btree_nodehead ;
struct TYPE_8__ {void* all_key_length; void* all_key_count; void* overflow; void* right; void* left; } ;
struct TYPE_10__ {TYPE_2__* od_node; TYPE_1__ head; TYPE_4__* bh; } ;
typedef TYPE_3__ befs_btree_node ;
struct TYPE_11__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*,char*) ;
 int FUNC_1 (struct super_block*,TYPE_2__*) ;
 int FUNC_2 (struct super_block*,char*,int ) ;
 TYPE_4__* FUNC_3 (struct super_block*,int *,int ,int*) ;
 int FUNC_4 (TYPE_4__*) ;
 void* FUNC_5 (struct super_block*,int ) ;
 void* FUNC_6 (struct super_block*,int ) ;

__attribute__((used)) static int
FUNC_7(struct super_block *VAR_2, befs_data_stream * VAR_3,
    befs_btree_node * VAR_4, befs_off_t VAR_5)
{
 uint VAR_6 = 0;

 FUNC_0(VAR_2, "---> befs_bt_read_node()");

 if (VAR_4->bh)
  FUNC_4(VAR_4->bh);

 VAR_4->bh = FUNC_3(VAR_2, VAR_3, VAR_5, &VAR_6);
 if (!VAR_4->bh) {
  FUNC_2(VAR_2, "befs_bt_read_node() failed to read "
      "node at %Lu", VAR_5);
  FUNC_0(VAR_2, "<--- befs_bt_read_node() ERROR");

  return VAR_0;
 }
 VAR_4->od_node =
     (befs_btree_nodehead *) ((void *) VAR_4->bh->b_data + VAR_6);

 FUNC_1(VAR_2, VAR_4->od_node);

 VAR_4->head.left = FUNC_6(VAR_2, VAR_4->od_node->left);
 VAR_4->head.right = FUNC_6(VAR_2, VAR_4->od_node->right);
 VAR_4->head.overflow = FUNC_6(VAR_2, VAR_4->od_node->overflow);
 VAR_4->head.all_key_count =
     FUNC_5(VAR_2, VAR_4->od_node->all_key_count);
 VAR_4->head.all_key_length =
     FUNC_5(VAR_2, VAR_4->od_node->all_key_length);

 FUNC_0(VAR_2, "<--- befs_btree_read_node()");
 return VAR_1;
}
