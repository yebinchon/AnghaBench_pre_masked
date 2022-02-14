
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {int max_size; int free_node_ptr; int root_node_ptr; int data_type; int max_depth; int node_size; int magic; } ;
typedef TYPE_1__ befs_disk_btree_super ;
typedef int befs_data_stream ;
struct TYPE_6__ {void* magic; void* max_size; void* free_node_ptr; void* root_node_ptr; void* data_type; void* max_depth; void* node_size; } ;
typedef TYPE_2__ befs_btree_super ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*,char*) ;
 int FUNC_1 (struct super_block*,TYPE_1__*) ;
 int FUNC_2 (struct super_block*,char*) ;
 struct buffer_head* FUNC_3 (struct super_block*,int *,int ,int *) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (struct super_block*,int ) ;
 void* FUNC_6 (struct super_block*,int ) ;

__attribute__((used)) static int
FUNC_7(struct super_block *VAR_3, befs_data_stream * VAR_4,
     befs_btree_super * VAR_5)
{
 struct buffer_head *VAR_6 = ((void*)0);
 befs_disk_btree_super *VAR_7 = ((void*)0);

 FUNC_0(VAR_3, "---> befs_btree_read_super()");

 VAR_6 = FUNC_3(VAR_3, VAR_4, 0, ((void*)0));

 if (!VAR_6) {
  FUNC_2(VAR_3, "Couldn't read index header.");
  goto error;
 }
 VAR_7 = (befs_disk_btree_super *) VAR_6->b_data;
 FUNC_1(VAR_3, VAR_7);

 VAR_5->magic = FUNC_5(VAR_3, VAR_7->magic);
 VAR_5->node_size = FUNC_5(VAR_3, VAR_7->node_size);
 VAR_5->max_depth = FUNC_5(VAR_3, VAR_7->max_depth);
 VAR_5->data_type = FUNC_5(VAR_3, VAR_7->data_type);
 VAR_5->root_node_ptr = FUNC_6(VAR_3, VAR_7->root_node_ptr);
 VAR_5->free_node_ptr = FUNC_6(VAR_3, VAR_7->free_node_ptr);
 VAR_5->max_size = FUNC_6(VAR_3, VAR_7->max_size);

 FUNC_4(VAR_6);
 if (VAR_5->magic != VAR_0) {
  FUNC_2(VAR_3, "Index header has bad magic.");
  goto error;
 }

 FUNC_0(VAR_3, "<--- befs_btree_read_super()");
 return VAR_2;

      error:
 FUNC_0(VAR_3, "<--- befs_btree_read_super() ERROR");
 return VAR_1;
}
