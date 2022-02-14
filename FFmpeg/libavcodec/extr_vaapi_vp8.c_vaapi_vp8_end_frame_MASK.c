
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** framep; } ;
typedef TYPE_2__ VP8Context ;
typedef int VAAPIDecodePicture ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_6__ {int * hwaccel_picture_private; } ;
typedef TYPE_3__ AVCodecContext ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1)
{
    const VP8Context *VAR_2 = VAR_1->priv_data;
    VAAPIDecodePicture *VAR_3 = VAR_2->framep[VAR_0]->hwaccel_picture_private;

    return FUNC_0(VAR_1, VAR_3);
}
