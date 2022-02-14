
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_sb; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,char*,int ,unsigned long long,unsigned long long,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, const char *VAR_2,
    sector_t VAR_3, sector_t VAR_4, int VAR_5)
{
 if (!FUNC_2(FUNC_0(VAR_1->i_sb), VAR_4, VAR_5)) {
  FUNC_1(VAR_1->i_sb, VAR_2,
      "inode #%lu logical block %llu mapped to %llu "
      "(size %d)", VAR_1->i_ino,
      (unsigned long long) VAR_3,
      (unsigned long long) VAR_4, VAR_5);
  return -VAR_0;
 }
 return 0;
}
