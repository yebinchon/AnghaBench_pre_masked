
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float time; float floatTime; } ;
struct TYPE_8__ {TYPE_1__ refdef; int projection2D; } ;
struct TYPE_7__ {int vidHeight; int vidWidth; } ;
struct TYPE_6__ {float (* Milliseconds ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 float FUNC_7 () ;

void FUNC_8 (void) {
 VAR_7.projection2D = VAR_9;


 FUNC_6( 0, 0, VAR_8.vidWidth, VAR_8.vidHeight );
 FUNC_5( 0, 0, VAR_8.vidWidth, VAR_8.vidHeight );
 FUNC_3(VAR_6);
    FUNC_2 ();
 FUNC_4 (0, VAR_8.vidWidth, VAR_8.vidHeight, 0, 0, 1);
 FUNC_3(VAR_5);
    FUNC_2 ();

 FUNC_0( VAR_0 |
     VAR_2 |
     VAR_1 );

 FUNC_1( VAR_4 );
 FUNC_1( VAR_3 );


 VAR_7.refdef.time = VAR_10.Milliseconds();
 VAR_7.refdef.floatTime = VAR_7.refdef.time * 0.001f;
}
