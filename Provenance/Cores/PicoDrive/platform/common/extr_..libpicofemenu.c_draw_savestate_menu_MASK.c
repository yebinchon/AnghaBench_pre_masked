
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int time_buf ;
struct tm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct tm* FUNC_1 (scalar_t__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int) ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,struct tm*) ;
 int FUNC_7 (int,int,char*,...) ;

__attribute__((used)) static void FUNC_8(int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 char VAR_14[32];

 if (VAR_5 & (1 << VAR_7))
  FUNC_0(VAR_7);

 VAR_12 = (13 + 2) * VAR_4;
 VAR_13 = (1+2+VAR_0+1) * VAR_3;
 VAR_10 = VAR_2 / 2 - VAR_12 / 2;
 if (VAR_10 < 0) VAR_10 = 0;
 VAR_11 = VAR_1 / 2 - VAR_13 / 2;
 if (VAR_11 < 0) VAR_11 = 0;





 FUNC_2(1, 1);

 FUNC_7(VAR_10, VAR_11, VAR_8 ? "Load state" : "Save state");
 VAR_11 += 3 * VAR_3;

 FUNC_4(VAR_10 - VAR_4 * 2, VAR_11 + VAR_7 * VAR_3, (23 + 2) * VAR_4 + 4);


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++, VAR_11 += VAR_3)
 {
  if (!(VAR_5 & (1 << VAR_9)))
   FUNC_5(VAR_14, "free");
  else {
   FUNC_5(VAR_14, "USED");
   if (VAR_6[VAR_9] != 0) {
    time_t VAR_15 = VAR_6[VAR_9];
    struct tm *VAR_16 = FUNC_1(&VAR_15);
    FUNC_6(VAR_14, sizeof(VAR_14), "%x %R", VAR_16);
   }
  }

  FUNC_7(VAR_10, VAR_11, "SLOT %i (%s)", VAR_9, VAR_14);
 }
 FUNC_7(VAR_10, VAR_11, "back");

 FUNC_3();
}
