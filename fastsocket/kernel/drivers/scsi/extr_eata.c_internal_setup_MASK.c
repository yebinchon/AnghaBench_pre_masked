
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char*,int *,int ) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_3(char *VAR_12, int *VAR_13)
{
 int VAR_14, VAR_15 = VAR_13[0];
 char *VAR_16 = VAR_12, *VAR_17;

 if (VAR_15 > 0) {
  if (VAR_15 > VAR_0)
   VAR_15 = VAR_0;

  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
   VAR_3[VAR_14] = VAR_13[VAR_14 + 1];

  VAR_3[VAR_14] = 0;
  VAR_10 = 1;
 }

 while (VAR_16 && (VAR_17 = FUNC_1(VAR_16, ':'))) {
  int VAR_18 = 0, VAR_19 = *++VAR_17;

  if (VAR_19 == 'n' || VAR_19 == 'N')
   VAR_18 = 0;
  else if (VAR_19 == 'y' || VAR_19 == 'Y')
   VAR_18 = 1;
  else
   VAR_18 = (int)FUNC_0(VAR_17, ((void*)0), 0);

  if (!FUNC_2(VAR_16, "lc:", 3))
   VAR_6 = VAR_18;
  else if (!FUNC_2(VAR_16, "tm:", 3))
   VAR_11 = VAR_18;
  else if (!FUNC_2(VAR_16, "tc:", 3))
   VAR_11 = VAR_18;
  else if (!FUNC_2(VAR_16, "mq:", 3))
   VAR_7 = VAR_18;
  else if (!FUNC_2(VAR_16, "ls:", 3))
   VAR_5 = VAR_18;
  else if (!FUNC_2(VAR_16, "et:", 3))
   VAR_2 = VAR_18;
  else if (!FUNC_2(VAR_16, "rs:", 3))
   VAR_9 = VAR_18;
  else if (!FUNC_2(VAR_16, "ip:", 3))
   VAR_4 = VAR_18;
  else if (!FUNC_2(VAR_16, "ep:", 3))
   VAR_1 = VAR_18;
  else if (!FUNC_2(VAR_16, "pp:", 3))
   VAR_8 = VAR_18;

  if ((VAR_16 = FUNC_1(VAR_16, ',')))
   ++VAR_16;
 }

 return;
}
