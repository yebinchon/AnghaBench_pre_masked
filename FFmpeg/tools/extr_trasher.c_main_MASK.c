
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,int,int,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 unsigned long long FUNC_8 () ;
 void* VAR_3 ;

int FUNC_9(int VAR_4, char **VAR_5)
{
    FILE *VAR_6;
    int VAR_7, VAR_8, VAR_9;

    if (VAR_4 < 5) {
        FUNC_7("USAGE: trasher <filename> <count> <maxburst> <seed>\n");
        return 1;
    }

    VAR_6 = FUNC_3(VAR_5[1], "rb+");
    if (!VAR_6) {
        FUNC_6(VAR_5[1]);
        return 2;
    }
    VAR_7 = FUNC_1(VAR_5[2]);
    VAR_8 = FUNC_1(VAR_5[3]);
    VAR_3 = FUNC_1(VAR_5[4]);

    FUNC_2(VAR_6, 0, VAR_0);
    VAR_9 = FUNC_4(VAR_6);
    FUNC_2(VAR_6, 0, VAR_1);

    while (VAR_7--) {
        int VAR_10 = 1 + FUNC_8() * (uint64_t) (FUNC_0(VAR_8) - 1) / VAR_2;
        int VAR_11 = FUNC_8() * (uint64_t) VAR_9 / VAR_2;
        FUNC_2(VAR_6, VAR_11, VAR_1);

        if (VAR_8 < 0)
            VAR_10 = -VAR_8;

        if (VAR_11 + VAR_10 > VAR_9)
            continue;

        while (VAR_10--) {
            int VAR_12 = FUNC_8() * 256ULL / VAR_2;

            if (VAR_8 < 0)
                VAR_12 = 0;

            FUNC_5(&VAR_12, 1, 1, VAR_6);
        }
    }

    return 0;
}
