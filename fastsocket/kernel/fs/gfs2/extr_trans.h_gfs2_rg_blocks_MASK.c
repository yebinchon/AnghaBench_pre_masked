
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {TYPE_1__* i_rgd; } ;
struct TYPE_2__ {unsigned int rd_length; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct gfs2_inode *VAR_0,
       unsigned VAR_1)
{
 if (VAR_1 < VAR_0->i_rgd->rd_length)
  return VAR_1 + 1;
 return VAR_0->i_rgd->rd_length;
}
