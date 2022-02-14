
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (char*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(char *VAR_1, char **VAR_2, off_t VAR_3,
         int VAR_4, int *VAR_5, void *VAR_6)
{
 int VAR_7, VAR_8;





 VAR_8 = VAR_0;
 VAR_7 = FUNC_0(VAR_1, "%d\n", VAR_8);
 VAR_7 -= VAR_3;
 if (VAR_7 <= VAR_3+VAR_4)
  *VAR_5 = 1;
 *VAR_2 = VAR_1 + VAR_3;
 if (VAR_7 > VAR_4)
  VAR_7 = VAR_4;
 if (VAR_7 < 0)
  VAR_7 = 0;
 return VAR_7;
}
