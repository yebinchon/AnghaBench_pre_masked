
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ num_hints; TYPE_1__* hints; } ;
struct TYPE_7__ {int masks; TYPE_3__ hints; } ;
struct TYPE_6__ {int pos; int len; scalar_t__ flags; } ;
typedef int PS_Mask ;
typedef TYPE_1__* PS_Hint ;
typedef TYPE_2__* PS_Dimension ;
typedef scalar_t__ FT_UInt ;
typedef int FT_Memory ;
typedef int FT_Int ;
typedef int FT_Error ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_1__**) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static FT_Error
  FUNC_3( PS_Dimension VAR_3,
                           FT_Int VAR_4,
                           FT_Int VAR_5,
                           FT_Memory VAR_6,
                           FT_Int *VAR_7 )
  {
    FT_Error VAR_8 = VAR_0;
    FT_UInt VAR_9 = 0;



    if ( VAR_5 < 0 )
    {
      VAR_9 |= VAR_2;
      if ( VAR_5 == -21 )
      {
        VAR_9 |= VAR_1;
        VAR_4 += VAR_5;
      }
      VAR_5 = 0;
    }

    if ( VAR_7 )
      *VAR_7 = -1;


    {
      PS_Mask VAR_10;
      FT_UInt VAR_11;
      FT_UInt VAR_12 = VAR_3->hints.num_hints;
      PS_Hint VAR_13 = VAR_3->hints.hints;


      for ( VAR_11 = 0; VAR_11 < VAR_12; VAR_11++, VAR_13++ )
      {
        if ( VAR_13->pos == VAR_4 && VAR_13->len == VAR_5 )
          break;
      }


      if ( VAR_11 >= VAR_12 )
      {
        VAR_8 = FUNC_0( &VAR_3->hints, VAR_6, &VAR_13 );
        if ( VAR_8 )
          goto Exit;

        VAR_13->pos = VAR_4;
        VAR_13->len = VAR_5;
        VAR_13->flags = VAR_9;
      }


      VAR_8 = FUNC_2( &VAR_3->masks, VAR_6, &VAR_10 );
      if ( VAR_8 )
        goto Exit;

      VAR_8 = FUNC_1( VAR_10, VAR_11, VAR_6 );
      if ( VAR_8 )
        goto Exit;

      if ( VAR_7 )
        *VAR_7 = (FT_Int)VAR_11;
    }

  Exit:
    return VAR_8;
  }
