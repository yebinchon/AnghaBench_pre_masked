
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; int s_id; } ;
struct ext4_super_block {int s_state; } ;
typedef int journal_t ;
struct TYPE_2__ {int s_mount_flags; int * s_journal; int s_mount_state; struct ext4_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*,int ,char*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_8)
{
 struct ext4_super_block *VAR_9 = FUNC_0(VAR_8)->s_es;

 FUNC_0(VAR_8)->s_mount_state |= VAR_4;
 VAR_9->s_state |= FUNC_1(VAR_4);

 if (VAR_8->s_flags & VAR_7)
  return;

 if (!FUNC_6(VAR_8, VAR_1)) {
  journal_t *VAR_10 = FUNC_0(VAR_8)->s_journal;

  FUNC_0(VAR_8)->s_mount_flags |= VAR_5;
  if (VAR_10)
   FUNC_4(VAR_10, -VAR_0);
 }
 if (FUNC_6(VAR_8, VAR_3)) {
  FUNC_3(VAR_8, VAR_6, "Remounting filesystem read-only");
  VAR_8->s_flags |= VAR_7;
 }
 FUNC_2(VAR_8, 1);
 if (FUNC_6(VAR_8, VAR_2))
  FUNC_5("EXT4-fs (device %s): panic forced after error\n",
   VAR_8->s_id);
}
