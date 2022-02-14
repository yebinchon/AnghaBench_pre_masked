
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_private {int dummy; } ;
typedef int off_t ;


 int FUNC_0 (char*,struct atmel_private*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, char **VAR_1, off_t VAR_2,
      int VAR_3, int *VAR_4, void *VAR_5)
{
 struct atmel_private *VAR_6 = VAR_5;
 int VAR_7 = FUNC_0 (VAR_0, VAR_6);
 if (VAR_7 <= VAR_2+VAR_3)
  *VAR_4 = 1;
 *VAR_1 = VAR_0 + VAR_2;
 VAR_7 -= VAR_2;
 if (VAR_7 > VAR_3)
  VAR_7 = VAR_3;
 if (VAR_7 < 0)
  VAR_7 = 0;
 return VAR_7;
}
