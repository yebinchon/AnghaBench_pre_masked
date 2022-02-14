
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ T0; } ;
struct TYPE_7__ {TYPE_1__ part; } ;
struct TYPE_8__ {int** MD; size_t* CT; int WA0; TYPE_2__ ProgControlPort; } ;
typedef TYPE_3__ scudspregs_struct ;
struct TYPE_9__ {int * CT; } ;


 int FUNC_0 (int,int) ;
 TYPE_5__* VAR_0 ;

void FUNC_1(scudspregs_struct *VAR_1, u32 VAR_2)
{
    u32 VAR_3 = 0;
    u32 VAR_4 = 0;
    u32 VAR_5 = ((VAR_2 >> 8) & 0x03);
    u32 VAR_6;

    switch ((VAR_2 & 0x7))
    {
    case 0x00: VAR_3 = VAR_1->MD[0][VAR_1->CT[0]]; break;
    case 0x01: VAR_3 = VAR_1->MD[1][VAR_1->CT[1]]; break;
    case 0x02: VAR_3 = VAR_1->MD[2][VAR_1->CT[2]]; break;
    case 0x03: VAR_3 = VAR_1->MD[3][VAR_1->CT[3]]; break;
    case 0x04: VAR_3 = VAR_1->MD[0][VAR_1->CT[0]]; VAR_0->CT[0]++; break;
    case 0x05: VAR_3 = VAR_1->MD[1][VAR_1->CT[1]]; VAR_0->CT[1]++; break;
    case 0x06: VAR_3 = VAR_1->MD[2][VAR_1->CT[2]]; VAR_0->CT[2]++; break;
    case 0x07: VAR_3 = VAR_1->MD[3][VAR_1->CT[3]]; VAR_0->CT[3]++; break;
    }

    switch (((VAR_2 >> 15) & 0x07))
    {
    case 0: VAR_4 = 0; break;
    case 1: VAR_4 = 1; break;
    case 2: VAR_4 = 2; break;
    case 3: VAR_4 = 4; break;
    case 4: VAR_4 = 8; break;
    case 5: VAR_4 = 16; break;
    case 6: VAR_4 = 32; break;
    case 7: VAR_4 = 64; break;
    }

    for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
    {
        u32 VAR_7 = VAR_1->MD[VAR_5][VAR_1->CT[VAR_5]];
        u32 VAR_8 = (VAR_1->WA0 << 2);
        FUNC_0(VAR_8, VAR_7);
        VAR_1->CT[VAR_5]++;
        VAR_1->CT[VAR_5] &= 0x3F;
        VAR_1->WA0 += 1;

    }
    VAR_1->ProgControlPort.part.T0 = 0;
}
