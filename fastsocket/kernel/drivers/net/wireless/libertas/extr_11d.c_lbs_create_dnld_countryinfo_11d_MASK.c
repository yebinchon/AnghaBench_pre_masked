
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct region_channel {int band; int CFP; int valid; } ;
struct parsed_region_chan_11d {int dummy; } ;
struct TYPE_2__ {int band; } ;
struct lbs_private {int domainreg; int parsed_region_chan; TYPE_1__ curbssparams; struct region_channel* region_channel; scalar_t__ enable11d; } ;
struct lbs_802_11d_domain_reg {int dummy; } ;


 size_t FUNC_0 (struct region_channel*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct region_channel*,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct lbs_private*) ;

int FUNC_8(struct lbs_private *VAR_1)
{
 int VAR_2;
 struct region_channel *VAR_3;
 u8 VAR_4;

 FUNC_3(VAR_0);
 FUNC_2("curbssparams.band %d\n", VAR_1->curbssparams.band);

 if (VAR_1->enable11d) {


  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1->region_channel); VAR_4++) {
   VAR_3 = &VAR_1->region_channel[VAR_4];

   FUNC_2("%d region_chan->band %d\n", VAR_4,
          VAR_3->band);

   if (!VAR_3 || !VAR_3->valid
       || !VAR_3->CFP)
    continue;
   if (VAR_3->band != VAR_1->curbssparams.band)
    continue;
   break;
  }

  if (VAR_4 >= FUNC_0(VAR_1->region_channel)) {
   FUNC_2("region_chan not found, band %d\n",
          VAR_1->curbssparams.band);
   VAR_2 = -1;
   goto done;
  }

  FUNC_6(&VAR_1->parsed_region_chan, 0,
         sizeof(struct parsed_region_chan_11d));
  FUNC_5(VAR_3,
           &VAR_1->
           parsed_region_chan);

  FUNC_6(&VAR_1->domainreg, 0,
         sizeof(struct lbs_802_11d_domain_reg));
  FUNC_1(&VAR_1->parsed_region_chan,
      &VAR_1->domainreg);

  VAR_2 = FUNC_7(VAR_1);

  if (VAR_2) {
   FUNC_2("error setting domain info\n");
   goto done;
  }

 }
 VAR_2 = 0;

done:
 FUNC_4(VAR_0, "ret %d", VAR_2);
 return VAR_2;
}
