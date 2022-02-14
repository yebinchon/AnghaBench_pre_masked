
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int time_s ;
struct tm {int dummy; } ;
struct TYPE_2__ {int EmuOpt; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned short* VAR_2 ;
 int VAR_3 ;
 struct tm* FUNC_0 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int,char*,struct tm*) ;
 int FUNC_3 (int,int,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void)
{
 static time_t VAR_7 = 0;
 static int VAR_8 = -1;
 unsigned short *VAR_9 = VAR_2;
 int VAR_10 = VAR_4 * 2 / 3;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct tm *VAR_16;
 time_t VAR_17;
 char VAR_18[16];

 if (!(VAR_1.EmuOpt & VAR_0))
  return;

 VAR_17 = FUNC_4(((void*)0));
 VAR_16 = FUNC_0(&VAR_17);
 FUNC_2(VAR_18, sizeof(VAR_18), "%H:%M", VAR_16);

 FUNC_3(VAR_3 - VAR_5 * 6, VAR_4 + 2, VAR_18);

 if (VAR_17 - VAR_7 > 10) {
  VAR_7 = VAR_17;
  VAR_8 = VAR_15 = FUNC_1();
 }
 else
  VAR_15 = VAR_8;

 if (VAR_15 < 0 || VAR_15 > 100)
  return;


 VAR_9 += (VAR_4 * 2 + 2) * VAR_3 + VAR_3 - VAR_5 * 3 - 3;
 for (VAR_11 = 0; VAR_11 < VAR_5 * 2; VAR_11++)
  VAR_9[VAR_11] = VAR_6;
 for (VAR_11 = 0; VAR_11 < VAR_5 * 2; VAR_11++)
  VAR_9[VAR_11 + VAR_3 * VAR_10] = VAR_6;
 for (VAR_11 = 0; VAR_11 <= VAR_10; VAR_11++)
  VAR_9[VAR_11 * VAR_3] =
  VAR_9[VAR_11 * VAR_3 + VAR_5 * 2] = VAR_6;
 for (VAR_11 = 2; VAR_11 < VAR_10 - 1; VAR_11++)
  VAR_9[VAR_11 * VAR_3 - 1] =
  VAR_9[VAR_11 * VAR_3 - 2] = VAR_6;

 VAR_13 = VAR_5 * 2 - 1;
 VAR_14 = VAR_15 * VAR_13 / 100;
 for (VAR_12 = 1; VAR_12 < VAR_10; VAR_12++)
  for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++)
   VAR_9[(VAR_13 - VAR_11) + VAR_3 * VAR_12] = VAR_6;
}
