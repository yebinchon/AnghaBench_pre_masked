
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int mb_x; int mb_y; int b8_stride; int mb_stride; scalar_t__ first_slice_line; TYPE_1__* current_picture_ptr; } ;
struct TYPE_6__ {int* deblock_coefs; scalar_t__ rv30; TYPE_3__ s; } ;
struct TYPE_5__ {int ** motion_val; } ;
typedef TYPE_2__ RV34DecContext ;
typedef TYPE_3__ MpegEncContext ;


 int ** FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_2(RV34DecContext *VAR_1)
{
    MpegEncContext *VAR_2 = &VAR_1->s;
    int VAR_3 = 0, VAR_4 = 0, VAR_5, VAR_6;
    int VAR_7 = VAR_2->mb_x * 2 + VAR_2->mb_y * 2 * VAR_2->b8_stride;
    FUNC_0 (*VAR_0)[2] = &VAR_2->current_picture_ptr->motion_val[0][VAR_7];
    for(VAR_6 = 0; VAR_6 < 16; VAR_6 += 8){
        for(VAR_5 = 0; VAR_5 < 2; VAR_5++){
            if(FUNC_1(VAR_0 + VAR_5, 1))
                VAR_4 |= 0x11 << (VAR_6 + VAR_5*2);
            if((VAR_6 || VAR_2->mb_y) && FUNC_1(VAR_0 + VAR_5, VAR_2->b8_stride))
                VAR_3 |= 0x03 << (VAR_6 + VAR_5*2);
        }
        VAR_0 += VAR_2->b8_stride;
    }
    if(VAR_2->first_slice_line)
        VAR_3 &= ~0x000F;
    if(!VAR_2->mb_x)
        VAR_4 &= ~0x1111;
    if(VAR_1->rv30){
        VAR_4 |= (VAR_4 & 0x4444) >> 1;
        VAR_3 |= (VAR_3 & 0x0F00) >> 4;
        if(VAR_2->mb_x)
            VAR_1->deblock_coefs[VAR_2->mb_x - 1 + VAR_2->mb_y*VAR_2->mb_stride] |= (VAR_4 & 0x1111) << 3;
        if(!VAR_2->first_slice_line)
            VAR_1->deblock_coefs[VAR_2->mb_x + (VAR_2->mb_y - 1)*VAR_2->mb_stride] |= (VAR_3 & 0xF) << 12;
    }
    return VAR_3 | VAR_4;
}
