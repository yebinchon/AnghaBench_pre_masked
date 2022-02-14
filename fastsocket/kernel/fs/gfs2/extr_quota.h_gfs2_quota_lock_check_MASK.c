
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ar_quota; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct TYPE_4__ {int i_gid; int i_uid; } ;
struct gfs2_inode {TYPE_2__ i_inode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct gfs2_sbd* FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (struct gfs2_inode*,int ,int ) ;
 int FUNC_2 (struct gfs2_inode*,int ,int ) ;
 int FUNC_3 (struct gfs2_inode*) ;

__attribute__((used)) static inline int FUNC_4(struct gfs2_inode *VAR_3)
{
 struct gfs2_sbd *VAR_4 = FUNC_0(&VAR_3->i_inode);
 int VAR_5;
 if (VAR_4->sd_args.ar_quota == VAR_0)
  return 0;
 VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_2);
 if (VAR_5)
  return VAR_5;
 if (VAR_4->sd_args.ar_quota != VAR_1)
  return 0;
 VAR_5 = FUNC_1(VAR_3, VAR_3->i_inode.i_uid, VAR_3->i_inode.i_gid);
 if (VAR_5)
  FUNC_3(VAR_3);
 return VAR_5;
}
