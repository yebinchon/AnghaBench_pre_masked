
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int RaChromaSampling ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline RaChromaSampling FUNC_1(enum AVPixelFormat VAR_3)
{
    switch (VAR_3) {
    case 139:
    case 130:
    case 138:
    case 137:
        return VAR_0;
    case 136:
    case 129:
    case 135:
    case 134:
        return VAR_1;
    case 133:
    case 128:
    case 132:
    case 131:
        return VAR_2;
    default:
        FUNC_0(0);
    }
}
