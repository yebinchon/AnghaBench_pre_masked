
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_flags; int i_gid; int i_uid; int i_mode; } ;
struct hfsplus_perm {void* dev; void* group; void* owner; int mode; int userflags; int rootflags; } ;
struct TYPE_2__ {int dev; int userflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_4, struct hfsplus_perm *VAR_5)
{
 if (VAR_4->i_flags & VAR_3)
  VAR_5->rootflags |= VAR_1;
 else
  VAR_5->rootflags &= ~VAR_1;
 if (VAR_4->i_flags & VAR_2)
  VAR_5->rootflags |= VAR_0;
 else
  VAR_5->rootflags &= ~VAR_0;
 VAR_5->userflags = FUNC_0(VAR_4).userflags;
 VAR_5->mode = FUNC_1(VAR_4->i_mode);
 VAR_5->owner = FUNC_2(VAR_4->i_uid);
 VAR_5->group = FUNC_2(VAR_4->i_gid);
 VAR_5->dev = FUNC_2(FUNC_0(VAR_4).dev);
}
