
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetByteContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int *,int,int,int **) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(void *VAR_1, GetByteContext *VAR_2,
                       int VAR_3, int VAR_4, AVDictionary **VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8;

    VAR_8 = FUNC_3(VAR_2, VAR_3);

    if (FUNC_0(VAR_2) < VAR_8 * 12) {
        return VAR_0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
        if ((VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) < 0) {
            return VAR_7;
        }
    }


    return FUNC_2(VAR_2, VAR_3);
}
