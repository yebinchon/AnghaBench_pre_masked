
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int int64_t ;
struct TYPE_19__ {scalar_t__ packet_len; int header_len; } ;
struct TYPE_25__ {int continuity; int* pkt_summary; int skipbad; int pes_info_valid; scalar_t__ packet_len; size_t pes_list; TYPE_16__ pes_info; int packet_offset; TYPE_4__* buf; } ;
typedef TYPE_6__ hb_ts_stream_t ;
struct TYPE_21__ {TYPE_1__* list; } ;
struct TYPE_24__ {int discontinuity; int found_pcr; int pcr; scalar_t__ last_timestamp; TYPE_6__* list; } ;
struct TYPE_26__ {int chapter; int ts_flags; TYPE_2__ pes; TYPE_5__ ts; int frames; } ;
typedef TYPE_7__ hb_stream_t ;
typedef int hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_22__ {int new_chap; } ;
struct TYPE_23__ {int size; int data; TYPE_3__ s; } ;
struct TYPE_20__ {scalar_t__ stream_kind; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_7__*) ;
 int * FUNC_1 (TYPE_7__*,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int ,int,TYPE_16__*) ;
 int FUNC_5 (TYPE_7__*,int,int const*,int) ;
 int FUNC_6 (TYPE_7__*,int) ;
 scalar_t__ FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int*,int const*,int) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (TYPE_7__*,int,char*,...) ;
 int FUNC_12 (TYPE_7__*) ;
 scalar_t__ FUNC_13 (TYPE_7__*,int) ;
 int FUNC_14 (TYPE_7__*,char*,int,int) ;

