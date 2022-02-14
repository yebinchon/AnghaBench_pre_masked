
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int ** VAR_6 ;
 size_t VAR_7 ;
 char* VAR_8 ;
 scalar_t__* VAR_9 ;

__attribute__((used)) static void FUNC_4(void)
{
 if (VAR_5)
  FUNC_1("HHWRIT");
 if (!FUNC_0())
  return;
 if (VAR_6[VAR_7] != ((void*)0)) {
  int VAR_10;
  if (VAR_8[VAR_7] == 'r')
   FUNC_3(VAR_6[VAR_7], 0, VAR_4);
  VAR_8[VAR_7] = 'w';
  VAR_10 = VAR_2;
  if (VAR_10 == 0x9b && VAR_9[VAR_7])
   VAR_10 = '\n';
  FUNC_2(VAR_10, VAR_6[VAR_7]);
  VAR_3 = 1;
  VAR_0;
 }
 else {
  VAR_3 = 135;

  VAR_1;
 }
}
