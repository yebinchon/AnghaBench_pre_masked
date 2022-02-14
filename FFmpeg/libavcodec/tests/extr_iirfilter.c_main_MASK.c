
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FFIIRFilterState {int dummy; } ;
struct FFIIRFilterCoeffs {int dummy; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct FFIIRFilterCoeffs*,struct FFIIRFilterState*,int,int*,int,int*,int) ;
 int FUNC_1 (struct FFIIRFilterCoeffs**) ;
 int FUNC_2 (struct FFIIRFilterState**) ;
 struct FFIIRFilterCoeffs* FUNC_3 (int *,int ,int ,int ,float,double,double) ;
 struct FFIIRFilterState* FUNC_4 (int ) ;
 int FUNC_5 (double) ;
 int FUNC_6 (char*,int,int) ;
 double FUNC_7 (double) ;

int FUNC_8(void)
{
    struct FFIIRFilterCoeffs *VAR_6 = ((void*)0);
    struct FFIIRFilterState *VAR_7 = ((void*)0);
    float VAR_8 = 0.4;
    int16_t VAR_9[VAR_5], VAR_10[VAR_5];
    int VAR_11;

    VAR_6 = FUNC_3(((void*)0), VAR_1,
                                        VAR_0, VAR_2,
                                        VAR_8, 0.0, 0.0);
    VAR_7 = FUNC_4(VAR_2);

    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        VAR_9[VAR_11] = FUNC_5(0.75 * VAR_3 * FUNC_7(0.5 * VAR_4 * VAR_11 * VAR_11 / VAR_5));

    FUNC_0(VAR_6, VAR_7, VAR_5, VAR_9, 1, VAR_10, 1);

    for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
        FUNC_6("%6d %6d\n", VAR_9[VAR_11], VAR_10[VAR_11]);

    FUNC_1(&VAR_6);
    FUNC_2(&VAR_7);
    return 0;
}
