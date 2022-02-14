
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rambase; int interrupt; int * ioport; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,int ) ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_1(int VAR_3)
{

 FUNC_0((VAR_2[VAR_3]->rambase >> 12), VAR_2[VAR_3]->ioport[VAR_0]);


 FUNC_0((VAR_2[VAR_3]->interrupt | 0x80),
  VAR_2[VAR_3]->ioport[VAR_1]);
}
