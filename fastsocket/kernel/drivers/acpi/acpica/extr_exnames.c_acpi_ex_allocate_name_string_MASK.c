
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *FUNC_4(u32 VAR_8, u32 VAR_9)
{
 char *VAR_10;
 char *VAR_11;
 u32 VAR_12;

 FUNC_2(VAR_7);






 if (VAR_8 == VAR_1) {



  VAR_12 = 1 + (VAR_0 * VAR_9) + 2 + 1;
 } else {
  VAR_12 =
      VAR_8 + (VAR_0 * VAR_9) + 2 + 1;
 }





 VAR_11 = FUNC_0(VAR_12);
 if (!VAR_11) {
  FUNC_1((VAR_2,
       "Could not allocate size %d", VAR_12));
  FUNC_3(((void*)0));
 }

 VAR_10 = VAR_11;



 if (VAR_8 == VAR_1) {
  *VAR_10++ = VAR_6;
 } else {
  while (VAR_8--) {
   *VAR_10++ = VAR_5;
  }
 }



 if (VAR_9 > 2) {



  *VAR_10++ = VAR_4;
  *VAR_10++ = (char)VAR_9;
 } else if (2 == VAR_9) {



  *VAR_10++ = VAR_3;
 }





 *VAR_10 = 0;

 FUNC_3(VAR_11);
}
