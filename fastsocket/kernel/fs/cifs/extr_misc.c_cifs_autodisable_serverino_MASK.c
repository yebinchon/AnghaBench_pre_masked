
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cifs_sb_info {int mnt_cifs_flags; } ;
struct TYPE_2__ {int treeName; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_1__* FUNC_1 (struct cifs_sb_info*) ;

void
FUNC_2(struct cifs_sb_info *VAR_1)
{
 if (VAR_1->mnt_cifs_flags & VAR_0) {
  VAR_1->mnt_cifs_flags &= ~VAR_0;
  FUNC_0(1, "Autodisabling the use of server inode numbers on "
      "%s. This server doesn't seem to support them "
      "properly. Hardlinks will not be recognized on this "
      "mount. Consider mounting with the \"noserverino\" "
      "option to silence this message.",
      FUNC_1(VAR_1)->treeName);
 }
}
