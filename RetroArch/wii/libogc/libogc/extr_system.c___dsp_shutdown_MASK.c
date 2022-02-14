
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int,int) ;
 int* VAR_6 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2()
{
 u32 VAR_7;

 VAR_6[5] = (VAR_3|VAR_4);
 VAR_6[27] &= ~0x8000;
 while(VAR_6[5]&0x400);
 while(VAR_6[5]&0x200);

 VAR_6[5] = (VAR_3|VAR_2|VAR_1|VAR_0|VAR_4);
 VAR_6[0] = 0;
 while((FUNC_0(VAR_6[2],16,16)|(VAR_6[3]&0xffff))&0x80000000);

 VAR_7 = FUNC_1();
 while((FUNC_1()-VAR_7)<44);

 VAR_6[5] |= VAR_5;
 while(VAR_6[5]&VAR_5);
}
