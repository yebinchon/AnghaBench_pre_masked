
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__** reordered_hash; int resample; TYPE_3__* context; scalar_t__ parser; int frame; int decode_errors; int nframes; scalar_t__ job; int list; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_10__ {TYPE_1__* codec; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__**) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_9( hb_work_private_t ** VAR_1 )
{
    hb_work_private_t * VAR_2 = *VAR_1;

    if ( VAR_2 )
    {
        FUNC_6(&VAR_2->list);

        if ( VAR_2->job && VAR_2->context && VAR_2->context->codec )
        {
            FUNC_7( "%s-decoder done: %u frames, %u decoder errors",
                    VAR_2->context->codec->name, VAR_2->nframes, VAR_2->decode_errors);
        }
        FUNC_0(&VAR_2->frame);
        FUNC_2(VAR_2);
        if ( VAR_2->parser )
        {
            FUNC_1(VAR_2->parser);
        }
        if ( VAR_2->context && VAR_2->context->codec )
        {
            {
                FUNC_5(&VAR_2->context);
            }
        }
        if ( VAR_2->context )
        {
            FUNC_5(&VAR_2->context);
        }
        FUNC_4(VAR_2->resample);

        int VAR_3;
        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        {
            FUNC_3(VAR_2->reordered_hash[VAR_3]);
        }
        FUNC_3(VAR_2);
    }
    *VAR_1 = ((void*)0);
}
