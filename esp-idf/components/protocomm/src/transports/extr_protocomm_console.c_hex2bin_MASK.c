
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;


 int FUNC_0 (char const*,char*,int *) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static ssize_t FUNC_2(const char *VAR_0, uint8_t *VAR_1)
{
    size_t VAR_2 = FUNC_1(VAR_0);
    ssize_t VAR_3 = VAR_2 / 2;

    int VAR_4 = 0;
    const char *VAR_5 = VAR_0;

    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        FUNC_0(VAR_5, "%2hhx", &VAR_1[VAR_4]);
        VAR_5 += 2;
    }

    return VAR_3;
}
