
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVColorSpace { ____Placeholder_AVColorSpace } AVColorSpace ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int const* FUNC_1 (int) ;

__attribute__((used)) static const int *FUNC_2(const char *VAR_5, enum AVColorSpace VAR_6)
{
    if (!VAR_5)
        VAR_5 = "bt601";

    if (VAR_5 && FUNC_0(VAR_5, "bt709")) {
        VAR_6 = VAR_2;
    } else if (VAR_5 && FUNC_0(VAR_5, "fcc")) {
        VAR_6 = VAR_3;
    } else if (VAR_5 && FUNC_0(VAR_5, "smpte240m")) {
        VAR_6 = VAR_4;
    } else if (VAR_5 && (FUNC_0(VAR_5, "bt601") || FUNC_0(VAR_5, "bt470") || FUNC_0(VAR_5, "smpte170m"))) {
        VAR_6 = VAR_1;
    } else if (VAR_5 && FUNC_0(VAR_5, "bt2020")) {
        VAR_6 = VAR_0;
    }

    if (VAR_6 < 1 || VAR_6 > 10 || VAR_6 == 8) {
        VAR_6 = VAR_1;
    }

    return FUNC_1(VAR_6);
}
