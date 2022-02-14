
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vector ;
struct TYPE_4__ {int align; scalar_t__ kind; int size; scalar_t__ bitsize; int offset; int bitoff; } ;
typedef TYPE_1__ Type ;
typedef int Dict ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,TYPE_1__*) ;
 int FUNC_3 (int*,int*) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__*,int) ;
 void** FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static Dict *FUNC_8(int *VAR_1, int *VAR_2, Vector *VAR_3) {
    int VAR_4 = 0, VAR_5 = 0;
    Dict *VAR_6 = FUNC_4();
    for (int VAR_7 = 0; VAR_7 < FUNC_7(VAR_3); VAR_7++) {
        void **VAR_8 = FUNC_6(VAR_3, VAR_7);
        char *VAR_9 = VAR_8[0];
        Type *VAR_10 = VAR_8[1];




        if (VAR_9)
            *VAR_2 = FUNC_0(*VAR_2, VAR_10->align);

        if (VAR_9 == ((void*)0) && VAR_10->kind == VAR_0) {

            FUNC_3(&VAR_4, &VAR_5);
            VAR_4 += FUNC_1(VAR_4, VAR_10->align);
            FUNC_5(VAR_6, VAR_10, VAR_4);
            VAR_4 += VAR_10->size;
            continue;
        }
        if (VAR_10->bitsize == 0) {


            FUNC_3(&VAR_4, &VAR_5);
            VAR_4 += FUNC_1(VAR_4, VAR_10->align);
            VAR_5 = 0;
            continue;
        }
        if (VAR_10->bitsize > 0) {
            int VAR_11 = VAR_10->size * 8;
            int VAR_12 = VAR_11 - (VAR_4 * 8 + VAR_5) % VAR_11;
            if (VAR_10->bitsize <= VAR_12) {
                VAR_10->offset = VAR_4;
                VAR_10->bitoff = VAR_5;
            } else {
                FUNC_3(&VAR_4, &VAR_5);
                VAR_4 += FUNC_1(VAR_4, VAR_10->align);
                VAR_10->offset = VAR_4;
                VAR_10->bitoff = 0;
            }
            VAR_5 += VAR_10->bitsize;
        } else {
            FUNC_3(&VAR_4, &VAR_5);
            VAR_4 += FUNC_1(VAR_4, VAR_10->align);
            VAR_10->offset = VAR_4;
            VAR_4 += VAR_10->size;
        }
        if (VAR_9)
            FUNC_2(VAR_6, VAR_9, VAR_10);
    }
    FUNC_3(&VAR_4, &VAR_5);
    *VAR_1 = VAR_4 + FUNC_1(VAR_4, *VAR_2);
    return VAR_6;
}
