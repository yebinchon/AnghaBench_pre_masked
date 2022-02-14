
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulonglong ;



__attribute__((used)) static void FUNC_0(ulonglong *VAR_0,
                                   ulonglong (*VAR_1)(void),
                                   ulonglong (*VAR_2)(void),
                                   ulonglong VAR_3)
{
  ulonglong VAR_4, VAR_5;
  int VAR_6;


  for (VAR_6= 0, *VAR_0= 1000000000; VAR_6 < 20; ++VAR_6)
  {
    VAR_4= VAR_1();
    VAR_2();
    VAR_5= VAR_1() - VAR_4;
    if (*VAR_0 > VAR_5)
      *VAR_0= VAR_5;
  }
  *VAR_0-= VAR_3;
}
