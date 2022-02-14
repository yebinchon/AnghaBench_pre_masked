
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int FUNC_3(GetBitContext *VAR_1)
{
    int VAR_2, VAR_3;

    do {
        VAR_3 = FUNC_0(VAR_1, 8);
        if (8*VAR_3 > FUNC_1(VAR_1))
            return VAR_0;
        for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) FUNC_2(VAR_1, 8);
    } while(VAR_3);

    return 0;
}
