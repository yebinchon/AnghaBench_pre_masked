
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const cpu_flag; scalar_t__ name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int,int,int,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,int) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (char*,...) ;

int FUNC_9(int VAR_6, char **VAR_7)
{
    int VAR_8 = 0, VAR_9 = 0;
    int VAR_10, VAR_11;
    int VAR_12 = 1;
    int VAR_13 = 0;
    int VAR_14 = 0;
    int VAR_15=8;

    FUNC_4();

    for (;;) {
        VAR_10 = FUNC_5(VAR_6, VAR_7, "ih4t");
        if (VAR_10 == -1)
            break;
        switch (VAR_10) {
        case 'i':
            VAR_8 = 1;
            break;
        case '4':
            VAR_9 = 1;
            break;
        case 't':
            VAR_13 = 1;
            break;
        default:
        case 'h':
            FUNC_6();
            return 0;
        }
    }

    if (VAR_5 < VAR_6)
        VAR_12 = FUNC_1(VAR_7[VAR_5]);
    if(VAR_5+1 < VAR_6) VAR_15= FUNC_1(VAR_7[VAR_5+1]);

    FUNC_8("ffmpeg DCT/IDCT test\n");

    if (VAR_9) {
        FUNC_7("SIMPLE-C", VAR_2, VAR_13);
    } else {
        const int VAR_16 = FUNC_2();
        if (VAR_8) {
            for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++)
                VAR_14 |= FUNC_3(&VAR_3[VAR_11], VAR_12, VAR_8, VAR_13, VAR_15);

            for (VAR_11 = 0; VAR_4[VAR_11].name; VAR_11++)
                if (!(~VAR_16 & VAR_4[VAR_11].cpu_flag))
                    VAR_14 |= FUNC_3(&VAR_4[VAR_11], VAR_12, VAR_8, VAR_13, VAR_15);
        }
    }

    if (VAR_14)
        FUNC_8("Error: %d.\n", VAR_14);

    return !!VAR_14;
}
