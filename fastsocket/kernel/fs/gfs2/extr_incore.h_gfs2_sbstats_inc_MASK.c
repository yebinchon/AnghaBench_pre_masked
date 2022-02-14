
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int sd_lkstats; } ;
struct TYPE_5__ {size_t ln_type; } ;
struct gfs2_glock {TYPE_2__ gl_name; struct gfs2_sbd* gl_sbd; } ;
struct TYPE_6__ {TYPE_1__* lkstats; } ;
struct TYPE_4__ {int * stats; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(const struct gfs2_glock *VAR_0, int VAR_1)
{
 const struct gfs2_sbd *VAR_2 = VAR_0->gl_sbd;
 FUNC_0();
 FUNC_2(VAR_2->sd_lkstats)->lkstats[VAR_0->gl_name.ln_type].stats[VAR_1]++;
 FUNC_1();
}
