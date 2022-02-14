
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct lbs_private {TYPE_1__* region_channel; } ;
struct chan_freq_power {int dummy; } ;
struct TYPE_2__ {int nrcfp; int valid; void* band; void* region; struct chan_freq_power* CFP; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,void*) ;
 struct chan_freq_power* FUNC_3 (void*,int*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int FUNC_5(struct lbs_private *VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 struct chan_freq_power *VAR_6;
 int VAR_7;

 FUNC_0(VAR_0);

 FUNC_4(VAR_1->region_channel, 0, sizeof(VAR_1->region_channel));

 VAR_6 = FUNC_3(VAR_2, &VAR_7);
 if (VAR_6 != ((void*)0)) {
  VAR_1->region_channel[VAR_5].nrcfp = VAR_7;
  VAR_1->region_channel[VAR_5].CFP = VAR_6;
 } else {
  FUNC_2("wrong region code %#x in band B/G\n",
         VAR_2);
  VAR_4 = -1;
  goto out;
 }
 VAR_1->region_channel[VAR_5].valid = 1;
 VAR_1->region_channel[VAR_5].region = VAR_2;
 VAR_1->region_channel[VAR_5].band = VAR_3;
 VAR_5++;
out:
 FUNC_1(VAR_0, "ret %d", VAR_4);
 return VAR_4;
}
