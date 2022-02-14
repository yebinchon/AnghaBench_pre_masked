
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ poll; } ;
struct TYPE_3__ {int chan; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;

void FUNC_6()
{
 u32 VAR_6;
 for(VAR_6=0;VAR_6<4;VAR_6++) {
  VAR_5[VAR_6].chan = -1;
  FUNC_4(&VAR_3[VAR_6]);
 }
 VAR_4.poll = 0;

 FUNC_3(0);
 while(VAR_2[13]&0x0001);
 VAR_2[13] = 0x80000000;

 VAR_2[15] &= ~0x80000000;

 FUNC_1(VAR_0,VAR_1,((void*)0));
 FUNC_5(FUNC_0(VAR_0));

 FUNC_2(0);
 FUNC_2(1);
 FUNC_2(2);
 FUNC_2(3);
}
