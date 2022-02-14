
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int allow_utime; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct inode {scalar_t__ i_uid; int i_gid; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct msdos_sb_info *VAR_1, struct inode *VAR_2)
{
 mode_t VAR_3 = VAR_1->options.allow_utime;

 if (FUNC_0() != VAR_2->i_uid) {
  if (FUNC_1(VAR_2->i_gid))
   VAR_3 >>= 3;
  if (VAR_3 & VAR_0)
   return 1;
 }


 return 0;
}
