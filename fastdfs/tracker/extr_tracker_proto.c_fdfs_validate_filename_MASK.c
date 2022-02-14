
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;

int FUNC_1(const char *VAR_1)
{
 const char *VAR_2;
 const char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_3 = VAR_1 + VAR_4;
 for (VAR_2=VAR_1; VAR_2<VAR_3; VAR_2++)
 {
  if (!((*VAR_2 >= 'a' && *VAR_2 <= 'z') || (*VAR_2 >= 'A' && *VAR_2 <= 'Z') || (*VAR_2 >= '0' && *VAR_2 <= '9') || (*VAR_2 == '-') || (*VAR_2 == '_') || (*VAR_2 == '.')))


  {
   return VAR_0;
  }
 }

 return 0;
}
