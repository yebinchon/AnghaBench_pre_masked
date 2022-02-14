
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __gxfifo {int wt_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

volatile void* FUNC_9(void *VAR_5)
{
 u32 VAR_6;
 struct __gxfifo *VAR_7 = (struct __gxfifo*)&VAR_3;

 FUNC_3(VAR_6);
 FUNC_0();
 while(!FUNC_1());

 FUNC_8(0x0C008000);
 if(VAR_2) {
  FUNC_5(VAR_1);
  FUNC_6(VAR_0,VAR_0);
 }
 VAR_7->wt_ptr = (u32)FUNC_2(VAR_4[5]&~0x04000000);

 VAR_4[3] = 0;
 VAR_4[4] = 0x04000000;
 VAR_4[5] = (((u32)VAR_5&0x3FFFFFE0)&~0x04000000);
 FUNC_7();

 FUNC_4(VAR_6);

 return (volatile void*)0x0C008000;
}
