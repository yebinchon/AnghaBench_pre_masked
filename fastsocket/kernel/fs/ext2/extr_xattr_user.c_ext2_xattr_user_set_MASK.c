
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,int ,char const*,void const*,size_t,int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_4, const char *VAR_5,
      const void *VAR_6, size_t VAR_7, int VAR_8)
{
 if (FUNC_1(VAR_5, "") == 0)
  return -VAR_0;
 if (!FUNC_2(VAR_4->i_sb, VAR_3))
  return -VAR_1;

 return FUNC_0(VAR_4, VAR_2, VAR_5,
         VAR_6, VAR_7, VAR_8);
}
