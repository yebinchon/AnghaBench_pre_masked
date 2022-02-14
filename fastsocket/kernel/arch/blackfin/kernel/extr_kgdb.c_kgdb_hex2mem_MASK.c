
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(char *VAR_0, char *VAR_1, int VAR_2)
{
 char *VAR_3, *VAR_4;





 VAR_3 = VAR_0 + VAR_2 * 2;

 VAR_4 = VAR_3 - 1;
 while (VAR_4 >= VAR_0) {
  VAR_3--;
  *VAR_3 = FUNC_1(*VAR_4--);
  *VAR_3 |= FUNC_1(*VAR_4--) << 4;
 }

 return FUNC_0(VAR_1, VAR_3, VAR_2);
}
