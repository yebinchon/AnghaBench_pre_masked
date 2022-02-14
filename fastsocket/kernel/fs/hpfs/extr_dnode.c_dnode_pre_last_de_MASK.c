
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpfs_dirent {int dummy; } ;
struct dnode {int dummy; } ;


 struct hpfs_dirent* FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct dnode*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;

__attribute__((used)) static struct hpfs_dirent *FUNC_3(struct dnode *VAR_0)
{
 struct hpfs_dirent *VAR_1, *VAR_2, *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 VAR_2 = FUNC_1(VAR_0);
 for (VAR_1 = FUNC_2(VAR_0); VAR_1 < VAR_2; VAR_1 = FUNC_0(VAR_1)) {
  VAR_4 = VAR_3; VAR_3 = VAR_1;
 }
 return VAR_4;
}
