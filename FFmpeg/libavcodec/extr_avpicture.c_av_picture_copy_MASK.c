
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_4__ {int linesize; scalar_t__ data; } ;
typedef TYPE_1__ AVPicture ;


 int FUNC_0 (scalar_t__,int ,int const**,int ,int,int,int) ;

void FUNC_1(AVPicture *VAR_0, const AVPicture *VAR_1,
                     enum AVPixelFormat VAR_2, int VAR_3, int VAR_4)
{
    FUNC_0(VAR_0->data, VAR_0->linesize, (const uint8_t **)VAR_1->data,
                  VAR_1->linesize, VAR_2, VAR_3, VAR_4);
}
