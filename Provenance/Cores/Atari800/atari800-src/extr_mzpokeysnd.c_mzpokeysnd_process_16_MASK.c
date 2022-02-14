
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SWORD ;


 double VAR_0 ;
 double VAR_1 ;
 size_t VAR_2 ;
 int* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 double* VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 double FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void* VAR_11, int VAR_12)
{
    int VAR_13;
    int VAR_14 = VAR_12;
    SWORD *VAR_15 = (SWORD *) VAR_11;

    if(VAR_9<1)
        return;



    while(VAR_14 >= (int) VAR_9)
    {
        VAR_15[0] = (SWORD)FUNC_0((FUNC_1(VAR_10) - VAR_0 / 2.0)
         * (65535.0 / VAR_0 / 4 * VAR_1 * 0.95) + 0.5 + 0.5 * FUNC_2() / VAR_8 - 0.25);

        for(VAR_13=1; VAR_13<VAR_9; VAR_13++)
        {
            VAR_15[VAR_13] = (SWORD)FUNC_0((FUNC_1(VAR_10 + VAR_13) - VAR_0 / 2.0)
             * (65535.0 / VAR_0 / 4 * VAR_1 * 0.95) + 0.5 + 0.5 * FUNC_2() / VAR_8 - 0.25);
        }
        VAR_15 += VAR_9;
        VAR_14 -= VAR_9;
    }
}
