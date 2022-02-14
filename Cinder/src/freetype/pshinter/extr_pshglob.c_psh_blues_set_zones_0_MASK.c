
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* zones; } ;
struct TYPE_5__ {scalar_t__ org_ref; scalar_t__ org_delta; } ;
typedef int PSH_Blues ;
typedef TYPE_1__* PSH_Blue_Zone ;
typedef TYPE_2__* PSH_Blue_Table ;
typedef int FT_UInt ;
typedef scalar_t__ FT_Short ;
typedef scalar_t__ FT_Int ;
typedef int FT_Bool ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
  FUNC_1( PSH_Blues VAR_0,
                         FT_Bool VAR_1,
                         FT_UInt VAR_2,
                         FT_Short* VAR_3,
                         PSH_Blue_Table VAR_4,
                         PSH_Blue_Table VAR_5 )
  {
    FT_UInt VAR_6 = VAR_4->count;
    FT_UInt VAR_7 = VAR_5->count;
    FT_Bool VAR_8 = 1;

    FUNC_0( VAR_0 );


    for ( ; VAR_2 > 1; VAR_2 -= 2 )
    {
      FT_Int VAR_9, VAR_10;
      FT_UInt VAR_11;
      PSH_Blue_Zone VAR_12, VAR_13;
      FT_Bool VAR_14;



      VAR_14 = 0;
      if ( VAR_8 || VAR_1 )
      {
        VAR_9 = VAR_3[1];
        VAR_10 = VAR_3[0] - VAR_9;

        VAR_12 = VAR_5->zones;
        VAR_11 = VAR_7;
        VAR_8 = 0;
      }
      else
      {
        VAR_9 = VAR_3[0];
        VAR_10 = VAR_3[1] - VAR_9;

        VAR_12 = VAR_4->zones;
        VAR_11 = VAR_6;
        VAR_14 = 1;
      }


      VAR_13 = VAR_12;
      for ( ; VAR_11 > 0; VAR_11--, VAR_13++ )
      {
        if ( VAR_9 < VAR_13->org_ref )
          break;

        if ( VAR_9 == VAR_13->org_ref )
        {
          FT_Int VAR_15 = VAR_13->org_delta;




          if ( VAR_10 < 0 )
          {
            if ( VAR_10 < VAR_15 )
              VAR_13->org_delta = VAR_10;
          }
          else
          {
            if ( VAR_10 > VAR_15 )
              VAR_13->org_delta = VAR_10;
          }
          goto Skip;
        }
      }

      for ( ; VAR_11 > 0; VAR_11-- )
        VAR_13[VAR_11] = VAR_13[VAR_11-1];

      VAR_13->org_ref = VAR_9;
      VAR_13->org_delta = VAR_10;

      if ( VAR_14 )
        VAR_6++;
      else
        VAR_7++;

    Skip:
      VAR_3 += 2;
    }

    VAR_4->count = VAR_6;
    VAR_5->count = VAR_7;
  }
