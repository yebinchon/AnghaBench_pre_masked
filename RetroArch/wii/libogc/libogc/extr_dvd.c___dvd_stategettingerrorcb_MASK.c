
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
struct TYPE_4__ {int state; int cmd; int offset; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_8 ;
 int FUNC_12 () ;
 int FUNC_13 (int) ;
 int VAR_9 ;
 int* VAR_10 ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(s32 VAR_11)
{
 s32 VAR_12;
 u32 VAR_13,VAR_14;
 if(VAR_11==0x0010) {
  VAR_5->state = -1;
  FUNC_12();
  return;
 }
 if(VAR_11&0x0002) {
  VAR_5->state = -1;
  FUNC_9(0x01234567);
  return;
 }
 if(VAR_11==0x0001) {
  VAR_13 = VAR_10[8];
  VAR_12 = FUNC_4(VAR_13);
  if(VAR_12==1) {
   VAR_5->state = -1;
   FUNC_9(VAR_13);
   return;
  } else if(VAR_12==2 || VAR_12==3) VAR_14 = 0;
  else {
   if(FUNC_3(VAR_13)==VAR_1) VAR_14 = 4;
   else if(FUNC_3(VAR_13)==VAR_2) VAR_14 = 6;
   else if(FUNC_3(VAR_13)==VAR_3) VAR_14 = 3;
   else VAR_14 = 5;
  }
  if(FUNC_5(VAR_14)) return;

  if(VAR_12==2) {
   if(FUNC_14(VAR_13)) {

    if(VAR_5->cmd==0x05) {
     VAR_7 = 0;
     VAR_6 = VAR_4;
     FUNC_2(VAR_8);
     return;
    }
    FUNC_7(VAR_5);
   } else {
    FUNC_13(VAR_13);
    FUNC_10();
   }
   return;
  } else if(VAR_12==3) {
   if(FUNC_0(VAR_13)==VAR_0) {
    FUNC_1(VAR_5->offset,VAR_9);
    return;
   } else {
    FUNC_6(VAR_5);
    return;
   }
  } else if(FUNC_3(VAR_13)==VAR_1) {
   VAR_5->state = 5;
   FUNC_11();
   return;
  } else if(FUNC_3(VAR_13)==VAR_2) {
   VAR_5->state = 3;
   FUNC_8();
   return;
  } else if(FUNC_3(VAR_13)==VAR_3) {
   VAR_5->state = 4;
   FUNC_11();
   return;
  }
  VAR_5->state = -1;
  FUNC_9(0x01234567);
  return;
 }
}
