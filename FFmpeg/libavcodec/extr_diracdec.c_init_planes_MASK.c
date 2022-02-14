
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int width; int height; } ;
struct TYPE_11__ {int chroma_x_shift; int chroma_y_shift; int wavelet_depth; int pshift; TYPE_4__* plane; TYPE_1__ seq; } ;
struct TYPE_8__ {int width; int height; int stride; int buf; } ;
struct TYPE_10__ {int width; int height; int xblen; int yblen; int xbsep; int ybsep; int xoffset; int yoffset; TYPE_3__** band; TYPE_2__ idwt; } ;
struct TYPE_9__ {int pshift; int ibuf; int level; int stride; int width; int height; int orientation; struct TYPE_9__* parent; } ;
typedef TYPE_3__ SubBand ;
typedef TYPE_4__ Plane ;
typedef TYPE_5__ DiracContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(DiracContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5;

    for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        Plane *VAR_6 = &VAR_0->plane[VAR_1];

        VAR_6->width = VAR_0->seq.width >> (VAR_1 ? VAR_0->chroma_x_shift : 0);
        VAR_6->height = VAR_0->seq.height >> (VAR_1 ? VAR_0->chroma_y_shift : 0);
        VAR_6->idwt.width = VAR_2 = FUNC_0(VAR_6->width , VAR_0->wavelet_depth);
        VAR_6->idwt.height = VAR_3 = FUNC_0(VAR_6->height, VAR_0->wavelet_depth);
        VAR_6->idwt.stride = FUNC_1(VAR_6->idwt.width, 8) << (1 + VAR_0->pshift);

        for (VAR_4 = VAR_0->wavelet_depth-1; VAR_4 >= 0; VAR_4--) {
            VAR_2 = VAR_2>>1;
            VAR_3 = VAR_3>>1;
            for (VAR_5 = !!VAR_4; VAR_5 < 4; VAR_5++) {
                SubBand *VAR_7 = &VAR_6->band[VAR_4][VAR_5];

                VAR_7->pshift = VAR_0->pshift;
                VAR_7->ibuf = VAR_6->idwt.buf;
                VAR_7->level = VAR_4;
                VAR_7->stride = VAR_6->idwt.stride << (VAR_0->wavelet_depth - VAR_4);
                VAR_7->width = VAR_2;
                VAR_7->height = VAR_3;
                VAR_7->orientation = VAR_5;

                if (VAR_5 & 1)
                    VAR_7->ibuf += VAR_2 << (1+VAR_7->pshift);
                if (VAR_5 > 1)
                    VAR_7->ibuf += (VAR_7->stride>>1);

                if (VAR_4)
                    VAR_7->parent = &VAR_6->band[VAR_4-1][VAR_5];
            }
        }

        if (VAR_1 > 0) {
            VAR_6->xblen = VAR_0->plane[0].xblen >> VAR_0->chroma_x_shift;
            VAR_6->yblen = VAR_0->plane[0].yblen >> VAR_0->chroma_y_shift;
            VAR_6->xbsep = VAR_0->plane[0].xbsep >> VAR_0->chroma_x_shift;
            VAR_6->ybsep = VAR_0->plane[0].ybsep >> VAR_0->chroma_y_shift;
        }

        VAR_6->xoffset = (VAR_6->xblen - VAR_6->xbsep)/2;
        VAR_6->yoffset = (VAR_6->yblen - VAR_6->ybsep)/2;
    }
}
