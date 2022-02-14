
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;

int FUNC_2(int VAR_7, unsigned int VAR_8, int VAR_9)
{
 switch (VAR_7) {
 case 1:

  if (VAR_5
      && (VAR_8 == VAR_3
   || VAR_8 == VAR_4)) {
   if (VAR_5 == 1) {
    FUNC_0(VAR_2,
       VAR_8 == VAR_3 ? VAR_0 : VAR_1,
       VAR_9);
    FUNC_1(VAR_2);
    return 1;
   }
   VAR_6 = VAR_9 ? VAR_8 : 0;
  }
  break;
 }
 return 0;
}
