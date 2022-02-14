
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {TYPE_1__* list; } ;
struct TYPE_9__ {TYPE_2__ pes; void* reg_desc; } ;
typedef TYPE_3__ hb_stream_t ;
typedef int bitbuf_t ;
struct TYPE_7__ {int map_idx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int*,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_3__*,int,int *) ;
 int FUNC_6 (TYPE_3__*,int,int,int,int) ;

__attribute__((used)) static int FUNC_7( hb_stream_t * VAR_0, uint8_t *VAR_1, int VAR_2 )
{
    int VAR_3 = 1;
    bitbuf_t VAR_4;
    FUNC_3(&VAR_4, VAR_1, VAR_2, 0);

    if ( FUNC_0(&VAR_4) < 10 )
        return 0;


    FUNC_4(&VAR_4, 8 * 8);
    int VAR_5 = FUNC_2(&VAR_4, 16);
    if ( FUNC_0(&VAR_4) < VAR_5 )
        return 0;

    if ( VAR_5 )
    {
        bitbuf_t VAR_6;
        FUNC_1( &VAR_6, &VAR_4, VAR_5 );

        while ( FUNC_0(&VAR_6) >= 2 )
        {
            uint8_t VAR_7, VAR_8;

            VAR_7 = FUNC_2(&VAR_6, 8);
            VAR_8 = FUNC_2(&VAR_6, 8);
            if ( FUNC_0(&VAR_6) < VAR_8 )
                return 0;

            if (VAR_7 == 0x05 && VAR_8 >= 4)
            {

                VAR_0->reg_desc = FUNC_2(&VAR_6, 32);
                FUNC_4(&VAR_6, 8 * (VAR_8 - 4));
            }
            else
            {
                FUNC_4(&VAR_6, 8 * VAR_8);
            }
        }
        FUNC_4(&VAR_4, 8 * VAR_5);
    }

    int VAR_9 = FUNC_2(&VAR_4, 16);
    if ( FUNC_0(&VAR_4) < VAR_9 )
        return 0;


    int VAR_10 = 0;
    while ( FUNC_0(&VAR_4) >= 8 )
    {
        int VAR_11;
        int VAR_12 = FUNC_2(&VAR_4, 8);
        int VAR_13 = FUNC_2(&VAR_4, 8);
        VAR_5 = FUNC_2(&VAR_4, 16);
        if ( VAR_5 > FUNC_0(&VAR_4) )
            return 0;

        int VAR_14 = 0;
        switch ( VAR_12 )
        {
            case 0x81:
            case 0x82:
            case 0x83:
            case 0x87:
                if ( VAR_13 < 0xb9 )
                {
                    VAR_14 = VAR_13;
                    VAR_13 = 0xbd;
                }
                break;
            default:
                break;
        }

        VAR_11 = FUNC_6( VAR_0, VAR_13, VAR_14,
                                     VAR_12, -1 );
        if ( VAR_11 >= 0 )
            VAR_0->pes.list[VAR_11].map_idx = VAR_10;

        if ( VAR_5 > 0 )
        {
            bitbuf_t VAR_15;
            FUNC_1( &VAR_15, &VAR_4, VAR_5 );
            if ( VAR_11 >= 0 )
                FUNC_5( VAR_0, VAR_11, &VAR_15 );
            FUNC_4(&VAR_4, 8 * VAR_5);
        }
        VAR_10++;
    }

    return VAR_3;
}
