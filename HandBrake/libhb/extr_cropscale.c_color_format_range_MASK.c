
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;





__attribute__((used)) static const char * FUNC_0(enum AVPixelFormat VAR_1, int VAR_2)
{
    switch (VAR_1)
    {
        case 131:
        case 130:
        case 128:
        case 129:
            return "full";
        default:
            return VAR_2 == VAR_0 ? "full" : "limited";
    }
}
