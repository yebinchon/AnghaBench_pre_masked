
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_4)
{
 int VAR_5;
 u32 VAR_6;
 u32 VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if(VAR_4 & VAR_2[VAR_5]) {
   VAR_6 = FUNC_0(VAR_3->base +
    VAR_0[VAR_5]);
   FUNC_1("VME Mailbox %d received: 0x%x\n", VAR_5, VAR_6);
   VAR_7 |= VAR_1[VAR_5];
  }
 }

 return VAR_7;
}
