
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int *,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 static int VAR_10 = 0;
 int VAR_11;

 for (;;)
 {
  FUNC_0(VAR_10);
  VAR_11 = FUNC_1(VAR_7|VAR_0|VAR_2|VAR_6|VAR_1|VAR_5
    |VAR_4|VAR_3, ((void*)0), 33);
  if (VAR_11 & VAR_7 ) { VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_8; }
  if (VAR_11 & VAR_0) { VAR_10++; if (VAR_10 > VAR_8) VAR_10 = 0; }
  if (VAR_11 &(VAR_2|VAR_1)) { VAR_10-=10; if (VAR_10 < 0) VAR_10 = 0; }
  if (VAR_11 &(VAR_6|VAR_5)) { VAR_10+=10; if (VAR_10 > VAR_8) VAR_10 = VAR_8; }
  if (VAR_11 & VAR_4) {
   if (VAR_10 < VAR_8)
    VAR_9[VAR_10].active = !VAR_9[VAR_10].active;
   else break;
  }
  if (VAR_11 & VAR_3)
   break;
 }
}
