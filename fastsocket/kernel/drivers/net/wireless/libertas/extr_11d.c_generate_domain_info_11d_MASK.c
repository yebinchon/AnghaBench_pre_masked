
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct parsed_region_chan_11d {size_t nr_chan; TYPE_1__* chanpwr; int countrycode; } ;
struct lbs_802_11d_domain_reg {size_t nr_subband; TYPE_2__* subband; int countrycode; } ;
struct ieee_subbandset {int dummy; } ;
struct TYPE_4__ {size_t firstchan; size_t nrchan; size_t maxtxpwr; } ;
struct TYPE_3__ {size_t chan; size_t pwr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct parsed_region_chan_11d
      *VAR_2,
      struct lbs_802_11d_domain_reg *VAR_3)
{
 u8 VAR_4 = 0;

 u8 VAR_5 = VAR_2->nr_chan;
 u8 VAR_6 = 0;

 u8 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

 u8 VAR_10, VAR_11 = 0;

 FUNC_2(VAR_3->countrycode, VAR_2->countrycode,
        VAR_0);

 FUNC_0("nrchan %d\n", VAR_5);
 FUNC_1(VAR_1, "parsed_region_chan", (char *)VAR_2,
  sizeof(struct parsed_region_chan_11d));

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (!VAR_11) {
   VAR_11 = 1;
   VAR_8 = VAR_7 =
       VAR_2->chanpwr[VAR_10].chan;
   VAR_9 = VAR_2->chanpwr[VAR_10].pwr;
   VAR_6 = 1;
   continue;
  }

  if (VAR_2->chanpwr[VAR_10].chan == VAR_8 + 1 &&
      VAR_2->chanpwr[VAR_10].pwr == VAR_9) {
   VAR_8++;
   VAR_6++;
  } else {
   VAR_3->subband[VAR_4].firstchan = VAR_7;
   VAR_3->subband[VAR_4].nrchan =
       VAR_6;
   VAR_3->subband[VAR_4].maxtxpwr = VAR_9;
   VAR_4++;
   VAR_8 = VAR_7 =
       VAR_2->chanpwr[VAR_10].chan;
   VAR_9 = VAR_2->chanpwr[VAR_10].pwr;
  }
 }

 if (VAR_11) {
  VAR_3->subband[VAR_4].firstchan = VAR_7;
  VAR_3->subband[VAR_4].nrchan = VAR_6;
  VAR_3->subband[VAR_4].maxtxpwr = VAR_9;
  VAR_4++;
 }
 VAR_3->nr_subband = VAR_4;

 FUNC_0("nr_subband=%x\n", VAR_3->nr_subband);
 FUNC_1(VAR_1, "domaininfo", (char *)VAR_3,
  VAR_0 + 1 +
  sizeof(struct ieee_subbandset) * VAR_4);
 return 0;
}
