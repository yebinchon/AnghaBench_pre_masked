
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_2__* list; } ;
struct TYPE_8__ {void* PCR_PID; int tablepos; int tablebuf; } ;
struct TYPE_11__ {TYPE_3__ pes; void* reg_desc; TYPE_1__ pmt_info; } ;
typedef TYPE_4__ hb_stream_t ;
typedef int bitbuf_t ;
struct TYPE_9__ {int map_idx; } ;


 int FUNC_0 (int *,int *,unsigned int) ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_4__*,int,int *) ;
 int FUNC_5 (TYPE_4__*,unsigned int,int ,unsigned char,int,int*) ;

int FUNC_6(hb_stream_t* VAR_0)
{
    bitbuf_t VAR_1;
    FUNC_2(&VAR_1, VAR_0->pmt_info.tablebuf, VAR_0->pmt_info.tablepos, 0);

    FUNC_1(&VAR_1, 8);
    FUNC_1(&VAR_1, 4);
    unsigned int VAR_2 = FUNC_1(&VAR_1, 12);

    FUNC_1(&VAR_1, 16);
    FUNC_1(&VAR_1, 2);
    FUNC_1(&VAR_1, 5);
    FUNC_1(&VAR_1, 1);
    FUNC_1(&VAR_1, 8);
    FUNC_1(&VAR_1, 8);
    FUNC_1(&VAR_1, 3);
    VAR_0->pmt_info.PCR_PID = FUNC_1(&VAR_1, 13);
    FUNC_1(&VAR_1, 4);
    int VAR_3 = FUNC_1(&VAR_1, 12);
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3 - 2; )
    {
        uint8_t VAR_5, VAR_6;
        VAR_5 = FUNC_1(&VAR_1, 8);
        VAR_6 = FUNC_1(&VAR_1, 8);
        VAR_4 += 2;
        if ( VAR_4 + VAR_6 > VAR_3 )
        {
            break;
        }
        if (VAR_5 == 0x05 && VAR_6 >= 4)
        {

            VAR_0->reg_desc = FUNC_1(&VAR_1, 32);
            VAR_4 += 4;
            VAR_6 -= 4;
        }
        int VAR_7;
        for ( VAR_7 = 0; VAR_7 < VAR_6; VAR_7++ )
        {
            FUNC_1(&VAR_1, 8);
        }
        VAR_4 += VAR_6;
    }
    for ( ; VAR_4 < VAR_3; VAR_4++ )
    {
        FUNC_1(&VAR_1, 8);
    }

    int VAR_8 = 9 + VAR_3;
    int VAR_9 = 0;
    int VAR_10 = 0;
    while (!VAR_9)
    {
        unsigned char VAR_11 = FUNC_1(&VAR_1, 8);
        FUNC_1(&VAR_1, 3);
        unsigned int VAR_12 = FUNC_1(&VAR_1, 13);
        FUNC_1(&VAR_1, 4);
        unsigned int VAR_13 = FUNC_1(&VAR_1, 12);







        int VAR_14;
        FUNC_5( VAR_0, VAR_12, 0,
                           VAR_11, -1, &VAR_14 );
        if ( VAR_14 >= 0 )
            VAR_0->pes.list[VAR_14].map_idx = VAR_10;
        if (VAR_13 > 0)
        {
            bitbuf_t VAR_15;
            FUNC_0( &VAR_15, &VAR_1, VAR_13 );
            if ( VAR_14 >= 0 )
                FUNC_4( VAR_0, VAR_14, &VAR_15 );
            FUNC_3(&VAR_1, 8 * VAR_13);
        }

        VAR_8 += 5 + VAR_13;

        if (VAR_8 >= VAR_2 - 4 )
            VAR_9 = 1;
        VAR_10++;
    }

    return 1;
}
