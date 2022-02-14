
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct inode {int i_mode; scalar_t__ i_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(struct inode *VAR_2, struct inode *VAR_3)
{
 uid_t VAR_4 = FUNC_1();

 if (!(VAR_2->i_mode & VAR_1))
  return 0;
 if (VAR_3->i_uid == VAR_4)
  return 0;
 if (VAR_2->i_uid == VAR_4)
  return 0;
 return !FUNC_0(VAR_0);
}
