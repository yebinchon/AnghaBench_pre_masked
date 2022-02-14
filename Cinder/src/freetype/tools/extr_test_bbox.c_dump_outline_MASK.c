
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int yMax; int xMax; int yMin; int xMin; } ;
typedef int FT_Outline ;
typedef TYPE_1__ FT_BBox ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (char*,double,double,double,double) ;

__attribute__((used)) static void
  FUNC_4( FT_Outline* VAR_0 )
  {
    FT_BBox VAR_1;


    FUNC_1( VAR_0, &VAR_1 );
    FUNC_3( "cbox = [%.2f %.2f %.2f %.2f]\n",
             FUNC_2( VAR_1.xMin ),
             FUNC_2( VAR_1.yMin ),
             FUNC_2( VAR_1.xMax ),
             FUNC_2( VAR_1.yMax ) );


    FUNC_0( VAR_0, &VAR_1 );
    FUNC_3( "bbox = [%.2f %.2f %.2f %.2f]\n",
             FUNC_2( VAR_1.xMin ),
             FUNC_2( VAR_1.yMin ),
             FUNC_2( VAR_1.xMax ),
             FUNC_2( VAR_1.yMax ) );
  }
