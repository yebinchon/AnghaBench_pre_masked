
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hppfs_dirent {int (* filldir ) (int ,char const*,int,int ,int ,unsigned int) ;int vfs_dirent; int dentry; } ;
typedef int loff_t ;


 scalar_t__ FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,char const*,int,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, const char *VAR_1, int VAR_2,
    loff_t VAR_3, u64 VAR_4, unsigned int VAR_5)
{
 struct hppfs_dirent *VAR_6 = VAR_0;

 if (FUNC_0(VAR_6->dentry, VAR_1))
  return 0;

 return (*VAR_6->filldir)(VAR_6->vfs_dirent, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5);
}
