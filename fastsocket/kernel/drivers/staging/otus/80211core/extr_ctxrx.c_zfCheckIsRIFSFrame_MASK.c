
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_3__ {int* rifsLikeFrameSequence; size_t rifsLikeFrameCnt; scalar_t__ rifsState; int currentFrequency; scalar_t__ rifsTimer; int rifsCount; int HT2040; int EnableHT; } ;
struct TYPE_4__ {scalar_t__ tick; TYPE_1__ sta; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_5, zbuf_t* VAR_6, u16_t VAR_7)
{
    FUNC_3(VAR_5);


    if (VAR_7 & 0x80)
    {
        u16_t VAR_8;
        u16_t VAR_9;

        VAR_8 = ( FUNC_2(VAR_5, VAR_6, 22) >> 4 );
        VAR_9 = FUNC_2(VAR_5, VAR_6, 24);



        if( VAR_9 & VAR_0 )
        {

            VAR_4->sta.rifsLikeFrameSequence[VAR_4->sta.rifsLikeFrameCnt] = VAR_8;

            if( VAR_4->sta.rifsState == VAR_2 )
            {
                if( VAR_4->sta.rifsLikeFrameSequence[2] != 0 )
                {
                    if( ( VAR_4->sta.rifsLikeFrameSequence[2] - VAR_4->sta.rifsLikeFrameSequence[1] == 2 ) &&
                        ( VAR_4->sta.rifsLikeFrameSequence[1] - VAR_4->sta.rifsLikeFrameSequence[0] == 2 ) )
                    {



                        FUNC_1(VAR_5, ((VAR_4->sta.currentFrequency<3000)?1:0), VAR_4->sta.EnableHT, VAR_4->sta.HT2040);


                        VAR_4->sta.rifsTimer = VAR_4->tick;

                        VAR_4->sta.rifsCount++;


                        VAR_4->sta.rifsState = VAR_1;
                    }
                }
            }
            else
            {

                if( (VAR_4->tick - VAR_4->sta.rifsTimer) < VAR_3 )
                    VAR_4->sta.rifsTimer = VAR_4->tick;
            }






            if( VAR_4->sta.rifsLikeFrameSequence[2] != 0 )
            {
                VAR_4->sta.rifsLikeFrameSequence[0] = VAR_4->sta.rifsLikeFrameSequence[1];
                VAR_4->sta.rifsLikeFrameSequence[1] = VAR_4->sta.rifsLikeFrameSequence[2];
                VAR_4->sta.rifsLikeFrameSequence[2] = 0;
            }


            if( VAR_4->sta.rifsLikeFrameCnt < 2 )
                VAR_4->sta.rifsLikeFrameCnt++;
        }
    }


    if( VAR_4->sta.rifsState == VAR_1 )
    {
        if( ( VAR_4->tick - VAR_4->sta.rifsTimer ) > VAR_3 )
        {

            FUNC_0(VAR_5);


            VAR_4->sta.rifsLikeFrameSequence[0] = 0;
            VAR_4->sta.rifsLikeFrameSequence[1] = 0;
            VAR_4->sta.rifsLikeFrameSequence[2] = 0;
            VAR_4->sta.rifsLikeFrameCnt = 0;


            VAR_4->sta.rifsState = VAR_2;
        }
    }
}
