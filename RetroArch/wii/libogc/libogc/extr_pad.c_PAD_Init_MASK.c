
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef int keyinput ;
struct TYPE_3__ {int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;
 int* VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_7 ;

u32 FUNC_6()
{
 u32 VAR_8;
 u16 VAR_9 = VAR_1;
 if(VAR_3) return 1;

 if(VAR_6) FUNC_1(VAR_6);

 FUNC_5(VAR_4,0,sizeof(keyinput)*VAR_0);

 VAR_5 = 0xf0000000;

 VAR_8 = 0;
 while(VAR_8<4) {
  VAR_4[VAR_8].chan = -1;
  VAR_2[VAR_8] = 0x4d000000|(VAR_8<<22)|FUNC_4(VAR_9,8,14);
  VAR_8++;
 }

 FUNC_2();
 FUNC_3(&VAR_7);

 VAR_3 = 1;
 return FUNC_0(0xf0000000);
}
