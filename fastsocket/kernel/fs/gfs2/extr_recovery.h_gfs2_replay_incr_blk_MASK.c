
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_sbd {TYPE_1__* sd_jdesc; } ;
struct TYPE_2__ {unsigned int jd_blocks; } ;



__attribute__((used)) static inline void FUNC_0(struct gfs2_sbd *VAR_0, unsigned int *VAR_1)
{
 if (++*VAR_1 == VAR_0->sd_jdesc->jd_blocks)
         *VAR_1 = 0;
}
