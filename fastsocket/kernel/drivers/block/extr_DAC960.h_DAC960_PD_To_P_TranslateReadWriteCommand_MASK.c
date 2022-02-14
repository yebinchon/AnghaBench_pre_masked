
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int LogicalDriveNumber; } ;
struct TYPE_6__ {TYPE_1__ LD; } ;
struct TYPE_7__ {int* Bytes; TYPE_2__ Type5; } ;
typedef TYPE_3__ DAC960_V1_CommandMailbox_T ;



__attribute__((used)) static inline
void FUNC_0(DAC960_V1_CommandMailbox_T
           *VAR_0)
{
  int VAR_1 = VAR_0->Type5.LD.LogicalDriveNumber;
  VAR_0->Bytes[3] &= 0x7;
  VAR_0->Bytes[3] |= VAR_0->Bytes[7] << 6;
  VAR_0->Bytes[7] = VAR_1;
}