hb_buffer_t * FUNC_15( hb_stream_t *VAR_3, const uint8_t * VAR_4,
                                int VAR_5, int VAR_6 )
{




    int VAR_7 = FUNC_12(VAR_3);
    int VAR_8;
    hb_buffer_t *VAR_9 = ((void*)0);
    hb_buffer_list_t VAR_10;

    FUNC_3(&VAR_10);

    if (VAR_5 > 0)
    {
        VAR_3->chapter = VAR_5;
    }
    if (VAR_6)
    {

        VAR_9 = FUNC_0(VAR_3);
        FUNC_2(&VAR_10, VAR_9);

        VAR_3->ts.discontinuity = 1;
    }




    int VAR_11 = ((VAR_4[1] & 0x1F) << 8) | VAR_4[2];
    if ( ( VAR_8 = FUNC_6( VAR_3, VAR_11 ) ) < 0 )
    {

        return FUNC_3(&VAR_10);
    }



    int VAR_12 = (VAR_4[1] & 0x80) != 0;
    if (VAR_12)
    {
        FUNC_11( VAR_3, VAR_8, "packet error bit set");
        return FUNC_3(&VAR_10);
    }


    int VAR_13 = (VAR_4[3] & 0x30) >> 4;
    int VAR_14 = 0;
    if (VAR_13 == 0)
    {
        FUNC_11( VAR_3, VAR_8, "adaptation code 0");
        return FUNC_3(&VAR_10);
    }
    else if (VAR_13 == 0x2)
        VAR_14 = 184;
    else if (VAR_13 == 0x3)
    {
        VAR_14 = VAR_4[4] + 1;
        if (VAR_14 > 184)
        {
            FUNC_11( VAR_3, VAR_8, "invalid adapt len %d", VAR_14);
            return FUNC_3(&VAR_10);
        }
    }

    if (VAR_14 > 0)
    {
        if (VAR_4[5] & 0x40)
        {

        }






        if (VAR_14 > 7 && (VAR_4[5] & 0x10) != 0 &&
            !(VAR_4[5] == 0xff && VAR_4[6] == 0xff && VAR_4[7] == 0xff &&
              VAR_4[8] == 0xff && VAR_4[9] == 0xff && VAR_4[10] == 0xff))
        {



            VAR_9 = FUNC_0(VAR_3);
            FUNC_2(&VAR_10, VAR_9);

            int64_t VAR_15;
            VAR_15 = ((uint64_t)VAR_4[ 6] << (33 - 8) ) |
                  ((uint64_t)VAR_4[ 7] << (33 - 16) ) |
                  ((uint64_t)VAR_4[ 8] << (33 - 24) ) |
                  ((uint64_t)VAR_4[ 9] << (33 - 32) ) |
                  ( VAR_4[10] >> 7 );
            VAR_3->ts.found_pcr = 1;
            VAR_3->ts_flags |= VAR_1;
            VAR_3->ts.pcr = VAR_15;
        }
    }






    if (!VAR_3->ts.found_pcr && (VAR_3->ts_flags & VAR_1))
    {
        return FUNC_3(&VAR_10);
    }




    hb_ts_stream_t * VAR_16 = &VAR_3->ts.list[VAR_8];
    int VAR_17 = (VAR_4[1] & 0x40) != 0;

    if ( (VAR_13 & 0x01) != 0 )
    {
        int VAR_18 = (VAR_4[3] & 0xF);
        if ( VAR_18 == VAR_16->continuity )
        {





            uint8_t VAR_19[8];

            VAR_19[0] = VAR_13;
            VAR_19[1] = VAR_14;
            if (VAR_14 + 4 + 6 + 9 <= 188)
            {
                FUNC_8(&VAR_19[2], VAR_4+4+VAR_14+9, 6);
            }
            else
            {
                FUNC_9(&VAR_19[2], 0, 6);
            }
            if ( FUNC_7( VAR_19, VAR_16->pkt_summary, 8 ) == 0 )
            {




                return FUNC_3(&VAR_10);
            }
        }
        if ( !VAR_17 && (VAR_16->continuity != -1) &&
             !VAR_16->skipbad &&
             (VAR_18 != ( (VAR_16->continuity + 1) & 0xf ) ) )
        {
            if (VAR_18 == VAR_16->continuity)
            {


                return FUNC_3(&VAR_10);
            }
            FUNC_14( VAR_3, "continuity error: got %d expected %d",
                    (int)VAR_18, (VAR_16->continuity + 1) & 0xf );
            VAR_16->continuity = VAR_18;
        }
        VAR_16->continuity = VAR_18;





        VAR_16->pkt_summary[0] = VAR_13;
        VAR_16->pkt_summary[1] = VAR_14;
        if (VAR_14 + 4 + 6 + 9 <= 188)
        {
            FUNC_8(&VAR_16->pkt_summary[2],
                    VAR_4+4+VAR_14+9, 6);
        }
        else
        {
            FUNC_9(&VAR_16->pkt_summary[2], 0, 6);
        }
    }

    if (FUNC_13( VAR_3, VAR_8 ) == VAR_0)
    {






        return FUNC_3(&VAR_10);
    }


    if (VAR_17)
    {



        if (VAR_16->buf->size > 0)
        {



            VAR_9 = FUNC_1(VAR_3, VAR_8);
            FUNC_2(&VAR_10, VAR_9);
        }
        VAR_16->pes_info_valid = 0;
        VAR_16->packet_len = 0;


        const uint8_t *VAR_20 = VAR_4 + VAR_14 + 4;
        if (VAR_20[0] != 0x00 || VAR_20[1] != 0x00 || VAR_20[2] != 0x01)
        {
            FUNC_11( VAR_3, VAR_8, "missing start code" );
            VAR_16->skipbad = 1;
            return FUNC_3(&VAR_10);
        }


        VAR_16->skipbad = 0;

        if (VAR_8 == VAR_7)
        {
            ++VAR_3->frames;



            if (!VAR_3->ts.found_pcr)
            {


                if (VAR_3->ts.last_timestamp < 0 && (VAR_20[7] >> 6) == 0)
                {
                    return FUNC_3(&VAR_10);
                }
                if ((VAR_20[7] >> 6) != 0)
                {



                    int64_t VAR_21;
                    VAR_21 = FUNC_10(VAR_20 + (VAR_20[7] & 0x40 ? 14 : 9));
                    if (VAR_3->ts.last_timestamp < 0 ||
                        VAR_21 - VAR_3->ts.last_timestamp > 90 * 600 ||
                        VAR_3->ts.last_timestamp - VAR_21 > 90 * 600)
                    {
                        VAR_3->ts.pcr = VAR_21;
                    }
                    VAR_3->ts.last_timestamp = VAR_21;
                }
            }
        }
    }


    FUNC_5(VAR_3, VAR_8, VAR_4 + 4 + VAR_14,
                            184 - VAR_14);
    if (VAR_3->chapter > 0 &&
        VAR_3->pes.list[VAR_16->pes_list].stream_kind == VAR_2)
    {
        VAR_16->buf->s.new_chap = VAR_3->chapter;
        VAR_3->chapter = 0;
    }

    if (!VAR_16->pes_info_valid && VAR_16->buf->size >= 19)
    {
        if (FUNC_4(VAR_3, VAR_16->buf->data, VAR_16->buf->size,
                        &VAR_16->pes_info))
        {
            VAR_16->pes_info_valid = 1;
            VAR_16->packet_offset = VAR_16->pes_info.header_len;
        }
    }


    if (VAR_16->pes_info_valid &&
        VAR_16->pes_info.packet_len > 0 &&
        VAR_16->packet_len >= VAR_16->pes_info.packet_len + 6)
    {
        VAR_9 = FUNC_1(VAR_3, VAR_8);
        FUNC_2(&VAR_10, VAR_9);
    }
    return FUNC_3(&VAR_10);
}
