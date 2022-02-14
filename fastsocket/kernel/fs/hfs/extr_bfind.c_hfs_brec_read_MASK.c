
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfs_find_data {int entrylength; int entryoffset; int bnode; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,int ,int) ;
 int FUNC_1 (struct hfs_find_data*) ;

int FUNC_2(struct hfs_find_data *VAR_1, void *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4)
  return VAR_4;
 if (VAR_1->entrylength > VAR_3)
  return -VAR_0;
 FUNC_0(VAR_1->bnode, VAR_2, VAR_1->entryoffset, VAR_1->entrylength);
 return 0;
}
