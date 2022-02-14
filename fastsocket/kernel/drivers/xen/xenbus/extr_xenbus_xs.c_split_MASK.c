
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (unsigned int,int) ;
 int FUNC_4 (char**,char*,unsigned int) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static char **FUNC_6(char *VAR_3, unsigned int VAR_4, unsigned int *VAR_5)
{
 char *VAR_6, **VAR_7;


 *VAR_5 = FUNC_1(VAR_3, VAR_4);


 VAR_7 = FUNC_3(*VAR_5 * sizeof(char *) + VAR_4, VAR_1 | VAR_2);
 if (!VAR_7) {
  FUNC_2(VAR_3);
  return FUNC_0(-VAR_0);
 }
 FUNC_4(&VAR_7[*VAR_5], VAR_3, VAR_4);
 FUNC_2(VAR_3);

 VAR_3 = (char *)&VAR_7[*VAR_5];
 for (VAR_6 = VAR_3, *VAR_5 = 0; VAR_6 < VAR_3 + VAR_4; VAR_6 += FUNC_5(VAR_6) + 1)
  VAR_7[(*VAR_5)++] = VAR_6;

 return VAR_7;
}
