
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ver ;
typedef scalar_t__ uint32_t ;
typedef int section_header_t ;
typedef int image_header_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const,scalar_t__*,int) ;
 int FUNC_1 (char const*,scalar_t__) ;

int FUNC_2(const uint32_t VAR_1)
{
    uint32_t VAR_2;
    if (FUNC_0(VAR_1 + VAR_0 + sizeof(image_header_t) + sizeof(section_header_t), &VAR_2, sizeof(VAR_2))) {
        return 1;
    }
    const char* __attribute__ ((aligned (4))) VAR_3 = "v%08x\n\0\0";
    uint32_t VAR_4[2];
    VAR_4[0] = ((uint32_t*) VAR_3)[0];
    VAR_4[1] = ((uint32_t*) VAR_3)[1];
    FUNC_1((const char*) VAR_4, VAR_2);
    return 0;
}
