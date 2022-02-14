
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef double const uint16_t ;
struct keypoint {struct keypoint* next; int y; int x; } ;
struct TYPE_5__ {int len; int str; } ;
typedef int FILE ;
typedef TYPE_1__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const* const*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,int ,char*,char const*,int ) ;
 int VAR_3 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int,int ,int *) ;

__attribute__((used)) static int FUNC_11(const char *VAR_4, uint16_t *VAR_5[VAR_2 + 1],
                       struct keypoint *VAR_6[VAR_2 + 1],
                       int VAR_7)
{
    int VAR_8;
    AVBPrint VAR_9;
    const double VAR_10 = 1. / (VAR_7 - 1);
    static const char * const VAR_11[] = { "red", "green", "blue", "#404040", };
    FILE *VAR_12 = FUNC_7(VAR_4, "w");

    FUNC_2(FUNC_1(VAR_11) == VAR_2 + 1);

    if (!VAR_12) {
        int VAR_13 = FUNC_0(VAR_3);
        FUNC_8(((void*)0), VAR_1, "Cannot open file '%s' for writing: %s\n",
               VAR_4, FUNC_6(VAR_13));
        return VAR_13;
    }

    FUNC_4(&VAR_9, 0, VAR_0);

    FUNC_5(&VAR_9, "set xtics 0.1\n");
    FUNC_5(&VAR_9, "set ytics 0.1\n");
    FUNC_5(&VAR_9, "set size square\n");
    FUNC_5(&VAR_9, "set grid\n");

    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_11); VAR_8++) {
        FUNC_5(&VAR_9, "%s'-' using 1:2 with lines lc '%s' title ''",
                   VAR_8 ? ", " : "plot ", VAR_11[VAR_8]);
        if (VAR_6[VAR_8])
            FUNC_5(&VAR_9, ", '-' using 1:2 with points pointtype 3 lc '%s' title ''",
                    VAR_11[VAR_8]);
    }
    FUNC_5(&VAR_9, "\n");

    for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_11); VAR_8++) {
        int VAR_14;


        for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
            FUNC_5(&VAR_9, "%f %f\n", VAR_14 * VAR_10, VAR_5[VAR_8][VAR_14] * VAR_10);
        FUNC_5(&VAR_9, "e\n");


        if (VAR_6[VAR_8]) {
            const struct keypoint *VAR_15 = VAR_6[VAR_8];

            while (VAR_15) {
                FUNC_5(&VAR_9, "%f %f\n", VAR_15->x, VAR_15->y);
                VAR_15 = VAR_15->next;
            }
            FUNC_5(&VAR_9, "e\n");
        }
    }

    FUNC_10(VAR_9.str, 1, VAR_9.len, VAR_12);
    FUNC_9(VAR_12);
    FUNC_3(&VAR_9, ((void*)0));
    return 0;
}
