
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,unsigned int,int ) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *,int) ;
 unsigned int FUNC_4 (int *,int) ;
 int FUNC_5 (unsigned int) ;
 unsigned int* VAR_3 ;

int FUNC_6(GetByteContext *VAR_4, int VAR_5, unsigned *VAR_6, unsigned *VAR_7,
                 unsigned *VAR_8, int *VAR_9)
{
    int VAR_10;
    int VAR_11;

    *VAR_6 = FUNC_4(VAR_4, VAR_5);
    *VAR_7 = FUNC_4(VAR_4, VAR_5);
    *VAR_8 = FUNC_3 (VAR_4, VAR_5);

    VAR_10 = FUNC_5(*VAR_6);
    VAR_11 = *VAR_7 != 0 && *VAR_7 < FUNC_0(VAR_3);

    *VAR_9 = FUNC_2(VAR_4) + 4;


    if (!VAR_11) {
        return VAR_0;
    }



    if (VAR_10 || (*VAR_8 > 4 || !(VAR_3[*VAR_7] * (*VAR_8) <= 4 || *VAR_7 == VAR_2))) {
        FUNC_1(VAR_4, FUNC_3 (VAR_4, VAR_5), VAR_1);
    }

    return 0;
}
