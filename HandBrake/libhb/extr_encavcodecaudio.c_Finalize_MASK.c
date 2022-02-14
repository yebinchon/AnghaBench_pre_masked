
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* context; } ;
typedef TYPE_4__ hb_work_private_t ;
struct TYPE_11__ {TYPE_2__* config; TYPE_4__* private_data; } ;
typedef TYPE_5__ hb_work_object_t ;
struct TYPE_9__ {int extradata_size; int * extradata; } ;
struct TYPE_7__ {int length; int bytes; } ;
struct TYPE_8__ {TYPE_1__ extradata; } ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(hb_work_object_t *VAR_0)
{
    hb_work_private_t *VAR_1 = VAR_0->private_data;


    if (VAR_1->context->extradata != ((void*)0))
    {
        FUNC_0(VAR_0->config->extradata.bytes, VAR_1->context->extradata,
               VAR_1->context->extradata_size);
        VAR_0->config->extradata.length = VAR_1->context->extradata_size;
    }
}
