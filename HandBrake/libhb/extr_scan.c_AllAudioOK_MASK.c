
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int list_audio; } ;
typedef TYPE_3__ hb_title_t ;
struct TYPE_7__ {scalar_t__ bitrate; } ;
struct TYPE_8__ {TYPE_1__ in; } ;
struct TYPE_10__ {TYPE_2__ config; } ;
typedef TYPE_4__ hb_audio_t ;


 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2( hb_title_t * VAR_0 )
{
    int VAR_1;
    hb_audio_t * VAR_2;

    for( VAR_1 = 0; VAR_1 < FUNC_0( VAR_0->list_audio ); VAR_1++ )
    {
        VAR_2 = FUNC_1( VAR_0->list_audio, VAR_1 );
        if( VAR_2->config.in.bitrate == 0 )
        {
            return 0;
        }
    }
    return 1;
}
