
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ fmt; int width; int height; int bpp; int cur; int pal; int * decomp_buf; } ;
typedef TYPE_1__ ZmbvContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static int FUNC_1(ZmbvContext *VAR_1)
{
    uint8_t *VAR_2 = VAR_1->decomp_buf;


    if (VAR_1->fmt == VAR_0) {
        FUNC_0(VAR_1->pal, VAR_2, 768);
        VAR_2 += 768;
    }

    FUNC_0(VAR_1->cur, VAR_2, VAR_1->width * VAR_1->height * (VAR_1->bpp / 8));
    return 0;
}
