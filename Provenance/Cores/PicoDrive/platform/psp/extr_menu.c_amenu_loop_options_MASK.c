
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(void)
{
 static int VAR_10 = 0;
 int VAR_11;
 unsigned long VAR_12 = 0;
 menu_id VAR_13;

 VAR_11 = FUNC_2(VAR_9, VAR_2) - 1;

 for(;;)
 {
  FUNC_0(VAR_10);
  VAR_12 = FUNC_1(VAR_7|VAR_4|VAR_5|VAR_6|VAR_8|VAR_3, 0);
  if (VAR_12 & VAR_7 ) { VAR_10--; if (VAR_10 < 0) VAR_10 = VAR_11; }
  if (VAR_12 & VAR_4) { VAR_10++; if (VAR_10 > VAR_11) VAR_10 = 0; }
  VAR_13 = FUNC_3(VAR_9, VAR_2, VAR_10);
  if (VAR_12 & (VAR_5|VAR_6)) {
   if (!FUNC_4(VAR_9, VAR_2, VAR_13, (VAR_12&VAR_6) ? 1 : 0) &&
       VAR_13 == VAR_1) {

   }
  }
  if (VAR_12 & VAR_3) {
   if (!FUNC_4(VAR_9, VAR_2, VAR_13, 1) &&
       VAR_13 == VAR_0) {
    return;
   }
  }
  if (VAR_12 & VAR_8) return;
 }
}
