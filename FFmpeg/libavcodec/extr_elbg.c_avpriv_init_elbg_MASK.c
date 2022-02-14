
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVLFG ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int**) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (int*,int,int,int*,int,int,int*,int *) ;
 int FUNC_5 (int*,int*,int) ;

int FUNC_6(int *VAR_2, int VAR_3, int VAR_4, int *VAR_5,
                 int VAR_6, int VAR_7, int *VAR_8,
                 AVLFG *VAR_9)
{
    int VAR_10, VAR_11, VAR_12 = 0;

    if (VAR_4 > 24*VAR_6) {


        int *VAR_13 = FUNC_3(VAR_3, (VAR_4/8)*sizeof(int));
        if (!VAR_13)
            return FUNC_0(VAR_1);
        for (VAR_10=0; VAR_10<VAR_4/8; VAR_10++) {
            VAR_11 = (VAR_10*VAR_0) % VAR_4;
            FUNC_5(VAR_13 + VAR_10*VAR_3, VAR_2 + VAR_11*VAR_3, VAR_3*sizeof(int));
        }

        VAR_12 = FUNC_6(VAR_13, VAR_3, VAR_4 / 8, VAR_5,
                               VAR_6, 2 * VAR_7, VAR_8, VAR_9);
        if (VAR_12 < 0) {
            FUNC_2(&VAR_13);
            return VAR_12;
        }
        VAR_12 = FUNC_4(VAR_13, VAR_3, VAR_4 / 8, VAR_5,
                             VAR_6, 2 * VAR_7, VAR_8, VAR_9);
        FUNC_1(VAR_13);

    } else
        for (VAR_10=0; VAR_10 < VAR_6; VAR_10++)
            FUNC_5(VAR_5 + VAR_10*VAR_3, VAR_2 + ((VAR_10*VAR_0)%VAR_4)*VAR_3,
                   VAR_3*sizeof(int));
    return VAR_12;
}
