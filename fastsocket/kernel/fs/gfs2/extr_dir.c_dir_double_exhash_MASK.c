
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gfs2_inode {int i_depth; void** i_hash_cache; int i_inode; } ;
struct buffer_head {int b_data; } ;
typedef void* __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void**) ;
 int VAR_2 ;
 int FUNC_1 (void**) ;
 int VAR_3 ;
 void** FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct gfs2_inode*,int ) ;
 void** FUNC_5 (struct gfs2_inode*) ;
 int FUNC_6 (struct gfs2_inode*) ;
 int FUNC_7 (struct gfs2_inode*,char*,int ,int) ;
 int FUNC_8 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (void**) ;
 int FUNC_11 (void**) ;
 void** FUNC_12 (int,int) ;
 int FUNC_13 (void**) ;

__attribute__((used)) static int FUNC_14(struct gfs2_inode *VAR_4)
{
 struct buffer_head *VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 __be64 *VAR_8;
 __be64 *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12 = 0;

 VAR_6 = 1 << VAR_4->i_depth;
 VAR_7 = VAR_6 * sizeof(__be64);

 VAR_8 = FUNC_5(VAR_4);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = FUNC_12(VAR_7 * 2, VAR_1 | VAR_3);
 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_2(VAR_7 * 2, VAR_1, VAR_2);

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = VAR_9;
 VAR_12 = FUNC_8(VAR_4, &VAR_5);
 if (VAR_12)
  goto out_kfree;

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  *VAR_10++ = *VAR_8;
  *VAR_10++ = *VAR_8;
  VAR_8++;
 }

 VAR_12 = FUNC_7(VAR_4, (char *)VAR_9, 0, VAR_7 * 2);
 if (VAR_12 != (VAR_7 * 2))
  goto fail;

 FUNC_6(VAR_4);
 VAR_4->i_hash_cache = VAR_9;
 VAR_4->i_depth++;
 FUNC_4(VAR_4, VAR_5->b_data);
 FUNC_3(VAR_5);
 return 0;

fail:

 FUNC_7(VAR_4, (char *)VAR_8, 0, VAR_7);
 FUNC_9(&VAR_4->i_inode, VAR_7);
 FUNC_4(VAR_4, VAR_5->b_data);
 FUNC_3(VAR_5);
out_kfree:
 if (FUNC_10(VAR_9))
  FUNC_13(VAR_9);
 else
  FUNC_11(VAR_9);
 return VAR_12;
}
