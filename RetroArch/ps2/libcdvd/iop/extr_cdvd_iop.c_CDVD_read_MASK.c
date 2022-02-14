
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int iop_file_t ;
struct TYPE_2__ {int filePos; int fileSize; int LBA; int * fd; } ;


 scalar_t__ FUNC_0 (int,int,char*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,char*,int) ;
 int FUNC_2 (char*,...) ;

int FUNC_3(iop_file_t *VAR_5, void *VAR_6, int VAR_7)
{
    int VAR_8;

    int VAR_9;
    int VAR_10;
    int VAR_11;

    int VAR_12 = 0;





    static char VAR_13[9 * 2048];
    for (VAR_8 = 0; VAR_8 < 16; VAR_8++) {
        if (VAR_2[VAR_8].fd == VAR_5)
            break;
    }

    if (VAR_8 >= 16) {




        return -1;
    }



    if (VAR_2[VAR_8].filePos > VAR_2[VAR_8].fileSize) {

        return 0;
    }

    if ((VAR_2[VAR_8].filePos + VAR_7) > VAR_2[VAR_8].fileSize)
        VAR_7 = VAR_2[VAR_8].fileSize - VAR_2[VAR_8].filePos;

    if (VAR_7 <= 0)
        return 0;

    if (VAR_7 > 16384)
        VAR_7 = 16384;


    VAR_9 = VAR_2[VAR_8].LBA + (VAR_2[VAR_8].filePos >> 11);
    VAR_10 = (VAR_2[VAR_8].filePos & 0x7FF);

    VAR_11 = (VAR_10 + VAR_7);
    VAR_11 = (VAR_11 >> 11) + ((VAR_11 & 2047) != 0);






    if (VAR_9 == VAR_4) {
        VAR_12 = 1;
        if (VAR_3 > 0)
            FUNC_1(VAR_13, VAR_13 + 2048 * (VAR_3), 2048);
        VAR_3 = 0;
    }

    VAR_4 = VAR_9 + VAR_11 - 1;


    if (VAR_12 == 0 || (VAR_12 == 1 && VAR_11 > 1)) {
        if (FUNC_0(VAR_9 + VAR_12, VAR_11 - VAR_12, VAR_13 + ((VAR_12) << 11), &VAR_1) != VAR_0) {



        }

        VAR_3 = VAR_11 - 1;
    }

    FUNC_1(VAR_6, VAR_13 + VAR_10, VAR_7);

    VAR_2[VAR_8].filePos += VAR_7;

    return (VAR_7);
}
