
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct TYPE_2__ {int fs_fmask; int fs_dmask; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
struct inode {int i_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(const struct msdos_sb_info *VAR_5,
        struct inode *VAR_6, umode_t *VAR_7)
{
 mode_t VAR_8, VAR_9;






 if (FUNC_0(VAR_6->i_mode))
  VAR_8 = VAR_5->options.fs_fmask;
 else
  VAR_8 = VAR_5->options.fs_dmask;

 VAR_9 = *VAR_7 & ~(VAR_1 | VAR_8);







 if ((VAR_9 & (VAR_2 | VAR_4)) != (VAR_6->i_mode & (VAR_2|VAR_4)))
  return -VAR_0;
 if (FUNC_1(VAR_6)) {
  if ((VAR_9 & VAR_3) && ((VAR_9 & VAR_3) != (VAR_3 & ~VAR_8)))
   return -VAR_0;
 } else {
  if ((VAR_9 & VAR_3) != (VAR_3 & ~VAR_8))
   return -VAR_0;
 }

 *VAR_7 &= VAR_1 | VAR_9;

 return 0;
}
