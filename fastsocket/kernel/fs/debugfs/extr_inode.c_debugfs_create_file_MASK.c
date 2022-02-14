
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,struct dentry*,struct dentry**,void*,struct file_operations const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;

struct dentry *FUNC_4(const char *VAR_3, mode_t VAR_4,
       struct dentry *VAR_5, void *VAR_6,
       const struct file_operations *VAR_7)
{
 struct dentry *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_1("debugfs: creating file '%s'\n",VAR_3);

 VAR_9 = FUNC_2(&VAR_0, &VAR_1,
         &VAR_2);
 if (VAR_9)
  goto exit;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_8,
           VAR_6, VAR_7);
 if (VAR_9) {
  VAR_8 = ((void*)0);
  FUNC_3(&VAR_1, &VAR_2);
  goto exit;
 }
exit:
 return VAR_8;
}
