
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CMDPMOD; } ;
typedef TYPE_1__ vdp1cmd_struct ;
typedef int u8 ;
typedef int Vdp1 ;


 scalar_t__ FUNC_0 (int,int *) ;
 scalar_t__ FUNC_1 (int,int,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(int VAR_4, int VAR_5, Vdp1 * VAR_6, vdp1cmd_struct *VAR_7, u8 * VAR_8) {

    int VAR_9 = VAR_5 / VAR_2;
    u8 * VAR_10 = &VAR_8[(VAR_9 * VAR_3) + VAR_4];
    int VAR_11 = VAR_7->CMDPMOD & 0x0100;
    int VAR_12 = ((VAR_7->CMDPMOD & 0x40) != 0);

    if (VAR_10 >= (VAR_8 + 0x40000))
        return;

    if (FUNC_0(VAR_5, VAR_6))
       return;

    VAR_0 &= 0xFF;

    if (VAR_11 && ((VAR_4 ^ VAR_9) & 1)) {
       return;
    }

    if (FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7))
       return;

    if ( VAR_12 || (VAR_0 & VAR_1))
    {
        switch( VAR_7->CMDPMOD & 0x7 )
        {
        default:
        case 0:
            if (!((VAR_0 == 0) && !VAR_12))
                *(VAR_10) = VAR_0;
            break;
        }
    }
}
