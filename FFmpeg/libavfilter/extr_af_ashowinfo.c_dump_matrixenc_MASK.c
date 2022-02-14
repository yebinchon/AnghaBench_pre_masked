
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVMatrixEncoding { ____Placeholder_AVMatrixEncoding } AVMatrixEncoding ;
struct TYPE_3__ {int size; scalar_t__ data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_2, AVFrameSideData *VAR_3)
{
    enum AVMatrixEncoding VAR_4;

    FUNC_0(VAR_2, VAR_0, "matrix encoding: ");

    if (VAR_3->size < sizeof(enum AVMatrixEncoding)) {
        FUNC_0(VAR_2, VAR_0, "invalid data");
        return;
    }

    VAR_4 = *(enum AVMatrixEncoding *)VAR_3->data;
    switch (VAR_4) {
    case 128: FUNC_0(VAR_2, VAR_0, "none"); break;
    case 134: FUNC_0(VAR_2, VAR_0, "Dolby Surround"); break;
    case 131: FUNC_0(VAR_2, VAR_0, "Dolby Pro Logic II"); break;
    case 130: FUNC_0(VAR_2, VAR_0, "Dolby Pro Logic IIx"); break;
    case 129: FUNC_0(VAR_2, VAR_0, "Dolby Pro Logic IIz"); break;
    case 133: FUNC_0(VAR_2, VAR_0, "Dolby EX"); break;
    case 132: FUNC_0(VAR_2, VAR_0, "Dolby Headphone"); break;
    default: FUNC_0(VAR_2, VAR_1, "unknown"); break;
    }
}
