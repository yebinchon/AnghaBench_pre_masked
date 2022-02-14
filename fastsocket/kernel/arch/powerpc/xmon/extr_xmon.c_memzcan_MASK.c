
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned char*,int) ;
 unsigned int VAR_2 ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (unsigned int*) ;
 char VAR_3 ;

__attribute__((used)) static void
FUNC_3(void)
{
 unsigned char VAR_4;
 unsigned VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(&VAR_0);
 if (VAR_3 != '\n') VAR_3 = 0;
 FUNC_2(&VAR_2);
 if (VAR_3 != '\n') VAR_3 = 0;
 FUNC_2(&VAR_1);
 VAR_7 = 0;
 for (VAR_5 = VAR_0; VAR_5 < VAR_1; VAR_5 += VAR_2) {
  VAR_6 = FUNC_0(VAR_5, &VAR_4, 1);
  if (VAR_6 && !VAR_7) {
   FUNC_1("%.8x .. ", VAR_5);
  } else if (!VAR_6 && VAR_7)
   FUNC_1("%.8x\n", VAR_5 - VAR_2);
  VAR_7 = VAR_6;
  if (VAR_5 + VAR_2 < VAR_5)
   break;
 }
 if (VAR_7)
  FUNC_1("%.8x\n", VAR_5 - VAR_2);
}
