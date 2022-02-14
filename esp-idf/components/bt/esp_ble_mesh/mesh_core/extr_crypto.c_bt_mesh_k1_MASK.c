
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const u8_t ;


 int FUNC_0 (char const*,char const*,size_t,char const*) ;
 size_t FUNC_1 (char const*) ;

int FUNC_2(const u8_t *VAR_0, size_t VAR_1, const u8_t VAR_2[16],
               const char *VAR_3, u8_t VAR_4[16])
{
    int VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_1, VAR_4);
    if (VAR_5 < 0) {
        return VAR_5;
    }

    return FUNC_0(VAR_4, VAR_3, FUNC_1(VAR_3), VAR_4);
}
