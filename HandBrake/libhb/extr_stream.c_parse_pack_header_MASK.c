
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int hb_stream_t ;
struct TYPE_9__ {int header_len; int scr; } ;
typedef TYPE_1__ hb_pes_info_t ;
struct TYPE_10__ {int pos; } ;
typedef TYPE_2__ bitbuf_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(
    hb_stream_t *VAR_0,
    bitbuf_t *VAR_1,
    hb_pes_info_t *VAR_2 )
{
    if ( FUNC_0(VAR_1) < 12)
    {
        return 0;
    }

    FUNC_2(VAR_1, 8 * 4);
    int VAR_3 = FUNC_1(VAR_1, 2);

    if ( VAR_3 == 0x00 )
    {

        FUNC_2(VAR_1, 2);
    }
    VAR_2->scr = FUNC_3( VAR_1 );

    if ( VAR_3 == 0x00 )
    {
        FUNC_2(VAR_1, 24);
        VAR_2->header_len = (VAR_1->pos >> 3);
    }
    else
    {
        FUNC_2(VAR_1, 39);
        int VAR_4 = FUNC_1(VAR_1, 3);
        VAR_2->header_len = VAR_4;
        VAR_2->header_len += (VAR_1->pos >> 3);
    }
    return 1;
}
