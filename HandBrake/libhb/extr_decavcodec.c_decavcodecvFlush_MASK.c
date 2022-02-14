
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* context; int codec; scalar_t__ parser; scalar_t__ video_codec_opened; TYPE_1__* title; int list; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_10__ {int codec_param; TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_11__ {int * codec; } ;
struct TYPE_8__ {int * opaque_priv; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6( hb_work_object_t *VAR_0 )
{
    hb_work_private_t *VAR_1 = VAR_0->private_data;

    if (VAR_1->context != ((void*)0) && VAR_1->context->codec != ((void*)0))
    {
        FUNC_5(&VAR_1->list);
        if ( VAR_1->title->opaque_priv == ((void*)0) )
        {
            VAR_1->video_codec_opened = 0;
            FUNC_4(&VAR_1->context);
            if ( VAR_1->parser )
            {
                FUNC_0(VAR_1->parser);
            }
            VAR_1->parser = FUNC_1( VAR_0->codec_param );
            VAR_1->context = FUNC_2( VAR_1->codec );
        }
        else
        {
            FUNC_3( VAR_1->context );
        }
    }
}
