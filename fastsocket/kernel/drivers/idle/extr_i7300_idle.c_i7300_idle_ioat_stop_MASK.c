
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_7;
 u64 VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  FUNC_3(VAR_2,
   VAR_6 + VAR_0);

  FUNC_2(10);

  VAR_8 = FUNC_1(VAR_6 + VAR_1) &
   VAR_4;

  if (VAR_8 != VAR_3)
   break;

 }

 if (VAR_7 == VAR_5) {
  FUNC_0("failed to stop I/O AT after %d retries\n",
   VAR_5);
 }
}
