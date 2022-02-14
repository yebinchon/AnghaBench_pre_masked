
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* name; } ;
struct TYPE_11__ {void* name; } ;
struct TYPE_12__ {TYPE_1__ in; TYPE_2__ out; } ;
struct TYPE_13__ {TYPE_3__ config; } ;
typedef TYPE_4__ hb_audio_t ;


 TYPE_4__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__ const*,int) ;
 void* FUNC_2 (void*) ;

hb_audio_t *FUNC_3(const hb_audio_t *VAR_0)
{
    hb_audio_t *VAR_1 = ((void*)0);

    if( VAR_0 )
    {
        VAR_1 = FUNC_0(1, sizeof(*VAR_1));
        FUNC_1(VAR_1, VAR_0, sizeof(*VAR_1));
        if ( VAR_0->config.out.name )
        {
            VAR_1->config.out.name = FUNC_2(VAR_0->config.out.name);
        }
        if ( VAR_0->config.in.name )
        {
            VAR_1->config.in.name = FUNC_2(VAR_0->config.in.name);
        }
    }
    return VAR_1;
}
