
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

ssize_t FUNC_4(struct dentry *VAR_2, char *VAR_3, size_t VAR_4)
{
 size_t VAR_5 = FUNC_3(VAR_1) + 1;

 if (!FUNC_2(FUNC_0(VAR_2->d_inode)))
  return 0;
 if (VAR_3 && VAR_4 < VAR_5)
  return -VAR_0;
 if (VAR_3)
  FUNC_1(VAR_3, VAR_1, VAR_5);
 return VAR_5;
}
