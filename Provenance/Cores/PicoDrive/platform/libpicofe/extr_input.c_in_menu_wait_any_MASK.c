
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int*,int*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(char *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_1;
 int VAR_6;

 while (1)
 {
  int VAR_7, VAR_8 = 0, VAR_9 = 0;

  VAR_7 = FUNC_0(&VAR_9, &VAR_8, VAR_3, VAR_4);
  if (VAR_7 < 0)
   break;

  if (VAR_5 != VAR_1) {
   VAR_2 = VAR_9;
   break;
  }
 }

 VAR_6 = VAR_1;
 VAR_1 &= ~VAR_0;
 return VAR_6;
}
