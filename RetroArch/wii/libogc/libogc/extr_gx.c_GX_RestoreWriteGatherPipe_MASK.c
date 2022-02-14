
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __gxfifo {scalar_t__ wt_ptr; int buf_end; int buf_start; } ;
struct TYPE_2__ {scalar_t__ U32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 TYPE_1__* VAR_6 ;

void FUNC_9()
{
 u32 VAR_7;
 struct __gxfifo *VAR_8 = (struct __gxfifo*)&VAR_4;

 FUNC_2(VAR_7);

 VAR_6->U32 = 0;
 VAR_6->U32 = 0;
 VAR_6->U32 = 0;
 VAR_6->U32 = 0;
 VAR_6->U32 = 0;
 VAR_6->U32 = 0;
 VAR_6->U32 = 0;
 VAR_6->U32 = 0;

 FUNC_8();
 while(!FUNC_0());

 FUNC_7(0x0C008000);
 VAR_5[3] = FUNC_1(VAR_8->buf_start);
 VAR_5[4] = FUNC_1(VAR_8->buf_end);
 VAR_5[5] = (((u32)VAR_8->wt_ptr&0x3FFFFFE0)&~0x04000000);
 if(VAR_3) {
  FUNC_6(VAR_2,VAR_2);
  FUNC_5(VAR_1,VAR_0);
  FUNC_4(VAR_2);
 }
 FUNC_3(VAR_7);
}
