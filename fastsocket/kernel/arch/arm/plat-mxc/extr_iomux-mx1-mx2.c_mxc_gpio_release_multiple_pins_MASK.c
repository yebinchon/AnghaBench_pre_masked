
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (unsigned int) ;

void FUNC_1(const int *VAR_2, int VAR_3)
{
 const int *VAR_4 = VAR_2;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  unsigned VAR_6 = *VAR_4 & (VAR_0 | VAR_1);
  FUNC_0(VAR_6);
  VAR_4++;
 }

}
