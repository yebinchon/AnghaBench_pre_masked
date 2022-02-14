
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pix_fmt; } ;
typedef TYPE_1__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(const AVCodecContext *VAR_3)
{
    if (VAR_2)
        return VAR_3->pix_fmt == VAR_1 ||
               VAR_3->pix_fmt == VAR_0;
    else
        return 0;
}
