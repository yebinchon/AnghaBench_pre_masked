
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (double,int) ;
 int* VAR_0 ;
 int* VAR_1 ;

void FUNC_1()
{



  int VAR_2;
  int VAR_3;

  int* VAR_4 = VAR_0 + 128;
  for (VAR_2=-128 ; VAR_2<128 ; VAR_2++)
    VAR_4[VAR_2] = (int)(FUNC_0(2.0, (VAR_2/64.0))*65536.0);





  for (VAR_2=0 ; VAR_2<128 ; VAR_2++)
    for (VAR_3=0 ; VAR_3<256 ; VAR_3++)
      VAR_1[VAR_2*256+VAR_3] = (VAR_2*(VAR_3-128)*256)/127;
}
