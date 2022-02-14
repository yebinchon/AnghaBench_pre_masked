
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,size_t) ;

ssize_t FUNC_3(const char *VAR_3, size_t VAR_4)
{
 if (VAR_4 > VAR_0 - 1)
  VAR_4 = VAR_0 - 1;
 FUNC_0(&VAR_1);
 FUNC_2(VAR_2, VAR_3, VAR_4);
 VAR_2[VAR_4] = '\0';
 FUNC_1(&VAR_1);
 return VAR_4;
}
