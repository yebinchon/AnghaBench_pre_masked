
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(int *VAR_3, char *VAR_4[])
{
 int VAR_5;
 int VAR_6;
 for (VAR_5 = VAR_6 = 1; VAR_5 < *VAR_3; VAR_5++) {
  if (FUNC_1(VAR_4[VAR_5], "-rtime") == 0)
   VAR_1 = VAR_2;
  else if (FUNC_1(VAR_4[VAR_5], "-nortime") == 0)
   VAR_1 = VAR_0;
  else {
   if (FUNC_1(VAR_4[VAR_5], "-help") == 0) {
    FUNC_0("\t-rtime           Enable R-Time 8 emulation");
    FUNC_0("\t-nortime         Disable R-Time 8 emulation");
   }
   VAR_4[VAR_6++] = VAR_4[VAR_5];
  }
 }
 *VAR_3 = VAR_6;

 return VAR_2;
}
