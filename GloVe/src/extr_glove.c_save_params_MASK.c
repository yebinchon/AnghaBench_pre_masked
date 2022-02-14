
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int FILE ;


 int VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int*,int,int,int *) ;
 int* VAR_2 ;
 char* FUNC_7 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_8 (char*,char*,...) ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 long long VAR_12 ;
 scalar_t__ VAR_13 ;

int FUNC_10(int VAR_14) {






    long long VAR_15, VAR_16;
    char VAR_17[20];
    char VAR_18[VAR_0], VAR_19[VAR_0];
    char *VAR_20 = FUNC_7(sizeof(char) * VAR_0 + 1);
    FILE *VAR_21, *VAR_22, *VAR_23;

    if (VAR_8 > 0) {
        if (VAR_14 <= 0)
            FUNC_8(VAR_18,"%s.bin",VAR_4);
        else
            FUNC_8(VAR_18,"%s.%03d.bin",VAR_4,VAR_14);

        VAR_22 = FUNC_2(VAR_18,"wb");
        if (VAR_22 == ((void*)0)) {FUNC_3(&VAR_7, "Unable to open file %s.\n",VAR_4); return 1;}
        for (VAR_15 = 0; VAR_15 < 2 * (long long)VAR_12 * (VAR_10 + 1); VAR_15++) FUNC_6(&VAR_1[VAR_15], sizeof(real), 1,VAR_22);
        FUNC_1(VAR_22);
        if (VAR_5 > 0) {
            if (VAR_14 <= 0)
                FUNC_8(VAR_19,"%s.bin",VAR_6);
            else
                FUNC_8(VAR_19,"%s.%03d.bin",VAR_6,VAR_14);

            VAR_23 = FUNC_2(VAR_19,"wb");
            if (VAR_23 == ((void*)0)) {FUNC_3(&VAR_7, "Unable to open file %s.\n",VAR_6); return 1;}
            for (VAR_15 = 0; VAR_15 < 2 * (long long)VAR_12 * (VAR_10 + 1); VAR_15++) FUNC_6(&VAR_2[VAR_15], sizeof(real), 1,VAR_23);
            FUNC_1(VAR_23);
        }
    }
    if (VAR_8 != 1) {
        if (VAR_14 <= 0)
            FUNC_8(VAR_18,"%s.txt",VAR_4);
        else
            FUNC_8(VAR_18,"%s.%03d.txt",VAR_4,VAR_14);
        if (VAR_5 > 0) {
            if (VAR_14 <= 0)
                FUNC_8(VAR_19,"%s.txt",VAR_6);
            else
                FUNC_8(VAR_19,"%s.%03d.txt",VAR_6,VAR_14);

            VAR_23 = FUNC_2(VAR_19,"wb");
            if (VAR_23 == ((void*)0)) {FUNC_3(&VAR_7, "Unable to open file %s.\n",VAR_6); return 1;}
        }
        VAR_22 = FUNC_2(VAR_18,"wb");
        if (VAR_22 == ((void*)0)) {FUNC_3(&VAR_7, "Unable to open file %s.\n",VAR_4); return 1;}
        VAR_21 = FUNC_2(VAR_11, "r");
        FUNC_8(VAR_17,"%%%ds",VAR_0);
        if (VAR_21 == ((void*)0)) {FUNC_3(&VAR_7, "Unable to open file %s.\n",VAR_11); return 1;}
        if (VAR_13) FUNC_3(VAR_22, "%lld %d\n", VAR_12, VAR_10);
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            if (FUNC_5(VAR_21,VAR_17,VAR_20) == 0) return 1;

            if (FUNC_9(VAR_20, "<unk>") == 0) return 1;
            FUNC_3(VAR_22, "%s",VAR_20);
            if (VAR_3 == 0) {
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) FUNC_3(VAR_22," %lf", VAR_1[VAR_15 * (VAR_10 + 1) + VAR_16]);
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) FUNC_3(VAR_22," %lf", VAR_1[(VAR_12 + VAR_15) * (VAR_10 + 1) + VAR_16]);
            }
            if (VAR_3 == 1)
                for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) FUNC_3(VAR_22," %lf", VAR_1[VAR_15 * (VAR_10 + 1) + VAR_16]);
            if (VAR_3 == 2)
                for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) FUNC_3(VAR_22," %lf", VAR_1[VAR_15 * (VAR_10 + 1) + VAR_16] + VAR_1[(VAR_12 + VAR_15) * (VAR_10 + 1) + VAR_16]);
            FUNC_3(VAR_22,"\n");
            if (VAR_5 > 0) {
                FUNC_3(VAR_23, "%s",VAR_20);
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) FUNC_3(VAR_23," %lf", VAR_2[VAR_15 * (VAR_10 + 1) + VAR_16]);
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) FUNC_3(VAR_23," %lf", VAR_2[(VAR_12 + VAR_15) * (VAR_10 + 1) + VAR_16]);
                FUNC_3(VAR_23,"\n");
            }
            if (FUNC_5(VAR_21,VAR_17,VAR_20) == 0) return 1;
        }

        if (VAR_9) {
            real* VAR_24 = (real*)FUNC_0((VAR_10 + 1), sizeof(real));
            real* VAR_25 = (real*)FUNC_0((VAR_10 + 1), sizeof(real));
            VAR_20 = "<unk>";

            int VAR_26 = VAR_12 < 100 ? VAR_12 : 100;

            for (VAR_15 = VAR_12 - VAR_26; VAR_15 < VAR_12; VAR_15++) {
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) {
                    VAR_24[VAR_16] += VAR_1[VAR_15 * (VAR_10 + 1) + VAR_16] / VAR_26;
                    VAR_25[VAR_16] += VAR_1[(VAR_12 + VAR_15) * (VAR_10 + 1) + VAR_16] / VAR_26;
                }
            }

            FUNC_3(VAR_22, "%s",VAR_20);
            if (VAR_3 == 0) {
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) FUNC_3(VAR_22," %lf", VAR_24[VAR_16]);
                for (VAR_16 = 0; VAR_16 < (VAR_10 + 1); VAR_16++) FUNC_3(VAR_22," %lf", VAR_25[VAR_16]);
            }
            if (VAR_3 == 1)
                for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) FUNC_3(VAR_22," %lf", VAR_24[VAR_16]);
            if (VAR_3 == 2)
                for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) FUNC_3(VAR_22," %lf", VAR_24[VAR_16] + VAR_25[VAR_16]);
            FUNC_3(VAR_22,"\n");

            FUNC_4(VAR_24);
            FUNC_4(VAR_25);
        }

        FUNC_1(VAR_21);
        FUNC_1(VAR_22);
        if (VAR_5 > 0) FUNC_1(VAR_23);
    }
    return 0;
}
