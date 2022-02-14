
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mode; scalar_t__ i_uid; int i_gid; } ;
struct TYPE_6__ {int i_mode; scalar_t__ i_uid; int i_gid; } ;
struct gfs2_inode {TYPE_3__ i_inode; } ;
struct TYPE_4__ {scalar_t__ ar_suiddir; } ;
struct TYPE_5__ {TYPE_1__ sd_args; } ;


 TYPE_2__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4(const struct gfs2_inode *VAR_2,
          struct inode *VAR_3)
{
 if (FUNC_0(&VAR_2->i_inode)->sd_args.ar_suiddir &&
     (VAR_2->i_inode.i_mode & VAR_1) && VAR_2->i_inode.i_uid) {
  if (FUNC_1(VAR_3->i_mode))
   VAR_3->i_mode |= VAR_1;
  else if (VAR_2->i_inode.i_uid != FUNC_3())
   VAR_3->i_mode &= ~07111;
  VAR_3->i_uid = VAR_2->i_inode.i_uid;
 } else
  VAR_3->i_uid = FUNC_3();

 if (VAR_2->i_inode.i_mode & VAR_0) {
  if (FUNC_1(VAR_3->i_mode))
   VAR_3->i_mode |= VAR_0;
  VAR_3->i_gid = VAR_2->i_inode.i_gid;
 } else
  VAR_3->i_gid = FUNC_2();
}
