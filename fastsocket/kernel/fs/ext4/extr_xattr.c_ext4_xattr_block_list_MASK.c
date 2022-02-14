
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct buffer_head {int b_count; } ;
struct TYPE_4__ {int h_refcount; } ;
struct TYPE_3__ {int i_file_acl; } ;


 int FUNC_0 (struct buffer_head*) ;
 TYPE_2__* FUNC_1 (struct buffer_head*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*,char*,int ,int ) ;
 int FUNC_6 (struct inode*,char*,char*,...) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (struct inode*,int ,char*,size_t) ;
 int FUNC_11 (int ) ;
 struct buffer_head* FUNC_12 (int ,int ) ;

__attribute__((used)) static int
FUNC_13(struct inode *VAR_1, char *VAR_2, size_t VAR_3)
{
 struct buffer_head *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_6(VAR_1, "buffer=%p, buffer_size=%ld",
    VAR_2, (long)VAR_3);

 VAR_5 = 0;
 if (!FUNC_2(VAR_1)->i_file_acl)
  goto cleanup;
 FUNC_6(VAR_1, "reading block %u", FUNC_2(VAR_1)->i_file_acl);
 VAR_4 = FUNC_12(VAR_1->i_sb, FUNC_2(VAR_1)->i_file_acl);
 VAR_5 = -VAR_0;
 if (!VAR_4)
  goto cleanup;
 FUNC_5(VAR_4, "b_count=%d, refcount=%d",
  FUNC_3(&(VAR_4->b_count)), FUNC_11(FUNC_1(VAR_4)->h_refcount));
 if (FUNC_9(VAR_4)) {
  FUNC_7(VAR_1->i_sb,
      "inode %lu: bad block %llu", VAR_1->i_ino,
      FUNC_2(VAR_1)->i_file_acl);
  VAR_5 = -VAR_0;
  goto cleanup;
 }
 FUNC_8(VAR_4);
 VAR_5 = FUNC_10(VAR_1, FUNC_0(VAR_4), VAR_2, VAR_3);

cleanup:
 FUNC_4(VAR_4);

 return VAR_5;
}
