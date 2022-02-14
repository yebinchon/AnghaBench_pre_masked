
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (int *,char*,int,int ,int ) ;
 int FUNC_2 (char*,unsigned long*,int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;

void FUNC_4(void *VAR_1, int VAR_2)
{
 char *VAR_3 = VAR_1;

 while (VAR_2) {
  unsigned long VAR_4;
  int VAR_5 = FUNC_3(VAR_2, (int)sizeof(unsigned long));

  if (!FUNC_0(&VAR_4))
   break;

  FUNC_2(VAR_3, &VAR_4, VAR_5);
  VAR_3 += VAR_5;
  VAR_2 -= VAR_5;
 }

 FUNC_1(&VAR_0, VAR_3, VAR_2, 0, 0);
}
