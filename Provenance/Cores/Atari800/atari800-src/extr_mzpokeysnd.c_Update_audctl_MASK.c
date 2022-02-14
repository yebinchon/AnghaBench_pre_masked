
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mdivk; int c1_f0; int c3_f2; int c0_hf; int c2_hf; unsigned int c0divpos; int c1divpos; unsigned int c2divpos; int c3divpos; int c0sw4; int c1sw4; } ;
typedef TYPE_1__ PokeyState ;



__attribute__((used)) static void FUNC_0(PokeyState* VAR_0, unsigned char VAR_1)
{
    int VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
    int VAR_9=0;
    int VAR_10=0;
    int VAR_11=0;
    int VAR_12=0;

    unsigned int VAR_13 = 0;
    unsigned int VAR_14 = 0;
    unsigned int VAR_15 = 0;
    unsigned int VAR_16 = 0;

    VAR_2 = (VAR_1 & 0x40) != 0;
    VAR_3 = (VAR_1 & 0x20) != 0;
    VAR_4 = (VAR_1 & 0x10) != 0;
    VAR_5 = (VAR_1 & 0x08) != 0;
    VAR_6 = (VAR_1 & 0x04) != 0;
    VAR_7 = (VAR_1 & 0x02) != 0;
    if(VAR_1 & 0x01)
        VAR_8 = 114;
    else
        VAR_8 = 28;

    if(VAR_8 != VAR_0->mdivk)
    {
        VAR_9 = VAR_10 = VAR_11 = VAR_12 = 1;
    }
    if(VAR_4 != VAR_0->c1_f0)
    {
        VAR_9 = VAR_10 = 1;
    }
    if(VAR_5 != VAR_0->c3_f2)
    {
        VAR_11 = VAR_12 = 1;
    }
    if(VAR_2 != VAR_0->c0_hf)
    {
        VAR_9 = 1;
        if(VAR_4)
            VAR_10 = 1;
    }
    if(VAR_3 != VAR_0->c2_hf)
    {
        VAR_11 = 1;
        if(VAR_5)
            VAR_12 = 1;
    }

    if(VAR_9)
    {
        if(VAR_0->c0_hf)
            VAR_13 = VAR_0->c0divpos;
        else
            VAR_13 = VAR_0->c0divpos/VAR_0->mdivk;
    }
    if(VAR_10)
    {
        if(VAR_0->c1_f0)
        {
            if(VAR_0->c0_hf)
                VAR_14 = VAR_0->c1divpos/256;
            else
                VAR_14 = VAR_0->c1divpos/256/VAR_0->mdivk;
        }
        else
        {
            VAR_14 = VAR_0->c1divpos/VAR_0->mdivk;
        }
    }
    if(VAR_11)
    {
        if(VAR_0->c2_hf)
            VAR_15 = VAR_0->c2divpos;
        else
            VAR_15 = VAR_0->c2divpos/VAR_0->mdivk;
    }
    if(VAR_12)
    {
        if(VAR_0->c3_f2)
        {
            if(VAR_0->c2_hf)
                VAR_16 = VAR_0->c3divpos/256;
            else
                VAR_16 = VAR_0->c3divpos/256/VAR_0->mdivk;
        }
    }

    if(VAR_9)
    {
        if(VAR_2)
            VAR_0->c0divpos = VAR_13;
        else
            VAR_0->c0divpos = VAR_13*VAR_8;
    }
    if(VAR_10)
    {
        if(VAR_4)
        {
            if(VAR_2)
                VAR_0->c1divpos = VAR_14*256+VAR_13;
            else
                VAR_0->c1divpos = (VAR_14*256+VAR_13)*VAR_8;
        }
        else
        {
            VAR_0->c1divpos = VAR_14*VAR_8;
        }
    }

    if(VAR_11)
    {
        if(VAR_3)
            VAR_0->c2divpos = VAR_15;
        else
            VAR_0->c2divpos = VAR_15*VAR_8;
    }
    if(VAR_12)
    {
        if(VAR_5)
        {
            if(VAR_3)
                VAR_0->c3divpos = VAR_16*256+VAR_15;
            else
                VAR_0->c3divpos = (VAR_16*256+VAR_15)*VAR_8;
        }
    }

    VAR_0->c0_hf = VAR_2;
    VAR_0->c2_hf = VAR_3;
    VAR_0->c1_f0 = VAR_4;
    VAR_0->c3_f2 = VAR_5;
    VAR_0->c0sw4 = VAR_6;
    VAR_0->c1sw4 = VAR_7;
    VAR_0->mdivk = VAR_8;
}
