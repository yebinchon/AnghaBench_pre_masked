
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct TYPE_11__ {int* buf; } ;
struct TYPE_12__ {int flush; int style_atom_count; TYPE_1__ style_atoms; TYPE_5__* in_style; } ;
typedef TYPE_2__ hb_tx3g_style_context_t ;
struct TYPE_13__ {char* buf; scalar_t__ size; scalar_t__ alloc; } ;
typedef TYPE_3__ hb_tx3g_output_buf_t ;
struct TYPE_14__ {int event_style_default; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (char*) ;
 char** FUNC_2 (char*,int) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int*,char*,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,char const*) ;
 char* FUNC_9 (char const*,int*,TYPE_5__*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (TYPE_2__*,int) ;

void FUNC_12(
    hb_tx3g_style_context_t * VAR_0,
    uint8_t * VAR_1,
    uint8_t ** VAR_2,
    uint8_t ** VAR_3,
    uint16_t * VAR_4)
{
    uint16_t VAR_5 = 0;
    int VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9;
    hb_tx3g_output_buf_t VAR_10;
    char * VAR_11;
    const char * VAR_12, * VAR_13;

    VAR_10.buf = ((void*)0);
    VAR_10.alloc = 0;
    VAR_10.size = 0;
    *VAR_2 = ((void*)0);
    *VAR_3 = ((void*)0);
    *VAR_4 = 0;

    FUNC_7(VAR_0->in_style);


    char ** VAR_14 = FUNC_2((char*)VAR_1, 9);
    if (FUNC_4(VAR_14) < 9)
    {

        goto fail;
    }

    VAR_13 = VAR_14[2];
    VAR_12 = VAR_14[8];
    VAR_0->in_style->event_style_default = FUNC_8(VAR_0->in_style, VAR_13);
    FUNC_5(VAR_0);

    VAR_7 = 0;

    if (!FUNC_0(&VAR_10, 1))
    {
        goto fail;
    }
    while (VAR_12[VAR_7] != '\0')
    {
        VAR_11 = FUNC_9(VAR_12 + VAR_7, &VAR_6, VAR_0->in_style);
        if (VAR_11 == ((void*)0))
            break;


        VAR_9 = 0;
        int VAR_15, VAR_16;
        for (VAR_15 = 0; VAR_11[VAR_15] != '\0'; VAR_15 += VAR_16)
        {
            int VAR_17;
            char VAR_18 = VAR_11[VAR_15];

            VAR_5++;
            if ((VAR_18 & 0x80) == 0x00) VAR_16 = 1;
            else if ((VAR_18 & 0xE0) == 0xC0) VAR_16 = 2;
            else if ((VAR_18 & 0xF0) == 0xE0) VAR_16 = 3;
            else if ((VAR_18 & 0xF8) == 0xF0) VAR_16 = 4;
            else VAR_16 = 1;


            for (VAR_17 = 1; VAR_17 < VAR_16 && VAR_11[VAR_15 + VAR_17] != '\0'; VAR_17++);
            VAR_16 = VAR_17;
            VAR_9 += VAR_16;
        }
        if (!FUNC_0(&VAR_10, VAR_8 + VAR_9 + 1))
        {
            goto fail;
        }
        FUNC_10((char*)VAR_10.buf + VAR_8, VAR_11);
        FUNC_1(VAR_11);
        VAR_8 += VAR_9;
        VAR_7 += VAR_6;
        if (!FUNC_11(VAR_0, VAR_5))
        {
            goto fail;
        }
    }


    VAR_0->flush = 1;
    if (!FUNC_11(VAR_0, VAR_5))
    {
        goto fail;
    }


    VAR_10.buf[VAR_8] = 0;

    if (VAR_0->style_atom_count > 0)
    {
        *VAR_4 = 10 + (VAR_0->style_atom_count * 12);

        FUNC_6(VAR_0->style_atoms.buf + 4, "styl", 4);

        VAR_0->style_atoms.buf[0] = 0;
        VAR_0->style_atoms.buf[1] = 0;
        VAR_0->style_atoms.buf[2] = (*VAR_4 >> 8) & 0xff;
        VAR_0->style_atoms.buf[3] = *VAR_4 & 0xff;
        VAR_0->style_atoms.buf[8] = (VAR_0->style_atom_count >> 8) & 0xff;
        VAR_0->style_atoms.buf[9] = VAR_0->style_atom_count & 0xff;
        *VAR_3 = VAR_0->style_atoms.buf;
    }
    *VAR_2 = VAR_10.buf;
    FUNC_3(VAR_14);

    return;

fail:
    FUNC_3(VAR_14);
    FUNC_1(VAR_10.buf);
    FUNC_1(VAR_0->style_atoms.buf);
}
