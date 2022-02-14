
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int URLContext ;
struct TYPE_3__ {int swfhash_len; int swfhash; int swfsize; int * swfverification; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int ,int,int ,int *,int,int *) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_2, RTMPContext *VAR_3,
                                      uint8_t *VAR_4)
{
    uint8_t *VAR_5;
    int VAR_6;

    if (VAR_3->swfhash_len != 32) {
        FUNC_1(VAR_2, VAR_0,
               "Hash of the decompressed SWF file is not 32 bytes long.\n");
        return FUNC_0(VAR_1);
    }

    VAR_5 = &VAR_3->swfverification[0];
    FUNC_3(&VAR_5, 1);
    FUNC_3(&VAR_5, 1);
    FUNC_2(&VAR_5, VAR_3->swfsize);
    FUNC_2(&VAR_5, VAR_3->swfsize);

    if ((VAR_6 = FUNC_4(VAR_3->swfhash, 32, 0, VAR_4, 32, VAR_5)) < 0)
        return VAR_6;

    return 0;
}
