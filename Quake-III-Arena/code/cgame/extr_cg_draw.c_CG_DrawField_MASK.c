
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int num ;
struct TYPE_3__ {int * numberShaders; } ;
struct TYPE_4__ {TYPE_1__ media; } ;


 int FUNC_0 (int,int,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,char*,int) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3 (int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
 char VAR_8[16], *VAR_9;
 int VAR_10;
 int VAR_11;

 if ( VAR_6 < 1 ) {
  return;
 }


 if ( VAR_6 > 5 ) {
  VAR_6 = 5;
 }

 switch ( VAR_6 ) {
 case 1:
  VAR_7 = VAR_7 > 9 ? 9 : VAR_7;
  VAR_7 = VAR_7 < 0 ? 0 : VAR_7;
  break;
 case 2:
  VAR_7 = VAR_7 > 99 ? 99 : VAR_7;
  VAR_7 = VAR_7 < -9 ? -9 : VAR_7;
  break;
 case 3:
  VAR_7 = VAR_7 > 999 ? 999 : VAR_7;
  VAR_7 = VAR_7 < -99 ? -99 : VAR_7;
  break;
 case 4:
  VAR_7 = VAR_7 > 9999 ? 9999 : VAR_7;
  VAR_7 = VAR_7 < -999 ? -999 : VAR_7;
  break;
 }

 FUNC_1 (VAR_8, sizeof(VAR_8), "%i", VAR_7);
 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10 > VAR_6)
  VAR_10 = VAR_6;
 VAR_4 += 2 + VAR_1*(VAR_6 - VAR_10);

 VAR_9 = VAR_8;
 while (*VAR_9 && VAR_10)
 {
  if (*VAR_9 == '-')
   VAR_11 = VAR_2;
  else
   VAR_11 = *VAR_9 -'0';

  FUNC_0( VAR_4,VAR_5, VAR_1, VAR_0, VAR_3.media.numberShaders[VAR_11] );
  VAR_4 += VAR_1;
  VAR_9++;
  VAR_10--;
 }
}
