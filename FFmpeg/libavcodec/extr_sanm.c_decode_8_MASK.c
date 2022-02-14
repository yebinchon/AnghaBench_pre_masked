
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {long npixels; int * codebook; int * rle_buf; int avctx; int rle_buf_size; int * frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,int *,long) ;
 int FUNC_2 (int ,int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,long) ;

__attribute__((used)) static int FUNC_4(SANMVideoContext *VAR_3)
{
    uint16_t *VAR_4 = VAR_3->frm0;
    uint8_t *VAR_5;
    long VAR_6 = VAR_3->npixels;

    FUNC_1(&VAR_3->rle_buf, &VAR_3->rle_buf_size, VAR_6);
    if (!VAR_3->rle_buf) {
        FUNC_2(VAR_3->avctx, VAR_1, "RLE buffer allocation failed.\n");
        return FUNC_0(VAR_2);
    }
    VAR_5 = VAR_3->rle_buf;

    if (FUNC_3(VAR_3, VAR_5, VAR_6))
        return VAR_0;

    while (VAR_6--)
        *VAR_4++ = VAR_3->codebook[*VAR_5++];

    return 0;
}
