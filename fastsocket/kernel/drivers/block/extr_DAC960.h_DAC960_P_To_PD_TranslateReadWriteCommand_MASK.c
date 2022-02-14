
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* Bytes; } ;
typedef TYPE_1__ DAC960_V1_CommandMailbox_T ;



__attribute__((used)) static inline
void FUNC_0(DAC960_V1_CommandMailbox_T
           *VAR_0)
{
  int VAR_1 = VAR_0->Bytes[7];
  VAR_0->Bytes[7] = VAR_0->Bytes[3] >> 6;
  VAR_0->Bytes[3] &= 0x7;
  VAR_0->Bytes[3] |= VAR_1 << 3;
}
