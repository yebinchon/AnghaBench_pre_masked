
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dentry; } ;
struct nameidata {TYPE_4__ path; } ;
struct dentry {int dummy; } ;
struct TYPE_8__ {int i_mutex; } ;
struct TYPE_7__ {int mnt_root; } ;
struct TYPE_6__ {TYPE_3__* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int ) ;
 struct dentry* FUNC_5 (struct nameidata*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_4__*) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (TYPE_3__*,struct dentry*,int) ;
 int FUNC_10 (int ,TYPE_2__*,char*,int ,struct nameidata*) ;

__attribute__((used)) static int FUNC_11(const char *VAR_6)
{
 char *VAR_7;
 struct nameidata VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_4(VAR_6, VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_10(VAR_5->mnt_root, VAR_5,
         VAR_7, VAR_4, &VAR_8);
 if (VAR_9 == 0) {
  struct dentry *VAR_10;


  VAR_10 = FUNC_5(&VAR_8, 1);
  if (!FUNC_0(VAR_10)) {
   VAR_9 = FUNC_9(VAR_8.path.dentry->d_inode,
     VAR_10, 0755);
   FUNC_2(VAR_10);
  }
  FUNC_6(&VAR_8.path.dentry->d_inode->i_mutex);

  FUNC_7(&VAR_8.path);
 } else if (VAR_9 == -VAR_1) {
  char *VAR_11;


  VAR_11 = VAR_7;
  while (1) {
   VAR_11 = FUNC_8(VAR_11, '/');
   if (!VAR_11)
    break;
   VAR_11[0] = '\0';
   VAR_9 = FUNC_1(VAR_7, 0755);
   if (VAR_9 && VAR_9 != -VAR_0)
    break;
   VAR_11[0] = '/';
   VAR_11++;
  }
 }

 FUNC_3(VAR_7);
 return VAR_9;
}
