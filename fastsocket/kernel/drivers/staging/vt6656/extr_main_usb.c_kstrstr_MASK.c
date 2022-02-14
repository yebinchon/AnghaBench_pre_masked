
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;


 scalar_t__ FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static UCHAR *FUNC_2(const UCHAR *VAR_0,const UCHAR *VAR_1) {
  int VAR_2=FUNC_1(VAR_0);
  int VAR_3=FUNC_1(VAR_1);

  while (VAR_2 >= VAR_3) {
       VAR_2--;
      if(FUNC_0(VAR_0,VAR_1,VAR_3)==0)
         return (UCHAR *)VAR_0;
        VAR_0++;
  }
  return ((void*)0);
}
