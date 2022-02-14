
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int i_diskflags; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct gfs2_inode *VAR_1)
{
 return VAR_1->i_diskflags & VAR_0;
}
