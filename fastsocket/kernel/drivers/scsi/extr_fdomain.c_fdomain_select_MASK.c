
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5( int VAR_7 )
{
   int VAR_8;
   unsigned long VAR_9;




   FUNC_3(0x82, VAR_6 + VAR_1);
   FUNC_3(VAR_5 | (1 << VAR_7), VAR_6 + VAR_2);


   FUNC_3(VAR_0, VAR_6 + VAR_4);

   VAR_9 = 350;

   do {
      VAR_8 = FUNC_1(VAR_6 + VAR_3);
      if (VAR_8 & 1) {

  FUNC_3(0x80, VAR_6 + VAR_1);
  return 0;
      }
      FUNC_2(1);
   } while (--VAR_9);

   FUNC_0();
   return 1;
}
