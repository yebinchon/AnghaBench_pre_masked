
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cba_vect ;
typedef int cb1_vect ;


 int VAR_0 ;
 int VAR_1 ;
 float** VAR_2 ;
 float** VAR_3 ;
 int FUNC_0 (float*,float const*,float*,int,int ) ;
 int FUNC_1 (float*,float const*,float**,float*,float*,float*,int*,float*) ;
 int FUNC_2 (float*,float*,int) ;
 int FUNC_3 (float*,float*) ;

__attribute__((used)) static void FUNC_4(float *VAR_4, const float *VAR_5, float *VAR_6,
                            int VAR_7, int *VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11;
    float VAR_12;
    float VAR_13[VAR_0], VAR_14[VAR_0];
    float VAR_15[VAR_0];





    if (VAR_7)
        FUNC_2(VAR_13, VAR_4, sizeof(VAR_13));

    FUNC_1(VAR_4, VAR_5, VAR_2, VAR_7 ? VAR_13 : ((void*)0), ((void*)0),
                   VAR_6, VAR_8, &VAR_12);





    if (VAR_12) {
        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
            VAR_15[VAR_10] = VAR_2[*VAR_8][VAR_10];
        FUNC_0(VAR_4, VAR_5, VAR_15, VAR_0, VAR_1);
        if (VAR_7)
            FUNC_3(VAR_4, VAR_13);
        for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
            VAR_6[VAR_10] -= VAR_12 * VAR_4[VAR_10];
        FUNC_2(VAR_14, VAR_4, sizeof(VAR_14));
        VAR_11 = 1;
    } else
        VAR_11 = 0;

    FUNC_1(VAR_4, VAR_5, VAR_3, VAR_7 ? VAR_13 : ((void*)0),
                   VAR_11 ? VAR_14 : ((void*)0), VAR_6, VAR_9, &VAR_12);
}
