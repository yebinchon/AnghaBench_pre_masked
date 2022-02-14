
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ) ;
 int VAR_2 ;
 char* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_3)
{
 const char *VAR_4;
 char *VAR_5, *VAR_6;
 unsigned int VAR_7;



 VAR_4 = VAR_3 + 2;


 VAR_6 = FUNC_3(VAR_4, '\\');
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = VAR_6 - VAR_4;
 VAR_5 = FUNC_1((VAR_7 + 1), VAR_2);
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_2(VAR_5, VAR_4, VAR_7);
 VAR_5[VAR_7] = '\0';

 return VAR_5;
}
