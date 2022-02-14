
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt8 ;
typedef int UInt32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 long VAR_3 ;
 int FUNC_2 (int **,int*) ;

__attribute__((used)) static long FUNC_3(void* VAR_4, UInt8 **VAR_5, UInt32 *VAR_6, int VAR_7)
{
    UInt8 *VAR_8 = (UInt8*)VAR_4;
    int VAR_9, VAR_10;
    *VAR_6 = 0;

    if (VAR_7)
        VAR_8 += 4;
    FUNC_2(&VAR_8, &VAR_9);
    VAR_8 += 2;
    if (VAR_9 == VAR_2)
        VAR_8++;

    FUNC_2(&VAR_8, &VAR_9);
    if (VAR_9 == VAR_0)
    {
        VAR_8++;
        VAR_8++;
        VAR_8 += 3;
        VAR_8 += 4;
        VAR_8 += 4;

        VAR_10 = FUNC_2(&VAR_8, &VAR_9);
        if (VAR_9 == VAR_1)
        {
            *VAR_5 = FUNC_0(1, VAR_10 + 8);
            if (*VAR_5)
            {
                FUNC_1(*VAR_5, VAR_8, VAR_10);
                *VAR_6 = VAR_10;
            }
        }
    }

    return VAR_3;
}
