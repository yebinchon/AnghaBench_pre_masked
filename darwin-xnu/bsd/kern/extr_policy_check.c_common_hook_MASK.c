
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_4(void)
{
 int VAR_11;
 int VAR_12 = 0;

 if ((VAR_11 = FUNC_2(FUNC_1())) != 0) {




  if (VAR_10 & VAR_1)
   VAR_12 = VAR_6;





  if ((VAR_10 & (VAR_0 | VAR_2)) == VAR_0) {
   if (VAR_10 & VAR_3) {

       if (!(VAR_7 % VAR_9)) {
    if (VAR_7 <= VAR_8 || VAR_9 == VAR_4) {







     FUNC_0("calling MACF hook with mutex count %d (event %d) ", VAR_11, VAR_7);
    }
       } else {
    if (VAR_9 < VAR_4) {
     VAR_8 *= VAR_5;
     VAR_9 *= VAR_5;
    }
       }
   } else {

    FUNC_0("calling MACF hook with mutex count %d (event %d) ", VAR_11, VAR_7);
   }
  }


  if (VAR_10 & VAR_2)
   FUNC_3("calling MACF hook with mutex count %d\n", VAR_11);


  VAR_7++;
 }

 return VAR_12;
}
