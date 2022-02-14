
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct chan_freq_power {int dummy; } ;
struct TYPE_3__ {scalar_t__ region; int cfp_no_BG; struct chan_freq_power* cfp_BG; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,scalar_t__) ;
 TYPE_1__* VAR_1 ;

struct chan_freq_power *FUNC_5(u8 VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1(VAR_0);

 VAR_5 = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_5 ; VAR_4++) {
  FUNC_4("region_cfp_table[i].region=%d\n",
   VAR_1[VAR_4].region);
  if (VAR_1[VAR_4].region == VAR_2) {
   *VAR_3 = VAR_1[VAR_4].cfp_no_BG;
   FUNC_2(VAR_0);
   return VAR_1[VAR_4].cfp_BG;
  }
 }

 FUNC_3(VAR_0, "ret NULL");
 return ((void*)0);
}
