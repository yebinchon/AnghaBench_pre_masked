
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Flags; } ;
typedef TYPE_1__ MCOperandInfo ;


 int VAR_0 ;

bool FUNC_0(const MCOperandInfo *VAR_1)
{
 return VAR_1->Flags & (1 << VAR_0);
}
