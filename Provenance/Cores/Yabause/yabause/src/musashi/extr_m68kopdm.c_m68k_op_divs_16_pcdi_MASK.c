
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef scalar_t__ uint ;
typedef int sint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;

void FUNC_7(void)
{
 uint* VAR_10 = &VAR_1;
 sint VAR_11 = FUNC_0(FUNC_5());
 sint VAR_12;
 sint VAR_13;

 if(VAR_11 != 0)
 {
  if((uint32)*VAR_10 == 0x80000000 && VAR_11 == -1)
  {
   VAR_6 = 0;
   VAR_4 = VAR_7;
   VAR_5 = VAR_8;
   VAR_3 = VAR_0;
   *VAR_10 = 0;
   return;
  }

  VAR_12 = FUNC_1(*VAR_10) / VAR_11;
  VAR_13 = FUNC_1(*VAR_10) % VAR_11;

  if(VAR_12 == FUNC_0(VAR_12))
  {
   VAR_6 = VAR_12;
   VAR_4 = FUNC_4(VAR_12);
   VAR_5 = VAR_8;
   VAR_3 = VAR_0;
   *VAR_10 = FUNC_3(FUNC_2(VAR_12) | (VAR_13 << 16));
   return;
  }
  VAR_5 = VAR_9;
  return;
 }
 FUNC_6(VAR_2);
}
