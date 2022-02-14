
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (char) ;
 char* FUNC_1 (char*,char,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_2(char * VAR_0, vm_size_t VAR_1)
{
    uint32_t VAR_2 = 0;
    char * VAR_3;
    char * VAR_4;
    char * VAR_5;

    for (VAR_3 = VAR_0; 1; VAR_3 = VAR_5) {

        VAR_4 = FUNC_1(VAR_3, '\n', VAR_1 - (VAR_3 - VAR_0));
        if (VAR_4 == ((void*)0)) {
            break;
        }
        VAR_5 = VAR_4 + 1;



        if (VAR_4 == VAR_3) {
            continue;
        }



        if (VAR_3[0] == '#') {
            continue;
        }


        while ((VAR_3 < VAR_4) && !FUNC_0(*VAR_3)) {
            VAR_3++;
        }



        if (VAR_3 == VAR_4) {
            continue;
        }



        if (VAR_3[0] == '.') {
            continue;
        }
        VAR_2++;
    }

    return VAR_2;
}
