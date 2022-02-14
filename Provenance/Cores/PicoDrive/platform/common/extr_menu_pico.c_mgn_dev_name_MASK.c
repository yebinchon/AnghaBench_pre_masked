
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int,int,int) ;

__attribute__((used)) static const char *FUNC_1(int VAR_2, int *VAR_3)
{
 const char *VAR_4 = ((void*)0);
 static int VAR_5 = 0;

 if (VAR_2 == VAR_1)
  VAR_5 = 0;

 for (; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_0(VAR_5, 1, 1);
  if (VAR_4 != ((void*)0))
   break;
 }

 VAR_5++;
 return VAR_4;
}
