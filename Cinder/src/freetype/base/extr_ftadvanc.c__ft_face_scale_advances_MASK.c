
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* size; } ;
struct TYPE_5__ {int x_scale; int y_scale; } ;
struct TYPE_6__ {TYPE_1__ metrics; } ;
typedef size_t FT_UInt ;
typedef int FT_Int32 ;
typedef int FT_Fixed ;
typedef TYPE_3__* FT_Face ;
typedef int FT_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static FT_Error
  FUNC_2( FT_Face VAR_4,
                           FT_Fixed* VAR_5,
                           FT_UInt VAR_6,
                           FT_Int32 VAR_7 )
  {
    FT_Fixed VAR_8;
    FT_UInt VAR_9;


    if ( VAR_7 & VAR_1 )
      return VAR_0;

    if ( !VAR_4->size )
      return FUNC_1( VAR_3 );

    if ( VAR_7 & VAR_2 )
      VAR_8 = VAR_4->size->metrics.y_scale;
    else
      VAR_8 = VAR_4->size->metrics.x_scale;




    for ( VAR_9 = 0; VAR_9 < VAR_6; VAR_9++ )
      VAR_5[VAR_9] = FUNC_0( VAR_5[VAR_9], VAR_8, 64 );

    return VAR_0;
  }
