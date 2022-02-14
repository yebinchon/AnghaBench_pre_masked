
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVColorRange { ____Placeholder_AVColorRange } AVColorRange ;
typedef int RaPixelRange ;







 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline RaPixelRange FUNC_0(enum AVPixelFormat VAR_2, enum AVColorRange VAR_3)
{
    switch (VAR_2) {
    case 130:
    case 129:
    case 128:
        return VAR_0;
    }

    switch (VAR_3) {
    case 132:
        return VAR_0;
    case 131:
    default:
        return VAR_1;
    }
}
