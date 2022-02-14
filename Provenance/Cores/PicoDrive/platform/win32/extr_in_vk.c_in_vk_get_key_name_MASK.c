
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char** VAR_1 ;

__attribute__((used)) static const char *FUNC_0(int VAR_2)
{
 const char *VAR_3 = ((void*)0);
 static char VAR_4[4];

 if ('A' <= VAR_2 && VAR_2 < 'Z') {
  VAR_4[0] = VAR_2;
  VAR_4[1] = 0;
  return VAR_4;
 }

 if (0 <= VAR_2 && VAR_2 < VAR_0)
  VAR_3 = VAR_1[VAR_2];
 if (VAR_3 == ((void*)0))
  VAR_3 = "Unkn";

 return VAR_3;
}
