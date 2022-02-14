
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct ext4_xattr_info {int name; int name_index; scalar_t__ value_len; int value; } ;
struct TYPE_9__ {int not_found; int here; int first; scalar_t__ end; TYPE_6__* base; } ;
struct ext4_xattr_block_find {TYPE_1__ s; TYPE_2__* bh; } ;
struct TYPE_12__ {int h_refcount; } ;
struct TYPE_11__ {scalar_t__ i_file_acl; } ;
struct TYPE_10__ {scalar_t__ b_size; scalar_t__ b_data; int b_count; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_6__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_5 (struct inode*,char*,int ,int ,int ,long) ;
 int FUNC_6 (struct super_block*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ,int ,scalar_t__,int) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (struct super_block*,scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct inode *VAR_2, struct ext4_xattr_info *VAR_3,
        struct ext4_xattr_block_find *VAR_4)
{
 struct super_block *VAR_5 = VAR_2->i_sb;
 int VAR_6;

 FUNC_5(VAR_2, "name=%d.%s, value=%p, value_len=%ld",
    VAR_3->name_index, VAR_3->name, VAR_3->value, (long)VAR_3->value_len);

 if (FUNC_2(VAR_2)->i_file_acl) {

  VAR_4->bh = FUNC_10(VAR_5, FUNC_2(VAR_2)->i_file_acl);
  VAR_6 = -VAR_0;
  if (!VAR_4->bh)
   goto cleanup;
  FUNC_4(VAR_4->bh, "b_count=%d, refcount=%d",
   FUNC_3(&(VAR_4->bh->b_count)),
   FUNC_9(FUNC_1(VAR_4->bh)->h_refcount));
  if (FUNC_7(VAR_4->bh)) {
   FUNC_6(VAR_5, "inode %lu: bad block %llu",
       VAR_2->i_ino, FUNC_2(VAR_2)->i_file_acl);
   VAR_6 = -VAR_0;
   goto cleanup;
  }

  VAR_4->s.base = FUNC_1(VAR_4->bh);
  VAR_4->s.first = FUNC_0(VAR_4->bh);
  VAR_4->s.end = VAR_4->bh->b_data + VAR_4->bh->b_size;
  VAR_4->s.here = VAR_4->s.first;
  VAR_6 = FUNC_8(&VAR_4->s.here, VAR_3->name_index,
           VAR_3->name, VAR_4->bh->b_size, 1);
  if (VAR_6 && VAR_6 != -VAR_1)
   goto cleanup;
  VAR_4->s.not_found = VAR_6;
 }
 VAR_6 = 0;

cleanup:
 return VAR_6;
}
