
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int hexbuf ;
typedef int buf2 ;
typedef int buf1 ;
struct TYPE_4__ {scalar_t__ cycles; int PC; int SR; int* D; int* A; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*,int,int,int *) ;
 int * VAR_6 ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,char,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*) ;
 int * FUNC_11 (char*,char*) ;
 char* FUNC_12 (TYPE_1__*,int,int*) ;
 int FUNC_13 (int *,int *,int ,int) ;
 scalar_t__ FUNC_14 (char*,int,char*,...) ;
 TYPE_1__* VAR_7 ;
 int FUNC_15 (char const*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ const VAR_9 ;
 scalar_t__ const VAR_10 ;

void FUNC_16(void)
{
    const uint64_t VAR_11 = VAR_8 + VAR_7->cycles;

    if (VAR_11 < VAR_9) {



    } else if (VAR_11 >= VAR_10) {


        if (VAR_6) {

            FUNC_9(VAR_6);



            VAR_6 = ((void*)0);
        }

    } else {

        if (!VAR_6) {

            VAR_6 = FUNC_11("gzip -3 >q68.log.gz", "w");



            if (FUNC_2(!VAR_6)) {
                FUNC_10("Failed to open trace logfile");
                return;
            }
            FUNC_13(VAR_6, ((void*)0), VAR_5, 65536);
        }

        int VAR_12 = 1, VAR_13;
        const char *VAR_14 = FUNC_12(VAR_7, VAR_7->PC, &VAR_12);
        char VAR_15[100];
        int VAR_16 = 0;

        if (VAR_12 > 3) {
            VAR_12 = 3;
        }
        for (VAR_13 = 0; VAR_13 < VAR_12 && VAR_16 < sizeof(VAR_15)-5; VAR_13++) {
            VAR_16 += FUNC_14(VAR_15+VAR_16, sizeof(VAR_15)-VAR_16,
                               "%s%04X", VAR_16==0 ? "" : " ",
                               (int)FUNC_1(VAR_7, VAR_7->PC+2*VAR_13));
        }

        FUNC_5(VAR_6, "%06X: %-14s  %-26s  SR=%04X %c%c%c%c%c  [%10llu]\n"
                         "    D: %08X %08X %08X %08X %08X %08X %08X %08X\n"
                         "    A: %08X %08X %08X %08X %08X %08X %08X %08X\n",
                (int)VAR_7->PC, VAR_15, VAR_14, (int)VAR_7->SR,
                VAR_7->SR & VAR_3 ? 'X' : '.', VAR_7->SR & VAR_1 ? 'N' : '.',
                VAR_7->SR & VAR_4 ? 'Z' : '.', VAR_7->SR & VAR_2 ? 'V' : '.',
                VAR_7->SR & VAR_0 ? 'C' : '.', (unsigned long long)VAR_11,
                (int)VAR_7->D[0], (int)VAR_7->D[1], (int)VAR_7->D[2],
                (int)VAR_7->D[3], (int)VAR_7->D[4], (int)VAR_7->D[5],
                (int)VAR_7->D[6], (int)VAR_7->D[7],
                (int)VAR_7->A[0], (int)VAR_7->A[1], (int)VAR_7->A[2],
                (int)VAR_7->A[3], (int)VAR_7->A[4], (int)VAR_7->A[5],
                (int)VAR_7->A[6], (int)VAR_7->A[7]
            );


    }
}
