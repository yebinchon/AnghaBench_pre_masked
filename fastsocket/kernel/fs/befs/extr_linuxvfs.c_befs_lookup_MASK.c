
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nameidata {int dummy; } ;
struct inode {struct super_block* i_sb; int i_ino; } ;
struct TYPE_6__ {char* name; } ;
struct dentry {TYPE_2__ d_name; } ;
typedef int ino_t ;
typedef scalar_t__ befs_off_t ;
typedef int befs_data_stream ;
struct TYPE_5__ {int ds; } ;
struct TYPE_8__ {TYPE_1__ i_data; } ;
struct TYPE_7__ {scalar_t__ nls; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct dentry* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct super_block*,int *,char*,scalar_t__*) ;
 int FUNC_6 (struct super_block*,char*,...) ;
 struct inode* FUNC_7 (struct super_block*,int ) ;
 int FUNC_8 (struct super_block*,char const*,int ,char**,int*) ;
 int FUNC_9 (struct super_block*,char*) ;
 int FUNC_10 (struct dentry*,struct inode*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char const*) ;

__attribute__((used)) static struct dentry *
FUNC_13(struct inode *VAR_4, struct dentry *VAR_5, struct nameidata *VAR_6)
{
 struct inode *VAR_7 = ((void*)0);
 struct super_block *VAR_8 = VAR_4->i_sb;
 befs_data_stream *VAR_9 = &FUNC_0(VAR_4)->i_data.ds;
 befs_off_t VAR_10;
 int VAR_11;
 int VAR_12;
 char *VAR_13;
 const char *VAR_14 = VAR_5->d_name.name;

 FUNC_6(VAR_8, "---> befs_lookup() "
     "name %s inode %ld", VAR_5->d_name.name, VAR_4->i_ino);


 if (FUNC_1(VAR_8)->nls) {
  VAR_11 =
      FUNC_8(VAR_8, VAR_14, FUNC_12(VAR_14), &VAR_13, &VAR_12);
  if (VAR_11 < 0) {
   FUNC_6(VAR_8, "<--- befs_lookup() ERROR");
   return FUNC_3(VAR_11);
  }
  VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_13, &VAR_10);
  FUNC_11(VAR_13);

 } else {
  VAR_11 = FUNC_5(VAR_8, VAR_9, VAR_5->d_name.name, &VAR_10);
 }

 if (VAR_11 == VAR_0) {
  FUNC_6(VAR_8, "<--- befs_lookup() %s not found",
      VAR_5->d_name.name);
  return FUNC_3(-VAR_3);

 } else if (VAR_11 != VAR_1 || VAR_10 == 0) {
  FUNC_9(VAR_8, "<--- befs_lookup() Error");
  return FUNC_3(-VAR_2);
 }

 VAR_7 = FUNC_7(VAR_4->i_sb, (ino_t) VAR_10);
 if (FUNC_4(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_10(VAR_5, VAR_7);

 FUNC_6(VAR_8, "<--- befs_lookup()");

 return ((void*)0);
}
