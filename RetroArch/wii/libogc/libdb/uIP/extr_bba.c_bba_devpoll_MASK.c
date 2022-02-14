
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef void* s64 ;
typedef int response ;
typedef int challange ;
struct TYPE_2__ {int acstart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 void* VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int *,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int *,int) ;
 TYPE_1__ VAR_6 ;
 int FUNC_9 (int*) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (void*,void*) ;
 void* FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(u16 *VAR_8)
{
 u8 VAR_9;
 s64 VAR_10;

 FUNC_2("bba_devpoll()\n");

 VAR_10 = FUNC_11();
 if(FUNC_10(VAR_5,VAR_10)>=VAR_4) {
  FUNC_12();
  VAR_5 = FUNC_11();
 }

 VAR_9 = 0;
 *VAR_8 = 0;
 if(FUNC_0(VAR_2,VAR_3,((void*)0))==1) {
  VAR_9 = FUNC_5(0x03);
  if(VAR_9) {
   FUNC_7(0x02,VAR_0);
   if(VAR_9&0x80) {
    *VAR_8 |= (VAR_9<<8);
    FUNC_9(VAR_8);
    FUNC_7(0x03,0x80);
    FUNC_7(0x02,VAR_1);
    FUNC_1(VAR_2);
    return;
   }
   if(VAR_9&0x40) {
    *VAR_8 |= (VAR_9<<8);
    FUNC_3(VAR_7);
    FUNC_7(0x03, 0x40);
    FUNC_7(0x02,VAR_1);
    FUNC_1(VAR_2);
    return;
   }
   if(VAR_9&0x20) {
    *VAR_8 |= (VAR_9<<8);
    FUNC_7(0x03, 0x20);
    FUNC_7(0x02,VAR_1);
    FUNC_1(VAR_2);
    return;
   }
   if(VAR_9&0x10) {
    u32 VAR_11,VAR_12;

    *VAR_8 |= (VAR_9<<8);
    FUNC_7(0x05,VAR_6.acstart);
    FUNC_6(0x08,&VAR_12,sizeof(VAR_12));
    VAR_11 = FUNC_4(VAR_7,VAR_12);
    FUNC_8(0x09,&VAR_11,sizeof(VAR_11));
    FUNC_7(0x03, 0x10);
    FUNC_7(0x02,VAR_1);
    FUNC_1(VAR_2);
    return;
   }
   if(VAR_9&0x08) {
    *VAR_8 |= (VAR_9<<8);
    FUNC_7(0x03, 0x08);
    FUNC_7(0x02,VAR_1);
    FUNC_1(VAR_2);
    return;
   }

   *VAR_8 |= (VAR_9<<8);
   FUNC_9(VAR_8);
   FUNC_7(0x02,VAR_1);
  }
  FUNC_1(VAR_2);
 }
}
