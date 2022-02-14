
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct TYPE_3__ {int SAIndex; int DAIndex; } ;
struct TYPE_4__ {TYPE_1__ Data; } ;
struct zsAdditionInfo {TYPE_2__ Tail; } ;
u8_t FUNC_0(struct zsAdditionInfo* VAR_0)
{
    u8_t VAR_1;
    u8_t VAR_2;

    VAR_1 = (VAR_0->Tail.Data.SAIndex & 0xc0) >> 4;
    VAR_1 |= (VAR_0->Tail.Data.DAIndex & 0xc0) >> 6;

    switch( VAR_1 )
    {
        case 132:
        case 128:
        case 130:
        case 129:



        case 131:
        case 134:

            VAR_2 = VAR_1;
            break;

        default:

            if ( (VAR_1 & 0xf8) == 0x08 )
            {

            }

            VAR_2 = 132;
            break;
    }

    return VAR_2;
}
