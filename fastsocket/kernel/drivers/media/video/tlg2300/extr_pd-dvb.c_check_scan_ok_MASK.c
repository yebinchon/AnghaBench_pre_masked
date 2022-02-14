
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_dvb_adapter {scalar_t__ prev_freq; int bandwidth; long last_jiffies; } ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (long) ;
 long VAR_0 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(__u32 VAR_1, int VAR_2,
   struct pd_dvb_adapter *VAR_3)
{
 if (VAR_2 < 0)
  return 0;

 if (VAR_3->prev_freq == VAR_1
  && VAR_3->bandwidth == VAR_2) {
  long VAR_4 = VAR_0 - VAR_3->last_jiffies;
  unsigned int VAR_5 ;

  VAR_5 = FUNC_1(FUNC_0(VAR_4));
  return VAR_5 > 15000 ? 1 : 0;
 }
 return 1;
}
