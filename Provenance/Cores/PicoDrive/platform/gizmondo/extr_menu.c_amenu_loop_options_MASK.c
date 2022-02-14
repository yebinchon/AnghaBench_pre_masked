
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int menu_id ;
struct TYPE_2__ {int gamma; } ;


 unsigned long FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_10 ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_7(void)
{
 static int VAR_12 = 0;
 int VAR_13;
 unsigned long VAR_14 = 0;
 menu_id VAR_15;

 VAR_13 = FUNC_4(VAR_11, VAR_2) - 1;

 for(;;)
 {
  FUNC_2(VAR_12);
  VAR_14 = FUNC_3(VAR_9|VAR_3|VAR_4|VAR_7|VAR_5|VAR_8|VAR_6);
  if (VAR_14 & VAR_9 ) { VAR_12--; if (VAR_12 < 0) VAR_12 = VAR_13; }
  if (VAR_14 & VAR_3) { VAR_12++; if (VAR_12 > VAR_13) VAR_12 = 0; }
  VAR_15 = FUNC_5(VAR_11, VAR_2, VAR_12);
  if (VAR_14 & (VAR_4|VAR_7)) {
   if (!FUNC_6(VAR_11, VAR_2, VAR_15, (VAR_14&VAR_7) ? 1 : 0) &&
       VAR_15 == VAR_1) {
    while ((VAR_14 = FUNC_0()) & (VAR_4|VAR_7)) {
     VAR_10.gamma += (VAR_14 & VAR_4) ? -1 : 1;
     if (VAR_10.gamma < 1) VAR_10.gamma = 1;
     if (VAR_10.gamma > 300) VAR_10.gamma = 300;
     FUNC_2(VAR_12);
     FUNC_1(18);
    }
   }
  }
  if (VAR_14 & VAR_5) {
   if (!FUNC_6(VAR_11, VAR_2, VAR_15, 1) &&
       VAR_15 == VAR_0) {
    return;
   }
  }
  if (VAR_14 & (VAR_8|VAR_6)) return;
 }
}
