
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opaque; } ;
struct TYPE_4__ {int * hwaccel_retrieve_data; } ;
typedef TYPE_1__ InputStream ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;

int FUNC_0(AVCodecContext *VAR_1)
{
    InputStream *VAR_2 = VAR_1->opaque;

    VAR_2->hwaccel_retrieve_data = &VAR_0;

    return 0;
}
