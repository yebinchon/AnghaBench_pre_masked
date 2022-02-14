
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int iop_file_t ;
struct TYPE_2__ {int filePos; int fileSize; int * fd; } ;





 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(iop_file_t *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
        if (VAR_0[VAR_4].fd == VAR_1)
            break;
    }

    if (VAR_4 >= 16) {




        return -1;
    }

    switch (VAR_3) {
        case 128:
            VAR_0[VAR_4].filePos = VAR_2;
            break;

        case 130:
            VAR_0[VAR_4].filePos += VAR_2;
            break;

        case 129:
            VAR_0[VAR_4].filePos = VAR_0[VAR_4].fileSize + VAR_2;
            break;

        default:
            return -1;
    }

    if (VAR_0[VAR_4].filePos < 0)
        VAR_0[VAR_4].filePos = 0;

    if (VAR_0[VAR_4].filePos > VAR_0[VAR_4].fileSize)
        VAR_0[VAR_4].filePos = VAR_0[VAR_4].fileSize;

    return VAR_0[VAR_4].filePos;
}
