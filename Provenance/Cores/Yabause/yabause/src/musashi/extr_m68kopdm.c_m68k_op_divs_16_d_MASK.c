
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
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ) ;

void FUNC_6(void)
{
 uint* VAR_11 = &VAR_1;
 sint VAR_12 = FUNC_0(VAR_2);
 sint VAR_13;
 sint VAR_14;

 if(VAR_12 != 0)
 {
  if((uint32)*VAR_11 == 0x80000000 && VAR_12 == -1)
  {
   VAR_7 = 0;
   VAR_5 = VAR_8;
   VAR_6 = VAR_9;
   VAR_4 = VAR_0;
   *VAR_11 = 0;
   return;
  }

  VAR_13 = FUNC_1(*VAR_11) / VAR_12;
  VAR_14 = FUNC_1(*VAR_11) % VAR_12;

  if(VAR_13 == FUNC_0(VAR_13))
  {
   VAR_7 = VAR_13;
   VAR_5 = FUNC_4(VAR_13);
   VAR_6 = VAR_9;
   VAR_4 = VAR_0;
   *VAR_11 = FUNC_3(FUNC_2(VAR_13) | (VAR_14 << 16));
   return;
  }
  VAR_6 = VAR_10;
  return;
 }
 FUNC_5(VAR_3);
}
