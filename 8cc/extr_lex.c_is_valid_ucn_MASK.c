
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static bool FUNC_0(unsigned int VAR_0) {


    if (0xD800 <= VAR_0 && VAR_0 <= 0xDFFF)
        return 0;



    return 0xA0 <= VAR_0 || VAR_0 == '$' || VAR_0 == '@' || VAR_0 == '`';
}
