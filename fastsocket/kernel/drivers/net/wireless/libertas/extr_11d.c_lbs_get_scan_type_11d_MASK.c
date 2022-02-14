
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parsed_region_chan_11d {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct parsed_region_chan_11d*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;

u8 FUNC_4(u8 VAR_3,
     struct parsed_region_chan_11d * VAR_4)
{
 u8 VAR_5 = VAR_1;

 FUNC_2(VAR_2);

 if (FUNC_0(VAR_3, VAR_4)) {
  FUNC_1("found, do active scan\n");
  VAR_5 = VAR_0;
 } else {
  FUNC_1("not found, do passive scan\n");
 }

 FUNC_3(VAR_2, "ret scan_type %d", VAR_5);
 return VAR_5;

}
