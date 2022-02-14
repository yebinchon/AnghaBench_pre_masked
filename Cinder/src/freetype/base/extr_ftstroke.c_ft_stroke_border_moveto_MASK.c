
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ start; int movable; scalar_t__ num_points; } ;
typedef int FT_Vector ;
typedef TYPE_1__* FT_StrokeBorder ;
typedef scalar_t__ FT_Int ;
typedef int FT_Error ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;

__attribute__((used)) static FT_Error
  FUNC_2( FT_StrokeBorder VAR_1,
                           FT_Vector* VAR_2 )
  {

    if ( VAR_1->start >= 0 )
      FUNC_0( VAR_1, VAR_0 );

    VAR_1->start = (FT_Int)VAR_1->num_points;
    VAR_1->movable = VAR_0;

    return FUNC_1( VAR_1, VAR_2, VAR_0 );
  }
