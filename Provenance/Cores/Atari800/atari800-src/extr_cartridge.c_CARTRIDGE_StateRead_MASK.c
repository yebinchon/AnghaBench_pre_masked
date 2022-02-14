
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UBYTE ;
struct TYPE_4__ {int type; int state; } ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int) ;
 TYPE_1__* VAR_4 ;

void FUNC_6(UBYTE VAR_5)
{
 int VAR_6 = VAR_0;
 char VAR_7[VAR_3];



 FUNC_5(&VAR_6, 1);
 if (VAR_6 != VAR_0) {
  FUNC_4(VAR_7);
  if (VAR_7[0]) {

   if (FUNC_0(VAR_7) >= 0) {

    VAR_1.type = VAR_6;
   }
  }
  if (VAR_5 >= 7)

   FUNC_5(&VAR_1.state, 1);
 }
 else
  VAR_1.type = VAR_6;

 if (VAR_6 < 0) {

  VAR_1.type = -VAR_6;

  FUNC_5(&VAR_6, 1);
  FUNC_4(VAR_7);
  if (VAR_7[0]) {

   if (FUNC_1(VAR_7) >= 0) {

    VAR_2.type = VAR_6;
   }
  }
  if (VAR_5 >= 7)

   FUNC_5(&VAR_2.state, 1);
  else {


   int VAR_8;
   FUNC_5(&VAR_8, 1);
   if (VAR_8)
    VAR_4 = &VAR_2;
   else
    VAR_4 = &VAR_1;



   return;
  }
 }


 if (FUNC_2(VAR_1.type) && (VAR_1.state & 0x0c) == 0x08)
  VAR_4 = &VAR_2;
 else
  VAR_4 = &VAR_1;

 FUNC_3();
}
