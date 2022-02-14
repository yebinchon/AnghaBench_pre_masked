
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int qpel_mc_func ;
typedef int op_pixels_func ;
struct TYPE_4__ {scalar_t__ out_format; } ;
typedef TYPE_1__ MpegEncContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *,int,int **,int **,int **,int) ;

void FUNC_1(MpegEncContext *VAR_1,
                   uint8_t *VAR_2, uint8_t *VAR_3,
                   uint8_t *VAR_4, int VAR_5,
                   uint8_t **VAR_6,
                   op_pixels_func (*VAR_7)[4],
                   qpel_mc_func (*VAR_8)[16])
{

    if (VAR_1->out_format == VAR_0)
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_6, VAR_7, VAR_8, 1);
    else

        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                            VAR_6, VAR_7, VAR_8, 0);
}
