
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,int ,char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(uint64_t VAR_3)
{
    uint64_t VAR_4;

    VAR_4 = FUNC_0();
    if (!VAR_1
        || ((VAR_1 + VAR_3) > VAR_4)) {
        if (!FUNC_2(VAR_1 + VAR_3 + VAR_3 / 8 - VAR_4)) {
            if (!VAR_2)
                FUNC_1(((void*)0), VAR_0,
                       "SLEPT NO signals - %d microseconds late\n",
                       (int)(FUNC_0() - VAR_1 - VAR_3));
        }
    }
    VAR_2 = 0;
    VAR_1 = VAR_4;
}
