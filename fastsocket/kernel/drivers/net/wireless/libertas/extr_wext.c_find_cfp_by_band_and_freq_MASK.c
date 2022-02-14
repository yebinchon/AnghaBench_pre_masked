
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct region_channel {scalar_t__ band; int nrcfp; struct chan_freq_power* CFP; int valid; } ;
struct lbs_private {struct region_channel* universal_channel; scalar_t__ enable11d; struct region_channel* region_channel; } ;
struct chan_freq_power {scalar_t__ freq; } ;


 int FUNC_0 (struct region_channel*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct chan_freq_power *FUNC_2(
 struct lbs_private *VAR_0,
 u8 VAR_1,
 u32 VAR_2)
{
 struct chan_freq_power *VAR_3 = ((void*)0);
 struct region_channel *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; !VAR_3 && (VAR_6 < FUNC_0(VAR_0->region_channel)); VAR_6++) {
  VAR_4 = &VAR_0->region_channel[VAR_6];

  if (VAR_0->enable11d)
   VAR_4 = &VAR_0->universal_channel[VAR_6];
  if (!VAR_4->valid || !VAR_4->CFP)
   continue;
  if (VAR_4->band != VAR_1)
   continue;
  for (VAR_5 = 0; VAR_5 < VAR_4->nrcfp; VAR_5++) {
   if (VAR_4->CFP[VAR_5].freq == VAR_2) {
    VAR_3 = &VAR_4->CFP[VAR_5];
    break;
   }
  }
 }

 if (!VAR_3 && VAR_2)
  FUNC_1("find_cfp_by_band_and_freql: can't find cfp by "
         "band %d / freq %d\n", VAR_1, VAR_2);

 return VAR_3;
}
