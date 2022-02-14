
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct TYPE_3__* next; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0()
{
 u32 VAR_3;
 for(VAR_3=0;VAR_3<VAR_0-1;++VAR_3) {
  VAR_1[VAR_3].next = VAR_1+VAR_3+1;
 }
 VAR_1[VAR_3].next = ((void*)0);
 VAR_2 = VAR_1;
}
