
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parsed_region_chan_11d {int nr_chan; struct chan_power_11d* chanpwr; } ;
struct chan_power_11d {int chan; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,char*,int) ;

__attribute__((used)) static u8 FUNC_2(u8 VAR_1,
     struct parsed_region_chan_11d * VAR_2)
{
 struct chan_power_11d *VAR_3 = VAR_2->chanpwr;
 u8 VAR_4 = VAR_2->nr_chan;
 u8 VAR_5 = 0;

 FUNC_1(VAR_0, "parsed_region_chan", (char *)VAR_3,
  sizeof(struct chan_power_11d) * VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_1 == VAR_3[VAR_5].chan) {
   FUNC_0("found chan %d\n", VAR_1);
   return 1;
  }
 }

 FUNC_0("chan %d not found\n", VAR_1);
 return 0;
}
