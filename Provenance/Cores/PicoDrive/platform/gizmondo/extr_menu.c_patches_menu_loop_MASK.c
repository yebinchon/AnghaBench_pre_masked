
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_10 = 0;
 unsigned long VAR_11 = 0;

 for(;;)
 {
  FUNC_0(VAR_10);
  VAR_11 = FUNC_1(VAR_7|VAR_0|VAR_2|VAR_5|VAR_1|VAR_4|VAR_3|VAR_6);
  if(VAR_11 & VAR_7 ) { VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_8; }
  if(VAR_11 & VAR_0) { VAR_10++; if (VAR_10 > VAR_8) VAR_10 = 0; }
  if(VAR_11 &(VAR_2|VAR_1)) { VAR_10-=10; if (VAR_10 < 0) VAR_10 = 0; }
  if(VAR_11 &(VAR_5|VAR_4)) { VAR_10+=10; if (VAR_10 > VAR_8) VAR_10 = VAR_8; }
  if(VAR_11 & VAR_3) {
   if (VAR_10 < VAR_8)
    VAR_9[VAR_10].active = !VAR_9[VAR_10].active;
   else return;
  }
  if(VAR_11 & VAR_6) return;
 }

}
