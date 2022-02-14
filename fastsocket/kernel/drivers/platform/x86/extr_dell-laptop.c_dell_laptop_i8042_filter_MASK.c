
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

bool FUNC_3(unsigned char VAR_2, unsigned char VAR_3,
         struct serio *VAR_4)
{
 static bool VAR_5;

 if (VAR_3 & 0x20)
  return 0;

 if (FUNC_2(VAR_2 == 0xe0)) {
  VAR_5 = 1;
  return 0;
 } else if (FUNC_2(VAR_5)) {
  switch (VAR_2) {
  case 0x8:
   FUNC_1(&VAR_1,
           FUNC_0(VAR_0));
   break;
  }
  VAR_5 = 0;
 }

 return 0;
}
