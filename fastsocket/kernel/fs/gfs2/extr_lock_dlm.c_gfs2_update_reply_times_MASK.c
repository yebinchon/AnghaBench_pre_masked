
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_pcpu_lkstats {int * lkstats; } ;
struct TYPE_4__ {unsigned int ln_type; } ;
struct gfs2_glock {int gl_stats; TYPE_1__* gl_sbd; int gl_dstamp; int gl_flags; TYPE_2__ gl_name; } ;
typedef int s64 ;
struct TYPE_3__ {int sd_lkstats; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int *) ;
 struct gfs2_pcpu_lkstats* FUNC_7 (int ) ;
 int FUNC_8 (struct gfs2_glock*,int ) ;

__attribute__((used)) static inline void FUNC_9(struct gfs2_glock *VAR_3)
{
 struct gfs2_pcpu_lkstats *VAR_4;
 const unsigned VAR_5 = VAR_3->gl_name.ln_type;
 unsigned VAR_6 = FUNC_6(VAR_2, &VAR_3->gl_flags) ?
    VAR_1 : VAR_0;
 s64 VAR_7;

 FUNC_4();
 VAR_7 = FUNC_3(FUNC_2(FUNC_1(), VAR_3->gl_dstamp));
 VAR_4 = FUNC_7(VAR_3->gl_sbd->sd_lkstats);
 FUNC_0(&VAR_3->gl_stats, VAR_6, VAR_7);
 FUNC_0(&VAR_4->lkstats[VAR_5], VAR_6, VAR_7);
 FUNC_5();

 FUNC_8(VAR_3, VAR_7);
}
