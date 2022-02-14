
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stat; int ssr; int isr; int ph; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 VAR_1[VAR_2].stat = VAR_3;
 VAR_1[VAR_2].ssr = VAR_4;
 VAR_1[VAR_2].isr = VAR_5;
 VAR_1[VAR_2].ph = VAR_6;

 VAR_2 = (VAR_2 + 1) & (VAR_0-1);
}
