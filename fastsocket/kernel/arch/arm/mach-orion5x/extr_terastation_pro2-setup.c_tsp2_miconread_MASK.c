
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned char VAR_2 ;
 unsigned char FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = 10;

  while (!(FUNC_1(FUNC_0(VAR_0)) & VAR_2)) {
   if (--VAR_6 == 0)
    break;
   FUNC_2(1000);
  }

  if (VAR_6 == 0)
   break;
  VAR_3[VAR_5] = FUNC_1(FUNC_0(VAR_1));
 }


 return VAR_5;
}
