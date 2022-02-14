
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct TYPE_6__ {int * a_ops; } ;
struct inode {int i_mode; scalar_t__ i_nlink; int i_ino; TYPE_2__ i_data; int * i_op; struct super_block* i_sb; } ;
struct TYPE_5__ {int name; scalar_t__ len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;
struct TYPE_8__ {scalar_t__ table; } ;
struct TYPE_7__ {int s_hashsize; char* s_volume; } ;


 TYPE_4__* FUNC_0 (struct buffer_head*) ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct inode*,struct inode*,struct dentry*,int ) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ) ;
 int FUNC_4 (struct buffer_head*) ;
 struct inode* FUNC_5 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (char*,int ,int,int ,char const*) ;

int
FUNC_11(struct inode *VAR_6, struct dentry *VAR_7, const char *VAR_8)
{
 struct super_block *VAR_9 = VAR_6->i_sb;
 struct buffer_head *VAR_10;
 struct inode *VAR_11;
 char *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 char VAR_16, VAR_17;

 FUNC_10("AFFS: symlink(%lu,\"%.*s\" -> \"%s\")\n",VAR_6->i_ino,
   (int)VAR_7->d_name.len,VAR_7->d_name.name,VAR_8);

 VAR_14 = FUNC_1(VAR_9)->s_hashsize * sizeof(u32) - 1;
 VAR_11 = FUNC_5(VAR_6);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->i_op = &VAR_5;
 VAR_11->i_data.a_ops = &VAR_4;
 VAR_11->i_mode = VAR_3 | 0777;
 FUNC_9(VAR_11);

 VAR_15 = -VAR_0;
 VAR_10 = FUNC_3(VAR_9, VAR_11->i_ino);
 if (!VAR_10)
  goto err;
 VAR_13 = 0;
 VAR_12 = (char *)FUNC_0(VAR_10)->table;
 VAR_17 = '/';
 if (*VAR_8 == '/') {
  while (*VAR_8 == '/')
   VAR_8++;
  while (FUNC_1(VAR_9)->s_volume[VAR_13])
   *VAR_12++ = FUNC_1(VAR_9)->s_volume[VAR_13++];
 }
 while (VAR_13 < VAR_14 && (VAR_16 = *VAR_8++)) {
  if (VAR_16 == '.' && VAR_17 == '/' && *VAR_8 == '.' && VAR_8[1] == '/') {
   *VAR_12++ = '/';
   VAR_13++;
   VAR_8 += 2;
   VAR_17 = '/';
  } else if (VAR_16 == '.' && VAR_17 == '/' && *VAR_8 == '/') {
   VAR_8++;
   VAR_17 = '/';
  } else {
   *VAR_12++ = VAR_16;
   VAR_17 = VAR_16;
   VAR_13++;
  }
  if (VAR_17 == '/')
   while (*VAR_8 == '/')
    VAR_8++;
 }
 *VAR_12 = 0;
 FUNC_7(VAR_10, VAR_11);
 FUNC_4(VAR_10);
 FUNC_8(VAR_11);

 VAR_15 = FUNC_2(VAR_6, VAR_11, VAR_7, VAR_2);
 if (VAR_15)
  goto err;

 return 0;

err:
 VAR_11->i_nlink = 0;
 FUNC_8(VAR_11);
 FUNC_6(VAR_11);
 return VAR_15;
}
