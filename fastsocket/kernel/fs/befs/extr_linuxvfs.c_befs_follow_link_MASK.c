
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct dentry {struct super_block* d_sb; int d_inode; } ;
typedef int befs_off_t ;
struct TYPE_8__ {int size; } ;
struct TYPE_6__ {char* symlink; TYPE_3__ ds; } ;
struct TYPE_7__ {int i_flags; TYPE_1__ i_data; } ;
typedef TYPE_2__ befs_inode_info ;
typedef TYPE_3__ befs_data_stream ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct super_block*,char*) ;
 int FUNC_3 (struct super_block*,char*) ;
 int FUNC_4 (struct super_block*,TYPE_3__*,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int,int ) ;
 int FUNC_7 (struct nameidata*,char*) ;

__attribute__((used)) static void *
FUNC_8(struct dentry *VAR_4, struct nameidata *VAR_5)
{
 befs_inode_info *VAR_6 = FUNC_0(VAR_4->d_inode);
 char *VAR_7;

 if (VAR_6->i_flags & VAR_0) {
  struct super_block *VAR_8 = VAR_4->d_sb;
  befs_data_stream *VAR_9 = &VAR_6->i_data.ds;
  befs_off_t VAR_10 = VAR_9->size;

  FUNC_2(VAR_8, "Follow long symlink");

  VAR_7 = FUNC_6(VAR_10, VAR_3);
  if (!VAR_7) {
   VAR_7 = FUNC_1(-VAR_2);
  } else if (FUNC_4(VAR_8, VAR_9, VAR_7, VAR_10) != VAR_10) {
   FUNC_5(VAR_7);
   FUNC_3(VAR_8, "Failed to read entire long symlink");
   VAR_7 = FUNC_1(-VAR_1);
  } else {
   VAR_7[VAR_10 - 1] = '\0';
  }
 } else {
  VAR_7 = VAR_6->i_data.symlink;
 }

 FUNC_7(VAR_5, VAR_7);
 return ((void*)0);
}
