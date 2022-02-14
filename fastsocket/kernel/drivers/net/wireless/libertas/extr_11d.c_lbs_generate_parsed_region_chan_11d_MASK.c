
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct region_channel {size_t nrcfp; int region; int band; struct chan_freq_power* CFP; } ;
struct parsed_region_chan_11d {size_t nr_chan; TYPE_1__* chanpwr; int band; int region; int countrycode; } ;
struct chan_freq_power {int maxtxpower; int channel; } ;
struct TYPE_2__ {int pwr; int chan; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct region_channel *VAR_1,
       struct parsed_region_chan_11d *
       VAR_2)
{
 u8 VAR_3;
 struct chan_freq_power *VAR_4;

 if (VAR_1 == ((void*)0)) {
  FUNC_1("region_chan is NULL\n");
  return;
 }

 VAR_4 = VAR_1->CFP;
 if (VAR_4 == ((void*)0)) {
  FUNC_1("cfp is NULL \n");
  return;
 }

 VAR_2->band = VAR_1->band;
 VAR_2->region = VAR_1->region;
 FUNC_2(VAR_2->countrycode,
        FUNC_0(VAR_1->region), VAR_0);

 FUNC_1("region 0x%x, band %d\n", VAR_2->region,
        VAR_2->band);

 for (VAR_3 = 0; VAR_3 < VAR_1->nrcfp; VAR_3++, VAR_4++) {
  VAR_2->chanpwr[VAR_3].chan = VAR_4->channel;
  VAR_2->chanpwr[VAR_3].pwr = VAR_4->maxtxpower;
  FUNC_1("chan %d, pwr %d\n",
         VAR_2->chanpwr[VAR_3].chan,
         VAR_2->chanpwr[VAR_3].pwr);
 }
 VAR_2->nr_chan = VAR_1->nrcfp;

 FUNC_1("nrchan %d\n", VAR_2->nr_chan);

 return;
}
