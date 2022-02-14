
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gray_TRaster ;
typedef TYPE_1__* gray_PRaster ;
struct TYPE_3__ {int memory; } ;
typedef scalar_t__ FT_Raster ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int
  FUNC_1( FT_Memory VAR_0,
                   FT_Raster* VAR_1 )
  {
    FT_Error VAR_2;
    gray_PRaster VAR_3 = ((void*)0);


    *VAR_1 = 0;
    if ( !FUNC_0( VAR_3, sizeof ( gray_TRaster ) ) )
    {
      VAR_3->memory = VAR_0;
      *VAR_1 = (FT_Raster)VAR_3;
    }

    return VAR_2;
  }
