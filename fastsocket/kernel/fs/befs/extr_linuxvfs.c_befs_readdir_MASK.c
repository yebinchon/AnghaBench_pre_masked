
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct TYPE_10__ {TYPE_3__* dentry; } ;
struct file {int f_pos; TYPE_4__ f_path; } ;
typedef int ino_t ;
typedef int (* filldir_t ) (void*,char*,size_t,int ,int ,unsigned char) ;
typedef scalar_t__ befs_off_t ;
typedef int befs_data_stream ;
struct TYPE_7__ {int ds; } ;
struct TYPE_12__ {TYPE_1__ i_data; } ;
struct TYPE_11__ {scalar_t__ nls; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_9__ {TYPE_2__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 TYPE_5__* FUNC_1 (struct super_block*) ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct super_block*,int *,int ,int,char*,size_t*,scalar_t__*) ;
 int FUNC_3 (struct super_block*,char*,...) ;
 int FUNC_4 (struct super_block*,char*,char const*,int ) ;
 int FUNC_5 (struct super_block*,char*,size_t,char**,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_6, void *VAR_7, filldir_t VAR_8)
{
 struct inode *VAR_9 = VAR_6->f_path.dentry->d_inode;
 struct super_block *VAR_10 = VAR_9->i_sb;
 befs_data_stream *VAR_11 = &FUNC_0(VAR_9)->i_data.ds;
 befs_off_t VAR_12;
 int VAR_13;
 size_t VAR_14;
 unsigned char VAR_15;
 char VAR_16[VAR_3 + 1];
 char *VAR_17;
 int VAR_18;
 const char *VAR_19 = VAR_6->f_path.dentry->d_name.name;

 FUNC_3(VAR_10, "---> befs_readdir() "
     "name %s, inode %ld, filp->f_pos %Ld",
     VAR_19, VAR_9->i_ino, VAR_6->f_pos);

 VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_6->f_pos, VAR_3 + 1,
     VAR_16, &VAR_14, &VAR_12);

 if (VAR_13 == VAR_2) {
  FUNC_3(VAR_10, "<--- befs_readdir() ERROR");
  FUNC_4(VAR_10, "IO error reading %s (inode %lu)",
      VAR_19, VAR_9->i_ino);
  return -VAR_5;

 } else if (VAR_13 == VAR_1) {
  FUNC_3(VAR_10, "<--- befs_readdir() END");
  return 0;

 } else if (VAR_13 == VAR_0) {
  FUNC_3(VAR_10, "<--- befs_readdir() Empty directory");
  return 0;
 }

 VAR_15 = VAR_4;


 if (FUNC_1(VAR_10)->nls) {
  VAR_13 =
      FUNC_5(VAR_10, VAR_16, VAR_14, &VAR_17, &VAR_18);
  if (VAR_13 < 0) {
   FUNC_3(VAR_10, "<--- befs_readdir() ERROR");
   return VAR_13;
  }
  VAR_13 = VAR_8(VAR_7, VAR_17, VAR_18, VAR_6->f_pos,
     (ino_t) VAR_12, VAR_15);
  FUNC_6(VAR_17);

 } else {
  VAR_13 = VAR_8(VAR_7, VAR_16, VAR_14, VAR_6->f_pos,
     (ino_t) VAR_12, VAR_15);
 }

 VAR_6->f_pos++;

 FUNC_3(VAR_10, "<--- befs_readdir() filp->f_pos %Ld", VAR_6->f_pos);

 return 0;
}
