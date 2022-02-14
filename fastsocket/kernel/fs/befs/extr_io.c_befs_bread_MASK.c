
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int befs_blocknr_t ;


 int FUNC_0 (struct super_block*,char*,...) ;
 int FUNC_1 (struct super_block*,char*,int ) ;
 struct buffer_head* FUNC_2 (struct super_block*,int ) ;

struct buffer_head *
FUNC_3(struct super_block *VAR_0, befs_blocknr_t VAR_1)
{
 struct buffer_head *VAR_2 = ((void*)0);

 FUNC_0(VAR_0, "---> Enter befs_read() %Lu", VAR_1);

 VAR_2 = FUNC_2(VAR_0, VAR_1);

 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "Failed to read block %lu", VAR_1);
  goto error;
 }

 FUNC_0(VAR_0, "<--- befs_read()");

 return VAR_2;

      error:
 FUNC_0(VAR_0, "<--- befs_read() ERROR");
 return ((void*)0);
}
