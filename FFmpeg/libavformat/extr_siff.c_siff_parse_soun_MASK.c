
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rate; int bits; int block_align; } ;
typedef TYPE_1__ SIFFContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_3, SIFFContext *VAR_4, AVIOContext *VAR_5)
{
    if (FUNC_3(VAR_5) != VAR_2) {
        FUNC_0(VAR_3, VAR_1, "Header chunk is missing\n");
        return VAR_0;
    }
    if (FUNC_1(VAR_5) != 8) {
        FUNC_0(VAR_3, VAR_1, "Header chunk size is incorrect\n");
        return VAR_0;
    }
    FUNC_4(VAR_5, 4);
    VAR_4->rate = FUNC_2(VAR_5);
    VAR_4->bits = FUNC_2(VAR_5);
    VAR_4->block_align = VAR_4->rate * (VAR_4->bits >> 3);
    return FUNC_5(VAR_3, VAR_4);
}
