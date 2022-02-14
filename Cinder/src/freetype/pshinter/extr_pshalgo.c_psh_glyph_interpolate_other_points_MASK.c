
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int count; TYPE_2__* start; } ;
struct TYPE_11__ {scalar_t__ scale_mult; scalar_t__ scale_delta; } ;
struct TYPE_10__ {scalar_t__ num_contours; TYPE_5__* contours; TYPE_1__* globals; } ;
struct TYPE_9__ {scalar_t__ cur_u; scalar_t__ org_u; struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_4__* dimension; } ;
typedef TYPE_2__* PSH_Point ;
typedef TYPE_3__* PSH_Glyph ;
typedef TYPE_4__* PSH_Dimension ;
typedef TYPE_5__* PSH_Contour ;
typedef scalar_t__ FT_UInt ;
typedef scalar_t__ FT_Pos ;
typedef size_t FT_Int ;
typedef scalar_t__ FT_Fixed ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
  FUNC_3( PSH_Glyph VAR_0,
                                      FT_Int VAR_1 )
  {
    PSH_Dimension VAR_2 = &VAR_0->globals->dimension[VAR_1];
    FT_Fixed VAR_3 = VAR_2->scale_mult;
    FT_Fixed VAR_4 = VAR_2->scale_delta;
    PSH_Contour VAR_5 = VAR_0->contours;
    FT_UInt VAR_6 = VAR_0->num_contours;


    for ( ; VAR_6 > 0; VAR_6--, VAR_5++ )
    {
      PSH_Point VAR_7 = VAR_5->start;
      PSH_Point VAR_8, VAR_9, VAR_10;
      FT_UInt VAR_11;



      VAR_9 = VAR_7 + VAR_5->count;
      VAR_11 = 0;
      VAR_8 = ((void*)0);

      for ( VAR_10 = VAR_7; VAR_10 < VAR_9; VAR_10++ )
        if ( FUNC_2( VAR_10 ) )
        {
          if ( !VAR_8 )
            VAR_8 = VAR_10;

          VAR_11++;
        }



      if ( VAR_11 < 2 )
      {
        if ( VAR_11 == 1 )
          VAR_4 = VAR_8->cur_u - FUNC_1( VAR_8->org_u, VAR_3 );

        for ( VAR_10 = VAR_7; VAR_10 < VAR_9; VAR_10++ )
          if ( VAR_10 != VAR_8 )
            VAR_10->cur_u = FUNC_1( VAR_10->org_u, VAR_3 ) + VAR_4;

        goto Next_Contour;
      }



      VAR_7 = VAR_8;
      do
      {

        for (;;)
        {
          VAR_9 = VAR_8->next;
          if ( VAR_9 == VAR_7 )
            goto Next_Contour;

          if ( !FUNC_2( VAR_9 ) )
            break;

          VAR_8 = VAR_9;
        }


        for (;;)
        {
          VAR_9 = VAR_9->next;
          if ( FUNC_2( VAR_9 ) )
            break;
        }


        {
          FT_Pos VAR_12, VAR_13, VAR_14, VAR_15;
          FT_Pos VAR_16, VAR_17, VAR_18;
          FT_Fixed VAR_19;


          if ( VAR_8->org_u <= VAR_9->org_u )
          {
            VAR_12 = VAR_8->org_u;
            VAR_14 = VAR_8->cur_u;
            VAR_13 = VAR_9->org_u - VAR_12;
            VAR_15 = VAR_9->cur_u - VAR_14;
          }
          else
          {
            VAR_12 = VAR_9->org_u;
            VAR_14 = VAR_9->cur_u;
            VAR_13 = VAR_8->org_u - VAR_12;
            VAR_15 = VAR_8->cur_u - VAR_14;
          }

          VAR_19 = 0x10000L;
          if ( VAR_13 > 0 )
            VAR_19 = FUNC_0( VAR_15, VAR_13 );

          VAR_10 = VAR_8->next;
          do
          {
            VAR_16 = VAR_10->org_u;
            VAR_17 = VAR_16 - VAR_12;

            if ( VAR_17 <= 0 )
            {

              VAR_18 = VAR_14 + FUNC_1( VAR_17, VAR_3 );
            }
            else if ( VAR_17 >= VAR_13 )
            {

              VAR_18 = VAR_14 + VAR_15 + FUNC_1( VAR_17 - VAR_13, VAR_3 );
            }
            else
            {

              VAR_18 = VAR_14 + FUNC_1( VAR_17, VAR_19 );
            }

            VAR_10->cur_u = VAR_18;

            VAR_10 = VAR_10->next;

          } while ( VAR_10 != VAR_9 );
        }


        VAR_8 = VAR_9;

      } while ( VAR_8 != VAR_7 );

    Next_Contour:
      ;
    }
  }
