
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_uid; scalar_t__ i_gid; int i_mode; int i_rdev; int i_sb; } ;
struct hpfs_inode_info {int i_ea_uid; int i_ea_gid; int i_ea_mode; } ;
struct fnode {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {int sb_eas; scalar_t__ sb_uid; scalar_t__ sb_gid; int sb_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct hpfs_inode_info* FUNC_5 (struct inode*) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct fnode*,char*,char*,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_2, struct fnode *VAR_3)
{
 struct hpfs_inode_info *VAR_4 = FUNC_5(VAR_2);




          if (FUNC_6(VAR_2->i_sb)->sb_eas >= 2) {
  __le32 VAR_5;
  if ((VAR_2->i_uid != FUNC_6(VAR_2->i_sb)->sb_uid) || VAR_4->i_ea_uid) {
   VAR_5 = FUNC_4(VAR_2->i_uid);
   FUNC_7(VAR_2, VAR_3, "UID", (char*)&VAR_5, 2);
   VAR_4->i_ea_uid = 1;
  }
  if ((VAR_2->i_gid != FUNC_6(VAR_2->i_sb)->sb_gid) || VAR_4->i_ea_gid) {
   VAR_5 = FUNC_4(VAR_2->i_gid);
   FUNC_7(VAR_2, VAR_3, "GID", (char *)&VAR_5, 2);
   VAR_4->i_ea_gid = 1;
  }
  if (!FUNC_3(VAR_2->i_mode))
   if ((VAR_2->i_mode != ((FUNC_6(VAR_2->i_sb)->sb_mode & ~(FUNC_2(VAR_2->i_mode) ? 0 : 0111))
     | (FUNC_2(VAR_2->i_mode) ? VAR_0 : VAR_1))
     && VAR_2->i_mode != ((FUNC_6(VAR_2->i_sb)->sb_mode & ~(FUNC_2(VAR_2->i_mode) ? 0222 : 0333))
     | (FUNC_2(VAR_2->i_mode) ? VAR_0 : VAR_1))) || VAR_4->i_ea_mode) {
    VAR_5 = FUNC_4(VAR_2->i_mode);

    FUNC_7(VAR_2, VAR_3, "MODE", (char *)&VAR_5, 2);
    VAR_4->i_ea_mode = 1;
   }
  if (FUNC_0(VAR_2->i_mode) || FUNC_1(VAR_2->i_mode)) {
   VAR_5 = FUNC_4(FUNC_8(VAR_2->i_rdev));
   FUNC_7(VAR_2, VAR_3, "DEV", (char *)&VAR_5, 4);
  }
 }
}
