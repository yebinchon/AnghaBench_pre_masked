
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
  uint* VAR_7 = &VAR_0;
  uint VAR_8 = VAR_1;
  uint VAR_9 = *VAR_7;
  uint VAR_10 = VAR_9 - VAR_8 - FUNC_4();

  VAR_3 = FUNC_2(VAR_10);
  VAR_5 = VAR_2 = FUNC_0(VAR_8, VAR_9, VAR_10);
  VAR_4 = FUNC_3(VAR_8, VAR_9, VAR_10);

  VAR_10 = FUNC_1(VAR_10);
  VAR_6 |= VAR_10;

  *VAR_7 = VAR_10;
}
