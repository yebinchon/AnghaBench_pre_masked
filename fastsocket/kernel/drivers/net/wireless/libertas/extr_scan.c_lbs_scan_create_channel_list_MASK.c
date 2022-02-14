
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct region_channel {int nrcfp; scalar_t__ band; struct chan_freq_power* CFP; int valid; } ;
struct lbs_private {scalar_t__ connect_status; scalar_t__ mesh_connect_status; int parsed_region_chan; scalar_t__ enable11d; struct region_channel* region_channel; struct region_channel* universal_channel; } ;
struct TYPE_2__ {int passivescan; } ;
struct chanscanparamset {int channumber; TYPE_1__ chanscanmode; void* maxscantime; int radiotype; } ;
struct chan_freq_power {int channel; } ;


 int FUNC_0 (struct region_channel*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int,int) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_8,
     struct chanscanparamset *VAR_9)
{
 struct region_channel *VAR_10;
 struct chan_freq_power *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 uint8_t VAR_15;

 VAR_13 = 0;





 VAR_15 = VAR_3;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8->region_channel); VAR_12++) {
  if (VAR_8->enable11d && (VAR_8->connect_status != VAR_5)
      && (VAR_8->mesh_connect_status != VAR_5)) {

   if (!VAR_8->universal_channel[VAR_12].valid)
    continue;
   VAR_10 = &VAR_8->universal_channel[VAR_12];


   FUNC_3(&VAR_8->parsed_region_chan, 0x00,
          sizeof(VAR_8->parsed_region_chan));
  } else {
   if (!VAR_8->region_channel[VAR_12].valid)
    continue;
   VAR_10 = &VAR_8->region_channel[VAR_12];
  }

  for (VAR_14 = 0; VAR_14 < VAR_10->nrcfp; VAR_14++, VAR_13++) {
   struct chanscanparamset *VAR_16 = &VAR_9[VAR_13];

   VAR_11 = VAR_10->CFP + VAR_14;

   if (VAR_8->enable11d)
    VAR_15 = FUNC_2(VAR_11->channel,
         &VAR_8->parsed_region_chan);

   if (VAR_10->band == VAR_0 || VAR_10->band == VAR_1)
    VAR_16->radiotype = VAR_2;

   if (VAR_15 == VAR_4) {
    VAR_16->maxscantime = FUNC_1(VAR_7);
    VAR_16->chanscanmode.passivescan = 1;
   } else {
    VAR_16->maxscantime = FUNC_1(VAR_6);
    VAR_16->chanscanmode.passivescan = 0;
   }

   VAR_16->channumber = VAR_11->channel;
  }
 }
 return VAR_13;
}
