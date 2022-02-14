
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xMin; int yMin; int xMax; int yMax; } ;
typedef int FT_Outline ;
typedef TYPE_1__ FT_BBox ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 double FUNC_2 (int) ;
 long FUNC_3 () ;
 int FUNC_4 (char*,int,int,int,int,...) ;

__attribute__((used)) static void
  FUNC_5( FT_Outline* VAR_0,
                   long VAR_1 )
  {
    FT_BBox VAR_2;
    long VAR_3;
    long VAR_4;

    VAR_4 = FUNC_3();
    for ( VAR_3 = VAR_1; VAR_3 > 0; VAR_3-- )
      FUNC_1( VAR_0, &VAR_2 );

    VAR_4 = FUNC_3() - VAR_4;
    FUNC_4( "time = %6.3f cbox = [%8.4f %8.4f %8.4f %8.4f]\n",
             ((double)VAR_4/10000.0),
             FUNC_2( VAR_2.xMin ),
             FUNC_2( VAR_2.yMin ),
             FUNC_2( VAR_2.xMax ),
             FUNC_2( VAR_2.yMax ) );
    FUNC_4( "cbox_hex = [%08X %08X %08X %08X]\n",
             VAR_2.xMin, VAR_2.yMin, VAR_2.xMax, VAR_2.yMax );


    VAR_4 = FUNC_3();
    for ( VAR_3 = VAR_1; VAR_3 > 0; VAR_3-- )
      FUNC_0( VAR_0, &VAR_2 );

    VAR_4 = FUNC_3() - VAR_4;
    FUNC_4( "time = %6.3f bbox = [%8.4f %8.4f %8.4f %8.4f]\n",
             ((double)VAR_4/10000.0),
             FUNC_2( VAR_2.xMin ),
             FUNC_2( VAR_2.yMin ),
             FUNC_2( VAR_2.xMax ),
             FUNC_2( VAR_2.yMax ) );
    FUNC_4( "bbox_hex = [%08X %08X %08X %08X]\n",
             VAR_2.xMin, VAR_2.yMin, VAR_2.xMax, VAR_2.yMax );
  }
