
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;

__attribute__((used)) static size_t FUNC_1(char* VAR_0, char* VAR_1)
{
    size_t VAR_2 = 0;
    size_t VAR_3;

    for (VAR_3=0; VAR_3< FUNC_0(VAR_0); VAR_3++) {
        char VAR_4 = VAR_0[VAR_3];

        if (VAR_4 == '-' || VAR_4 == ' ') {
            ++VAR_2;

        } else if (VAR_4 >= '0' && VAR_4 <= '9') {
            VAR_1[VAR_2] *= 16;
            VAR_1[VAR_2] += VAR_4 - '0';

        } else if (VAR_4 >= 'a' && VAR_4 <= 'f') {
            VAR_1[VAR_2] *= 16;
            VAR_1[VAR_2] += VAR_4 - 'a' + 10;
        }
    }

    if (VAR_3>0 && FUNC_0(VAR_0)>0) {
        VAR_2++;
    }
    return VAR_2;
}
