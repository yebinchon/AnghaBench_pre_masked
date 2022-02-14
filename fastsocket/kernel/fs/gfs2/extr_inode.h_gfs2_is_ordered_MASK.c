
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ar_data; } ;
struct gfs2_sbd {TYPE_1__ sd_args; } ;
struct gfs2_inode {int i_inode; } ;


 scalar_t__ VAR_0 ;
 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_inode const*) ;

__attribute__((used)) static inline int FUNC_2(const struct gfs2_inode *VAR_1)
{
 const struct gfs2_sbd *VAR_2 = FUNC_0(&VAR_1->i_inode);
 return (VAR_2->sd_args.ar_data == VAR_0) && !FUNC_1(VAR_1);
}
