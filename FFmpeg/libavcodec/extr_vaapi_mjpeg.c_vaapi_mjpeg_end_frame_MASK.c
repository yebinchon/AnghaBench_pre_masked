
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VAAPIDecodePicture ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {int * hwaccel_picture_private; } ;
typedef TYPE_1__ MJpegDecodeContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    const MJpegDecodeContext *VAR_1 = VAR_0->priv_data;
    VAAPIDecodePicture *VAR_2 = VAR_1->hwaccel_picture_private;

    return FUNC_0(VAR_0, VAR_2);
}
