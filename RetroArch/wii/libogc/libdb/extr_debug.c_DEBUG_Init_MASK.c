
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u32 ;
typedef int u16 ;
struct uip_ip_addr {void* addr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_7 (struct uip_ip_addr*,struct uip_ip_addr*,struct uip_ip_addr*,int ) ;
 void* FUNC_8 (int const*) ;
 int * FUNC_9 (scalar_t__) ;

void FUNC_10(s32 VAR_11,s32 VAR_12)
{
 u32 VAR_13;
 struct uip_ip_addr VAR_14,VAR_15,VAR_16;

 FUNC_0("DEBUG_Init()\n");

 FUNC_4();

 FUNC_6();

 if(VAR_11==VAR_4) {
  VAR_5 = FUNC_9(VAR_12);
 } else {
  VAR_14.addr = FUNC_8((const u8_t*)VAR_9);
  VAR_15.addr = FUNC_8((const u8_t*)VAR_10);
  VAR_16.addr = FUNC_8((const u8_t*)VAR_8);

  VAR_5 = FUNC_7(&VAR_14,&VAR_15,&VAR_16,(u16)VAR_12);
 }

 if(VAR_5!=((void*)0)) {
  FUNC_1(VAR_13);
  FUNC_3(VAR_0,VAR_6);
  FUNC_3(VAR_2,VAR_6);
  FUNC_3(VAR_3,VAR_6);
  FUNC_3(VAR_1,VAR_6);
  FUNC_2(VAR_13);

  VAR_7 = 1;

 }
 FUNC_5();
}
