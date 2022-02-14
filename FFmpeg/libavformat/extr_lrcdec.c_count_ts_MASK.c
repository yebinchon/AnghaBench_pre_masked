
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int64_t ;



__attribute__((used)) static int64_t FUNC_0(const char *VAR_0)
{
    int64_t VAR_1 = 0;
    int VAR_2 = 0;

    for(;;) {
        if(VAR_0[VAR_1] == ' ' || VAR_0[VAR_1] == '\t') {
            VAR_1++;
        } else if(VAR_0[VAR_1] == '[') {
            VAR_1++;
            VAR_2++;
        } else if (VAR_0[VAR_1] == ']' && VAR_2) {
            VAR_1++;
            VAR_2--;
        } else if(VAR_2 &&
                 (VAR_0[VAR_1] == ':' || VAR_0[VAR_1] == '.' || VAR_0[VAR_1] == '-' ||
                 (VAR_0[VAR_1] >= '0' && VAR_0[VAR_1] <= '9'))) {
            VAR_1++;
        } else {
            break;
        }
    }
    return VAR_1;
}
