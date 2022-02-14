
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y_res; int x_res; scalar_t__ height; scalar_t__ width; scalar_t__ pixel; int face_id; } ;
typedef int * FT_Size ;
typedef int FT_Face ;
typedef int FT_F26Dot6 ;
typedef scalar_t__ FT_Error ;
typedef TYPE_1__* FTC_Scaler ;
typedef int FTC_Manager ;


 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int **) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static FT_Error
  FUNC_6( FTC_Manager VAR_0,
                          FTC_Scaler VAR_1,
                          FT_Size *VAR_2 )
  {
    FT_Face VAR_3;
    FT_Size VAR_4 = ((void*)0);
    FT_Error VAR_5;


    VAR_5 = FUNC_0( VAR_0, VAR_1->face_id, &VAR_3 );
    if ( VAR_5 )
      goto Exit;

    VAR_5 = FUNC_3( VAR_3, &VAR_4 );
    if ( VAR_5 )
      goto Exit;

    FUNC_1( VAR_4 );

    if ( VAR_1->pixel )
      VAR_5 = FUNC_5( VAR_3, VAR_1->width, VAR_1->height );
    else
      VAR_5 = FUNC_4( VAR_3,
                                (FT_F26Dot6)VAR_1->width,
                                (FT_F26Dot6)VAR_1->height,
                                VAR_1->x_res,
                                VAR_1->y_res );
    if ( VAR_5 )
    {
      FUNC_2( VAR_4 );
      VAR_4 = ((void*)0);
    }

  Exit:
    *VAR_2 = VAR_4;
    return VAR_5;
  }
