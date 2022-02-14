
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_8(void *VAR_16, int VAR_17)
{
 char *VAR_18 = VAR_16;

 if (!VAR_3) return;

 FUNC_0("mp3_start_play(%s) @ %i\n", VAR_18, VAR_17);
 FUNC_1(VAR_13);

 if (VAR_6 != VAR_18 || VAR_7 < 0)
 {
  if (VAR_7 >= 0) FUNC_4(VAR_7);
  VAR_7 = FUNC_6(VAR_18, VAR_0, 0777);
  if (VAR_7 < 0) {
   FUNC_0("sceIoOpen(%s) failed\n", VAR_18);
   FUNC_2(VAR_13);
   return;
  }
  VAR_12 = FUNC_5(VAR_7, 0, VAR_1);
  VAR_6 = VAR_18;
 }


 FUNC_3(VAR_5, 0x1002);


 VAR_11 = (int) (((float)VAR_17 / 1023.0f) * (float)VAR_12);
 FUNC_5(VAR_7, VAR_11, VAR_2);
 FUNC_0("seek %i: %i/%i\n", VAR_17, VAR_11, VAR_12);

 VAR_8 = 1;
 VAR_10 = VAR_4 = VAR_9 = 0;
 VAR_15 = 0;


 FUNC_2(VAR_13);
 FUNC_2(VAR_14);
 FUNC_7(1);
}
