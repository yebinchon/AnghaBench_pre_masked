
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {scalar_t__ chroma_format; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int **,int,int,int) ;

void FUNC_1(MpegEncContext *VAR_1, int16_t VAR_2[8][64],
                        int VAR_3, int VAR_4)
{
    if (VAR_1->chroma_format == VAR_0)
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 6);
    else
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, 8);
}
