
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,char*,unsigned int,int ) ;
 int FUNC_2 (int ,unsigned int,int) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const char *VAR_1, struct inode *VAR_2,
     __le32 *VAR_3, unsigned int VAR_4)
{
 __le32 *VAR_5 = VAR_3;
 unsigned int VAR_6;

 while (VAR_5 < VAR_3+VAR_4) {
  VAR_6 = FUNC_3(*VAR_5++);
  if (VAR_6 &&
      FUNC_4(!FUNC_2(FUNC_0(VAR_2->i_sb),
          VAR_6, 1))) {
   FUNC_1(VAR_2->i_sb, VAR_1,
       "invalid block reference %u "
       "in inode #%lu", VAR_6, VAR_2->i_ino);
   return -VAR_0;
  }
 }
 return 0;
}
