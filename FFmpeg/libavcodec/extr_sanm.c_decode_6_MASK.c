
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int npixels; int gb; int * codebook; int avctx; int * frm0; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(SANMVideoContext *VAR_2)
{
    int VAR_3 = VAR_2->npixels;
    uint16_t *VAR_4 = VAR_2->frm0;

    if (FUNC_1(&VAR_2->gb) < VAR_3) {
        FUNC_0(VAR_2->avctx, VAR_1, "Insufficient data for frame.\n");
        return VAR_0;
    }
    while (VAR_3--)
        *VAR_4++ = VAR_2->codebook[FUNC_2(&VAR_2->gb)];

    return 0;
}
