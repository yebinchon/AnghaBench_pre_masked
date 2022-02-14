
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 char* VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(void)
{
 char VAR_7[VAR_0];
 char *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11;


 while (VAR_5 != VAR_3) {
  VAR_7[0] = '\0';
  VAR_8 = VAR_7;
  VAR_11 = 0;

  FUNC_1(&VAR_4, VAR_10);

  VAR_9 = VAR_5;
  while (VAR_9 != VAR_3) {
   *VAR_8 = VAR_2[VAR_9];
   VAR_9 = (VAR_9 + 1) % VAR_1;
   if (!*VAR_8)
    break;
   VAR_8++;
   if (++VAR_11 >= VAR_0 - 1)
    break;
  }
  *VAR_8 = '\0';
  if (VAR_7[0])
   FUNC_0(VAR_7);
  VAR_5 = VAR_9;

  VAR_6 = 0;
  FUNC_2(&VAR_4, VAR_10);
 }
}
