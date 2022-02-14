
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int ,int ,int) ;
 int * VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (short*,int,int ,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_6(void)
{
 bool VAR_9 = 0;
 int VAR_10, VAR_11;

 if (FUNC_1(VAR_2, &VAR_9) && VAR_9)
  FUNC_4();

 FUNC_2();

 VAR_0[0] = VAR_0[1] = 0;
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
   if (FUNC_3(VAR_10, VAR_1, 0, VAR_11))
    VAR_0[VAR_10] |= VAR_4[VAR_11];

 FUNC_0();

 FUNC_5((short *)VAR_5 + VAR_7,
  VAR_8, VAR_6, VAR_8 * 2);
}
