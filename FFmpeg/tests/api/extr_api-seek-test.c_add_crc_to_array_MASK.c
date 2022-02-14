
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_6, int64_t VAR_7)
{
    if (VAR_5 <= VAR_3) {
        if (VAR_5 == 0)
            VAR_5 = 10;
        VAR_5 *= 2;
        VAR_2 = FUNC_2(VAR_2, VAR_5, sizeof(uint32_t));
        VAR_4 = FUNC_2(VAR_4, VAR_5, sizeof(int64_t));
        if ((VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0))) {
            FUNC_1(((void*)0), VAR_0, "Can't allocate array to store crcs\n");
            return FUNC_0(VAR_1);
        }
    }
    VAR_2[VAR_3] = VAR_6;
    VAR_4[VAR_3] = VAR_7;
    VAR_3++;
    return 0;
}
