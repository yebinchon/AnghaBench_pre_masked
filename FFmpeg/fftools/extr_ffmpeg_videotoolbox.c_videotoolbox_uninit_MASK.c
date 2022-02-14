
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tmp_frame; } ;
typedef TYPE_1__ VTContext ;
struct TYPE_9__ {TYPE_2__* opaque; } ;
struct TYPE_8__ {TYPE_1__* hwaccel_ctx; int * hwaccel_retrieve_data; int * hwaccel_uninit; } ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_0)
{
    InputStream *VAR_1 = VAR_0->opaque;
    VTContext *VAR_2 = VAR_1->hwaccel_ctx;

    VAR_1->hwaccel_uninit = ((void*)0);
    VAR_1->hwaccel_retrieve_data = ((void*)0);

    FUNC_0(&VAR_2->tmp_frame);

    FUNC_2(VAR_0);
    FUNC_1(&VAR_1->hwaccel_ctx);
}
