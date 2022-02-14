
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_10(u32 VAR_7,void *VAR_8)
{



 u32 VAR_9 = 0;
 u32 VAR_10;
 s32 VAR_11,VAR_12;

 VAR_10 = VAR_1[24];
 if(VAR_10&0x8000) {
  VAR_1[24] = VAR_10&~0x8000;
  VAR_9 |= 0x01;
 }

 VAR_10 = VAR_1[26];
 if(VAR_10&0x8000) {
  VAR_1[26] = VAR_10&~0x8000;
  VAR_9 |= 0x02;
 }

 VAR_10 = VAR_1[28];
 if(VAR_10&0x8000) {
  VAR_1[28] = VAR_10&~0x8000;
  VAR_9 |= 0x04;
 }

 VAR_10 = VAR_1[30];
 if(VAR_10&0x8000) {
  VAR_1[30] = VAR_10&~0x8000;
  VAR_9 |= 0x08;
 }

 VAR_10 = VAR_1[30];
 if(VAR_9&0x04 || VAR_9&0x08) {
  if(&FUNC_7!=((void*)0)) {
   FUNC_3(&VAR_11,&VAR_12);
   FUNC_7(VAR_11,VAR_12);
  }
 }

 VAR_5++;
 if(&FUNC_9)
  FUNC_9(VAR_5);

 if(VAR_2) {
  if(FUNC_5()) {
   VAR_2 = 0;
   FUNC_1();
  }
 }
 if(&FUNC_8)
  FUNC_8(VAR_5);

 FUNC_0(VAR_6);
}
