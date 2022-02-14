
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;
 unsigned int FUNC_0 (char const* const*) ;

const char *FUNC_1(enum AVColorSpace VAR_0)
{
    static const char * const VAR_1[] = {
        [131] = "GBR",
        [133] = "bt709",
        [132] = "fcc",
        [134] = "bt470bg",
        [130] = "smpte170m",
        [129] = "smpte240m",
        [128] = "YCgCo",
    };
    if ((unsigned)VAR_0 >= FUNC_0(VAR_1))
        return ((void*)0);
    return VAR_1[VAR_0];
}
