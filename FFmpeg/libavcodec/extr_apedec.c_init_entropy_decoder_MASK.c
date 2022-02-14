
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int k; int ksum; } ;
struct TYPE_6__ {int k; int ksum; } ;
struct TYPE_8__ {int fileversion; int data_end; int ptr; int CRC; TYPE_2__ riceY; TYPE_1__ riceX; void* frameflags; int gb; } ;
typedef TYPE_3__ APEContext ;


 int VAR_0 ;
 void* FUNC_0 (int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(APEContext *VAR_1)
{

    if (VAR_1->fileversion >= 3900) {
        if (VAR_1->data_end - VAR_1->ptr < 6)
            return VAR_0;
        VAR_1->CRC = FUNC_0(&VAR_1->ptr);
    } else {
        VAR_1->CRC = FUNC_1(&VAR_1->gb, 32);
    }


    VAR_1->frameflags = 0;
    if ((VAR_1->fileversion > 3820) && (VAR_1->CRC & 0x80000000)) {
        VAR_1->CRC &= ~0x80000000;

        if (VAR_1->data_end - VAR_1->ptr < 6)
            return VAR_0;
        VAR_1->frameflags = FUNC_0(&VAR_1->ptr);
    }


    VAR_1->riceX.k = 10;
    VAR_1->riceX.ksum = (1 << VAR_1->riceX.k) * 16;
    VAR_1->riceY.k = 10;
    VAR_1->riceY.ksum = (1 << VAR_1->riceY.k) * 16;

    if (VAR_1->fileversion >= 3900) {

        VAR_1->ptr++;

        FUNC_2(VAR_1);
    }

    return 0;
}
