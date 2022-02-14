
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct __gxfifo {int rd_ptr; int wt_ptr; scalar_t__ rdwt_dst; } ;
struct TYPE_2__ {int cpCRreg; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (scalar_t__,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int * VAR_9 ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11()
{
 u32 VAR_10;
 struct __gxfifo *VAR_11 = (struct __gxfifo*)&VAR_6;
 struct __gxfifo *VAR_12 = (struct __gxfifo*)&VAR_5;

 if(!VAR_7) return;

 FUNC_1(VAR_10);
 FUNC_6();
 FUNC_8(VAR_0,VAR_0);

 VAR_11->rd_ptr = VAR_11->wt_ptr;
 VAR_11->rdwt_dst = 0;


 VAR_3[24] = FUNC_3(VAR_11->rdwt_dst,0,16);
 VAR_3[25] = FUNC_4(VAR_11->rdwt_dst,16,16);


 VAR_3[26] = FUNC_3(FUNC_0(VAR_11->wt_ptr),0,16);
 VAR_3[27] = FUNC_4(FUNC_0(VAR_11->wt_ptr),16,16);


 VAR_3[28] = FUNC_3(FUNC_0(VAR_11->rd_ptr),0,16);
 VAR_3[29] = FUNC_4(FUNC_0(VAR_11->rd_ptr),16,16);
 FUNC_10();

 if(VAR_4) {
  VAR_12->rd_ptr = VAR_11->rd_ptr;
  VAR_12->wt_ptr = VAR_11->wt_ptr;
  VAR_12->rdwt_dst = VAR_11->rdwt_dst;

  VAR_8[5] = (VAR_12->wt_ptr&0x1FFFFFE0);
  FUNC_8(VAR_1,VAR_0);
  FUNC_5(VAR_1);
 }
 VAR_2->cpCRreg &= ~0x22;
 VAR_3[1] = VAR_2->cpCRreg;
 VAR_9 = ((void*)0);

 FUNC_9(VAR_1,VAR_1);
 FUNC_7();
 FUNC_2(VAR_10);
}
