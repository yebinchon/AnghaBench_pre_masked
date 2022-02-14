
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int PCR_PID; } ;
struct TYPE_9__ {TYPE_2__* title; TYPE_1__ pmt_info; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_10__ {int id; } ;
typedef TYPE_4__ hb_audio_t ;
struct TYPE_8__ {int list_audio; } ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2( hb_stream_t *VAR_0, int VAR_1, int VAR_2 )
{
    if ( VAR_1 < 0 )
    {

        return 1;
    }
    if ( VAR_1 == VAR_0->pmt_info.PCR_PID )
    {

        return 0;
    }

    int VAR_3;
    for ( VAR_3 = 0; VAR_3 < FUNC_0( VAR_0->title->list_audio ); ++VAR_3 )
    {
        hb_audio_t *VAR_4 = FUNC_1( VAR_0->title->list_audio, VAR_3 );
        if ( VAR_4->id == ((VAR_2 << 16) | VAR_1) )
        {
            return 0;
        }
    }
    return 1;
}
