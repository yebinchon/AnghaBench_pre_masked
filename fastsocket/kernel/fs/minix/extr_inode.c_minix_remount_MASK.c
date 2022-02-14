
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct minix_super_block {int s_state; } ;
struct minix_sb_info {int s_mount_state; scalar_t__ s_version; int s_sbh; struct minix_super_block* s_ms; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct minix_sb_info* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3 (struct super_block * VAR_4, int * VAR_5, char * VAR_6)
{
 struct minix_sb_info * VAR_7 = FUNC_1(VAR_4);
 struct minix_super_block * VAR_8;

 VAR_8 = VAR_7->s_ms;
 if ((*VAR_5 & VAR_3) == (VAR_4->s_flags & VAR_3))
  return 0;
 if (*VAR_5 & VAR_3) {
  if (VAR_8->s_state & VAR_2 ||
      !(VAR_7->s_mount_state & VAR_2))
   return 0;

  if (VAR_7->s_version != VAR_1)
   VAR_8->s_state = VAR_7->s_mount_state;
  FUNC_0(VAR_7->s_sbh);
 } else {

  if (VAR_7->s_version != VAR_1) {
   VAR_7->s_mount_state = VAR_8->s_state;
   VAR_8->s_state &= ~VAR_2;
  } else {
   VAR_7->s_mount_state = VAR_2;
  }
  FUNC_0(VAR_7->s_sbh);

  if (!(VAR_7->s_mount_state & VAR_2))
   FUNC_2("MINIX-fs warning: remounting unchecked fs, "
    "running fsck is recommended\n");
  else if ((VAR_7->s_mount_state & VAR_0))
   FUNC_2("MINIX-fs warning: remounting fs with errors, "
    "running fsck is recommended\n");
 }
 return 0;
}
