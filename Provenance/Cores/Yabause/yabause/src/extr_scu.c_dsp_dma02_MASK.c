
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_5__ {scalar_t__ T0; } ;
struct TYPE_6__ {TYPE_1__ part; } ;
struct TYPE_7__ {size_t* CT; int** MD; int WA0; TYPE_2__ ProgControlPort; } ;
typedef TYPE_3__ scudspregs_struct ;


 int FUNC_0 (int,int) ;

void FUNC_1(scudspregs_struct *VAR_0, u32 VAR_1)
{
    u32 VAR_2 = ((VAR_1 & 0xFF));
    u8 VAR_3 = ((VAR_1 >> 8) & 0x03);
    u8 VAR_4 = VAR_0->CT[VAR_3];
    u8 VAR_5;
    u32 VAR_6;

    switch (((VAR_1 >> 15) & 0x07))
    {
    case 0: VAR_5 = 0; break;
    case 1: VAR_5 = 1; break;
    case 2: VAR_5 = 2; break;
    case 3: VAR_5 = 4; break;
    case 4: VAR_5 = 8; break;
    case 5: VAR_5 = 16; break;
    case 6: VAR_5 = 32; break;
    case 7: VAR_5 = 64; break;
    }

    if (VAR_5 != 1)
    {
        for ( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
        {
            u32 VAR_7 = VAR_0->MD[VAR_3][VAR_0->CT[VAR_3]];
            u32 VAR_8 = (VAR_0->WA0 << 2);

            FUNC_0(VAR_8, VAR_7);
            VAR_0->CT[VAR_3]++;
            VAR_0->WA0 += VAR_5 >> 1;
            VAR_0->CT[VAR_3] &= 0x3F;
        }
    }
    else{

        for ( VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
        {
            u32 VAR_9 = VAR_0->MD[VAR_3][VAR_0->CT[VAR_3]];
            u32 VAR_10 = (VAR_0->WA0 << 2);

            FUNC_0(VAR_10, VAR_9);
            VAR_0->CT[VAR_3]++;
            VAR_0->CT[VAR_3] &= 0x3F;
            VAR_0->WA0 += 1;
        }

    }
    VAR_0->ProgControlPort.part.T0 = 0;
}
