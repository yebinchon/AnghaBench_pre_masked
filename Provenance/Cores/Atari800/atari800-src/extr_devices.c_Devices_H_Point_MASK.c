
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int *,long,int ) ;
 int ** VAR_9 ;
 size_t VAR_10 ;
 char* VAR_11 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_8)
  FUNC_1("POINT Command");
 if (!FUNC_0())
  return;
 if (VAR_9[VAR_10] != ((void*)0)) {
  int VAR_12 = VAR_6 + VAR_10 * 16;
  long VAR_13 = (FUNC_2(VAR_12 + VAR_4) << 16) +
   (FUNC_2(VAR_12 + VAR_3) << 8) + (FUNC_2(VAR_12 + VAR_5));
  if (FUNC_3(VAR_9[VAR_10], VAR_13, VAR_7) == 0) {
   VAR_2 = 1;
   VAR_0;
  }
  else {
   VAR_2 = 166;
   VAR_1;
  }
  VAR_11[VAR_10] = 'p';
 }
 else {
  VAR_2 = 130;
  VAR_1;
 }
}
