
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
typedef int j ;
struct TYPE_13__ {int rndx; int wndx; } ;
typedef TYPE_1__ AVFifoBuffer ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int*,int,int,int *) ;
 int FUNC_4 (TYPE_1__*,int*,int,int *) ;
 int FUNC_5 (TYPE_1__*,int*,int,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int*) ;
 int* FUNC_14 (int) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char) ;
 int VAR_0 ;

int FUNC_17(void)
{

    AVFifoBuffer *VAR_1 = FUNC_0(13 * sizeof(int));
    int VAR_2, VAR_3, VAR_4, *VAR_5;


    for (VAR_2 = 0; FUNC_10(VAR_1) >= sizeof(int); VAR_2++)
        FUNC_5(VAR_1, &VAR_2, sizeof(int), ((void*)0));


    VAR_4 = FUNC_9(VAR_1) / sizeof(int);
    for (VAR_2 = -VAR_4 + 1; VAR_2 < VAR_4; VAR_2++) {
        int *VAR_6 = (int *)FUNC_7(VAR_1, VAR_2 * sizeof(int));
        FUNC_15("%d: %d\n", VAR_2, *VAR_6);
    }
    FUNC_15("\n");


    VAR_4 = FUNC_9(VAR_1) / sizeof(int);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        FUNC_3(VAR_1, &VAR_3, VAR_2 * sizeof(int), sizeof(VAR_3), ((void*)0));
        FUNC_15("%d: %d\n", VAR_2, VAR_3);
    }
    FUNC_15("\n");



    VAR_4 = FUNC_9(VAR_1);
    VAR_5 = FUNC_14(VAR_4);
    if (VAR_5 == ((void*)0)) {
        FUNC_12(VAR_0, "failed to allocate memory.\n");
        FUNC_11(1);
    }

    (void) FUNC_2(VAR_1, VAR_5, VAR_4, ((void*)0));


    VAR_4 /= sizeof(int);
    for(VAR_2 = 0; VAR_2 < VAR_4; ++VAR_2)
        FUNC_15("%d: %d\n", VAR_2, VAR_5[VAR_2]);

    FUNC_16('\n');


    for (VAR_2 = 0; FUNC_9(VAR_1) >= sizeof(int); VAR_2++) {
        FUNC_4(VAR_1, &VAR_3, sizeof(int), ((void*)0));
        FUNC_15("%d ", VAR_3);
    }
    FUNC_15("\n");


    FUNC_8(VAR_1);
    VAR_1->rndx = VAR_1->wndx = ~(uint32_t)0 - 5;


    for (VAR_2 = 0; FUNC_10(VAR_1) >= sizeof(int); VAR_2++)
        FUNC_5(VAR_1, &VAR_2, sizeof(int), ((void*)0));


    VAR_4 = FUNC_9(VAR_1) / sizeof(int);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        FUNC_3(VAR_1, &VAR_3, VAR_2 * sizeof(int), sizeof(VAR_3), ((void*)0));
        FUNC_15("%d: %d\n", VAR_2, VAR_3);
    }
    FUNC_16('\n');


    (void) FUNC_6(VAR_1, 15 * sizeof(int));


    VAR_4 = FUNC_9(VAR_1) / sizeof(int);
    for (VAR_2 = VAR_4; FUNC_10(VAR_1) >= sizeof(int); ++VAR_2)
        FUNC_5(VAR_1, &VAR_2, sizeof(int), ((void*)0));


    VAR_4 = FUNC_9(VAR_1) / sizeof(int);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
        FUNC_3(VAR_1, &VAR_3, VAR_2 * sizeof(int), sizeof(VAR_3), ((void*)0));
        FUNC_15("%d: %d\n", VAR_2, VAR_3);
    }

    FUNC_1(VAR_1);
    FUNC_13(VAR_5);

    return 0;
}
