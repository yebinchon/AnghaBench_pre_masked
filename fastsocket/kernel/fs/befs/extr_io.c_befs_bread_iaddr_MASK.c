
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_6__ {scalar_t__ num_ags; } ;
typedef TYPE_1__ befs_sb_info ;
struct TYPE_7__ {scalar_t__ allocation_group; int len; int start; } ;
typedef TYPE_2__ befs_inode_addr ;
typedef int befs_blocknr_t ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,char*,...) ;
 int FUNC_2 (struct super_block*,char*,scalar_t__,...) ;
 int FUNC_3 (struct super_block*,TYPE_2__*) ;
 struct buffer_head* FUNC_4 (struct super_block*,int ) ;

struct buffer_head *
FUNC_5(struct super_block *VAR_0, befs_inode_addr VAR_1)
{
 struct buffer_head *VAR_2 = ((void*)0);
 befs_blocknr_t VAR_3 = 0;
 befs_sb_info *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_0, "---> Enter befs_read_iaddr() "
     "[%u, %hu, %hu]",
     VAR_1.allocation_group, VAR_1.start, VAR_1.len);

 if (VAR_1.allocation_group > VAR_4->num_ags) {
  FUNC_2(VAR_0, "BEFS: Invalid allocation group %u, max is %u",
      VAR_1.allocation_group, VAR_4->num_ags);
  goto error;
 }

 VAR_3 = FUNC_3(VAR_0, &VAR_1);

 FUNC_1(VAR_0, "befs_read_iaddr: offset = %lu", VAR_3);

 VAR_2 = FUNC_4(VAR_0, VAR_3);

 if (VAR_2 == ((void*)0)) {
  FUNC_2(VAR_0, "Failed to read block %lu", VAR_3);
  goto error;
 }

 FUNC_1(VAR_0, "<--- befs_read_iaddr()");
 return VAR_2;

      error:
 FUNC_1(VAR_0, "<--- befs_read_iaddr() ERROR");
 return ((void*)0);
}
