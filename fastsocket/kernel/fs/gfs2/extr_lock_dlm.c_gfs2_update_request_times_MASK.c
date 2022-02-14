
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_pcpu_lkstats {int * lkstats; } ;
struct TYPE_4__ {unsigned int ln_type; } ;
struct gfs2_glock {int gl_stats; TYPE_1__* gl_sbd; int gl_dstamp; TYPE_2__ gl_name; } ;
typedef int s64 ;
typedef int ktime_t ;
struct TYPE_3__ {int sd_lkstats; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct gfs2_pcpu_lkstats* FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct gfs2_glock *VAR_1)
{
 struct gfs2_pcpu_lkstats *VAR_2;
 const unsigned VAR_3 = VAR_1->gl_name.ln_type;
 ktime_t VAR_4;
 s64 VAR_5;

 FUNC_4();
 VAR_4 = VAR_1->gl_dstamp;
 VAR_1->gl_dstamp = FUNC_1();
 VAR_5 = FUNC_3(FUNC_2(VAR_1->gl_dstamp, VAR_4));
 VAR_2 = FUNC_6(VAR_1->gl_sbd->sd_lkstats);
 FUNC_0(&VAR_1->gl_stats, VAR_0, VAR_5);
 FUNC_0(&VAR_2->lkstats[VAR_3], VAR_0, VAR_5);
 FUNC_5();
}
