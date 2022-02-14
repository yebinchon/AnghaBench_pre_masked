
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 () ;
 int FUNC_2 (int,int,int) ;
 int* VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (void*,void*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6()
{
 u16 VAR_8;
 u32 VAR_9;

 FUNC_4(FUNC_1()-128,(void*)0x81000000,128);
 FUNC_4((void*)0x81000000,VAR_7,128);
 FUNC_0((void*)0x81000000,128);

 VAR_6[9] = 67;
 VAR_6[5] = (VAR_3|VAR_2|VAR_1|VAR_0|VAR_4);
 VAR_6[5] |= VAR_5;
 while(VAR_6[5]&VAR_5);

 VAR_6[0] = 0;
 while((FUNC_2(VAR_6[2],16,16)|(VAR_6[3]&0xffff))&0x80000000);

 ((u32*)VAR_6)[8] = 0x01000000;
 ((u32*)VAR_6)[9] = 0;
 ((u32*)VAR_6)[10] = 32;

 VAR_8 = VAR_6[5];
 while(!(VAR_8&VAR_1)) VAR_8 = VAR_6[5];
 VAR_6[5] = VAR_8;

 VAR_9 = FUNC_3();
 while((FUNC_3()-VAR_9)<2194);

 ((u32*)VAR_6)[8] = 0x01000000;
 ((u32*)VAR_6)[9] = 0;
 ((u32*)VAR_6)[10] = 32;

 VAR_8 = VAR_6[5];
 while(!(VAR_8&VAR_1)) VAR_8 = VAR_6[5];
 VAR_6[5] = VAR_8;

 VAR_6[5] &= ~VAR_3;
 while(VAR_6[5]&0x400);

 VAR_6[5] &= ~VAR_4;
 while(!(VAR_6[2]&0x8000));
 VAR_8 = VAR_6[3];

 VAR_6[5] |= VAR_4;
 VAR_6[5] = (VAR_3|VAR_2|VAR_1|VAR_0|VAR_4);
 VAR_6[5] |= VAR_5;
 while(VAR_6[5]&VAR_5);

 FUNC_4((void*)0x81000000,FUNC_1()-128,128);



}
