
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_freqs {int flags; scalar_t__ old; scalar_t__ new; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_8, struct cpufreq_freqs *VAR_9)
{
 if (VAR_9->flags & VAR_0)
  return;

 if (!VAR_6) {
  VAR_5 = VAR_7;
  VAR_6 = VAR_9->old;
  FUNC_1("saving %lu as reference value for loops_per_jiffy; "
   "freq is %u kHz\n", VAR_5, VAR_6);
 }
 if ((VAR_8 == VAR_2 && VAR_9->old < VAR_9->new) ||
     (VAR_8 == VAR_1 && VAR_9->old > VAR_9->new) ||
     (VAR_8 == VAR_3 || VAR_8 == VAR_4)) {
  VAR_7 = FUNC_0(VAR_5, VAR_6,
        VAR_9->new);
  FUNC_1("scaling loops_per_jiffy to %lu "
   "for frequency %u kHz\n", VAR_7, VAR_9->new);
 }
}
