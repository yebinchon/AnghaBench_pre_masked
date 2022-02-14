
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*) ;

int FUNC_2(int *VAR_4, char *VAR_5[])
{
 int VAR_6, VAR_7;
 for (VAR_6 = VAR_7 = 1; VAR_6 < *VAR_4; VAR_6++) {
  if (FUNC_1(VAR_5[VAR_6], "-voicebox") == 0) {
   VAR_2 = VAR_1;
   VAR_3 = VAR_0;
  }
  else if (FUNC_1(VAR_5[VAR_6], "-voiceboxii") == 0){
   VAR_2 = VAR_1;
   VAR_3 = VAR_1;
  }
  else {
    if (FUNC_1(VAR_5[VAR_6], "-help") == 0) {
    FUNC_0("\t-voicebox        Emulate the Alien Group Voice Box I");
    FUNC_0("\t-voiceboxii      Emulate the Alien Group Voice Box II");
   }

   VAR_5[VAR_7++] = VAR_5[VAR_6];
  }

 }
 *VAR_4 = VAR_7;

 return VAR_1;
}
