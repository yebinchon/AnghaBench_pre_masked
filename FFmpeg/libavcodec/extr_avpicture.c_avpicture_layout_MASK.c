
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_3__ {int linesize; scalar_t__ data; } ;
typedef TYPE_1__ AVPicture ;


 int FUNC_0 (unsigned char*,int,int const* const*,int ,int,int,int,int) ;

int FUNC_1(const AVPicture* VAR_0, enum AVPixelFormat VAR_1, int VAR_2, int VAR_3,
                     unsigned char *VAR_4, int VAR_5)
{
    return FUNC_0(VAR_4, VAR_5,
                                   (const uint8_t * const*)VAR_0->data, VAR_0->linesize,
                                   VAR_1, VAR_2, VAR_3, 1);
}
