
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int VAR_5 ;
 unsigned long FUNC_2 (unsigned long) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(int VAR_9)
{
 static int VAR_10 = 10;
 int VAR_11 = 10;
 unsigned long VAR_12 = 0;

 FUNC_3();

 for(;;)
 {
  FUNC_0(VAR_10, VAR_9);
  VAR_12 = FUNC_2(VAR_3|VAR_0|VAR_1|VAR_2);
  if(VAR_12 & VAR_3 ) {
   do {
    VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_11;
   } while (!(VAR_8 & (1 << VAR_10)) && VAR_10 != VAR_11 && VAR_9);
  }
  if(VAR_12 & VAR_0) {
   do {
    VAR_10++; if (VAR_10 > VAR_11) VAR_10 = 0;
   } while (!(VAR_8 & (1 << VAR_10)) && VAR_10 != VAR_11 && VAR_9);
  }
  if(VAR_12 & VAR_1) {
   if (VAR_10 < 10) {
    VAR_7 = VAR_10;
    VAR_4 = VAR_5;
    if (FUNC_1(VAR_9, 0)) {
     FUNC_4(VAR_6, VAR_9 ? "Load failed" : "Save failed");
     return 1;
    }
    return 0;
   } else return 1;
  }
  if(VAR_12 & VAR_2) return 1;
 }
}
