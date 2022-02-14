
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpfs_dirent {int dummy; } ;
struct dnode {scalar_t__ self; } ;
typedef int loff_t ;


 struct hpfs_dirent* FUNC_0 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_1 (struct dnode*) ;
 struct hpfs_dirent* FUNC_2 (struct dnode*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static loff_t FUNC_4(struct dnode *VAR_0, struct hpfs_dirent *VAR_1)
{
 struct hpfs_dirent *VAR_2;
 struct hpfs_dirent *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = 1;
 for (VAR_2 = FUNC_2(VAR_0); VAR_2 < VAR_3; VAR_2 = FUNC_0(VAR_2)) {
  if (VAR_2 == VAR_1) return ((loff_t) VAR_0->self << 4) | (loff_t)VAR_4;
  VAR_4++;
 }
 FUNC_3("HPFS: get_pos: not_found\n");
 return ((loff_t)VAR_0->self << 4) | (loff_t)1;
}
