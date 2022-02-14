
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {scalar_t__* stats; } ;
struct TYPE_3__ {scalar_t__ ln_number; int ln_type; } ;
struct gfs2_glock {TYPE_2__ gl_stats; TYPE_1__ gl_name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct seq_file*,char*,int ,unsigned long long,long long,long long,long long,long long,long long,long long,long long,long long) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_8, void *VAR_9)
{
 struct gfs2_glock *VAR_10 = VAR_9;

 FUNC_0(VAR_8, "G: n:%u/%llx rtt:%lld/%lld rttb:%lld/%lld irt:%lld/%lld dcnt: %lld qcnt: %lld\n",
     VAR_10->gl_name.ln_type,
     (unsigned long long)VAR_10->gl_name.ln_number,
     (long long)VAR_10->gl_stats.stats[VAR_4],
     (long long)VAR_10->gl_stats.stats[VAR_6],
     (long long)VAR_10->gl_stats.stats[VAR_5],
     (long long)VAR_10->gl_stats.stats[VAR_7],
     (long long)VAR_10->gl_stats.stats[VAR_2],
     (long long)VAR_10->gl_stats.stats[VAR_3],
     (long long)VAR_10->gl_stats.stats[VAR_0],
     (long long)VAR_10->gl_stats.stats[VAR_1]);
 return 0;
}
