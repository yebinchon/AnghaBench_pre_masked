
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buffer ;
struct TYPE_7__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int iframes; int p_per_gop; int pframes; int b_per_i_or_p; int bframes; int first_gop_closed; } ;
struct TYPE_5__ {int height; scalar_t__ format; scalar_t__ bit_rate; } ;
typedef TYPE_2__ GXFStreamContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*,int,char*,float,int,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_2, AVStream *VAR_3)
{
    GXFStreamContext *VAR_4 = VAR_3->priv_data;
    char VAR_5[1024];
    int VAR_6, VAR_7;

    if (VAR_4->iframes) {
        VAR_4->p_per_gop = VAR_4->pframes / VAR_4->iframes;
        if (VAR_4->pframes % VAR_4->iframes)
            VAR_4->p_per_gop++;
        if (VAR_4->pframes) {
            VAR_4->b_per_i_or_p = VAR_4->bframes / VAR_4->pframes;
            if (VAR_4->bframes % VAR_4->pframes)
                VAR_4->b_per_i_or_p++;
        }
        if (VAR_4->p_per_gop > 9)
            VAR_4->p_per_gop = 9;
        if (VAR_4->b_per_i_or_p > 9)
            VAR_4->b_per_i_or_p = 9;
    }
    if (VAR_3->codecpar->height == 512 || VAR_3->codecpar->height == 608)
        VAR_7 = 7;
    else if (VAR_3->codecpar->height == 480)
        VAR_7 = 20;
    else
        VAR_7 = 23;

    VAR_6 = FUNC_3(VAR_5, sizeof(VAR_5), "Ver 1\nBr %.6f\nIpg 1\nPpi %d\nBpiop %d\n"
                    "Pix 0\nCf %d\nCg %d\nSl %d\nnl16 %d\nVi 1\nf1 1\n",
                    (float)VAR_3->codecpar->bit_rate, VAR_4->p_per_gop, VAR_4->b_per_i_or_p,
                    VAR_3->codecpar->format == VAR_0 ? 2 : 1, VAR_4->first_gop_closed == 1,
                    VAR_7, (VAR_3->codecpar->height + 15) / 16);
    FUNC_0(VAR_6 < sizeof(VAR_5));
    FUNC_1(VAR_2, VAR_1);
    FUNC_1(VAR_2, VAR_6 + 1);
    FUNC_2(VAR_2, (uint8_t *)VAR_5, VAR_6 + 1);
    return VAR_6 + 3;
}
