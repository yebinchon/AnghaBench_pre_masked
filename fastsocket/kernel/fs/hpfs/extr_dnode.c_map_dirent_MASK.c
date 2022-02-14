
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct quad_buffer_head {int dummy; } ;
struct inode {int i_sb; int i_mode; } ;
struct hpfs_dirent {scalar_t__ down; int last; int namelen; int name; } ;
struct dnode {int dummy; } ;
typedef int dnode_secno ;
struct TYPE_2__ {scalar_t__ sb_chk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_2 (struct hpfs_dirent*) ;
 struct hpfs_dirent* FUNC_3 (struct dnode*) ;
 struct hpfs_dirent* FUNC_4 (struct dnode*) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 int FUNC_6 (int ,char*,unsigned int,int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;
 struct dnode* FUNC_8 (int ,int ,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int*,int*,char*) ;

struct hpfs_dirent *FUNC_11(struct inode *VAR_0, dnode_secno VAR_1, char *VAR_2, unsigned VAR_3,
          dnode_secno *VAR_4, struct quad_buffer_head *VAR_5)
{
 struct dnode *VAR_6;
 struct hpfs_dirent *VAR_7;
 struct hpfs_dirent *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (!FUNC_0(VAR_0->i_mode)) FUNC_7(VAR_0->i_sb, "map_dirent: not a directory\n");
 again:
 if (FUNC_9(VAR_0->i_sb)->sb_chk)
  if (FUNC_10(VAR_0->i_sb, VAR_1, &VAR_9, &VAR_10, "map_dirent")) return ((void*)0);
 if (!(VAR_6 = FUNC_8(VAR_0->i_sb, VAR_1, VAR_5))) return ((void*)0);

 VAR_8 = FUNC_3(VAR_6);
 for (VAR_7 = FUNC_4(VAR_6); VAR_7 < VAR_8; VAR_7 = FUNC_2(VAR_7)) {
  int VAR_11 = FUNC_6(VAR_0->i_sb, VAR_2, VAR_3, VAR_7->name, VAR_7->namelen, VAR_7->last);
  if (!VAR_11) {
   if (VAR_4) *VAR_4 = VAR_1;
   return VAR_7;
  }
  if (VAR_11 < 0) {
   if (VAR_7->down) {
    VAR_1 = FUNC_1(VAR_7);
    FUNC_5(VAR_5);
    goto again;
   }
  break;
  }
 }
 FUNC_5(VAR_5);
 return ((void*)0);
}
