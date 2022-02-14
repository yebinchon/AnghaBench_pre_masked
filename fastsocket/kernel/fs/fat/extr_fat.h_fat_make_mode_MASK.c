
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int fs_dmask; int fs_fmask; int rodir; } ;
struct msdos_sb_info {TYPE_1__ options; } ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline mode_t FUNC_0(struct msdos_sb_info *VAR_5,
       u8 VAR_6, mode_t VAR_7)
{
 if (VAR_6 & VAR_1 && !((VAR_6 & VAR_0) && !VAR_5->options.rodir))
  VAR_7 &= ~VAR_4;

 if (VAR_6 & VAR_0)
  return (VAR_7 & ~VAR_5->options.fs_dmask) | VAR_2;
 else
  return (VAR_7 & ~VAR_5->options.fs_fmask) | VAR_3;
}
