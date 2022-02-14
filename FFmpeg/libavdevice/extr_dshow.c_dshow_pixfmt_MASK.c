
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef int WORD ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static enum AVPixelFormat FUNC_2(DWORD VAR_6, WORD VAR_7)
{
    switch(VAR_6) {
    case 129:
    case 128:
        switch(VAR_7) {
            case 1:
                return VAR_2;
            case 4:
                return VAR_3;
            case 8:
                return VAR_5;
            case 16:
                return VAR_4;
            case 24:
                return VAR_1;
            case 32:
                return VAR_0;
        }
    }
    return FUNC_0(FUNC_1(), VAR_6);
}
