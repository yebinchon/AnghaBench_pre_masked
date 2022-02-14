
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t int64_t ;



__attribute__((used)) static int64_t FUNC_0(const char *VAR_0)
{
    int64_t VAR_1 = 0;
    while(VAR_0[VAR_1] == ' ' || VAR_0[VAR_1] == '\t') {
        VAR_1++;
    }
    if(VAR_0[VAR_1] == '[' && VAR_0[VAR_1 + 1] >= 'a' && VAR_0[VAR_1 + 1] <= 'z') {
        return VAR_1;
    } else {
        return -1;
    }
}
