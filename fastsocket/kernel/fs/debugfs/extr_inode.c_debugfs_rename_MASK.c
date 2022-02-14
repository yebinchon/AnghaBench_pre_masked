
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct dentry {TYPE_2__* d_inode; TYPE_1__ d_name; } ;
struct TYPE_7__ {int i_mode; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,char const*,int ,int ,int *,struct dentry*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (int ) ;
 struct dentry* FUNC_8 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_9 (char const*,struct dentry*,int ) ;
 int FUNC_10 (TYPE_2__*,struct dentry*,TYPE_2__*,struct dentry*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (struct dentry*,struct dentry*) ;

struct dentry *FUNC_13(struct dentry *VAR_0, struct dentry *VAR_1,
  struct dentry *VAR_2, const char *VAR_3)
{
 int VAR_4;
 struct dentry *VAR_5 = ((void*)0), *VAR_6;
 const char *VAR_7;

 VAR_6 = FUNC_8(VAR_2, VAR_0);

 if (!VAR_0->d_inode || !VAR_2->d_inode)
  goto exit;

 if (!VAR_1->d_inode || VAR_1 == VAR_6 ||
     FUNC_2(VAR_1))
  goto exit;
 VAR_5 = FUNC_9(VAR_3, VAR_2, FUNC_11(VAR_3));

 if (FUNC_0(VAR_5) || VAR_5 == VAR_6 || VAR_5->d_inode)
  goto exit;

 VAR_7 = FUNC_7(VAR_1->d_name.name);

 VAR_4 = FUNC_10(VAR_0->d_inode, VAR_1, VAR_2->d_inode,
  VAR_5);
 if (VAR_4) {
  FUNC_6(VAR_7);
  goto exit;
 }
 FUNC_3(VAR_1, VAR_5);
 FUNC_5(VAR_0->d_inode, VAR_2->d_inode, VAR_7,
  VAR_1->d_name.name, FUNC_1(VAR_1->d_inode->i_mode),
  ((void*)0), VAR_1);
 FUNC_6(VAR_7);
 FUNC_12(VAR_2, VAR_0);
 FUNC_4(VAR_5);
 return VAR_1;
exit:
 if (VAR_5 && !FUNC_0(VAR_5))
  FUNC_4(VAR_5);
 FUNC_12(VAR_2, VAR_0);
 return ((void*)0);
}
