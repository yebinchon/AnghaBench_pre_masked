
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stereoEnabled; } ;
struct TYPE_8__ {TYPE_1__ glconfig; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_6__ {int (* EndFrame ) (int *,int *) ;} ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_4( void ) {
 static int VAR_10;

 if ( !VAR_7 ) {
  return;
 }

 if ( ++VAR_10 > 2 ) {
  FUNC_0( VAR_0, "SCR_UpdateScreen: recursively called" );
 }
 VAR_10 = 1;


 if ( VAR_4.glconfig.stereoEnabled ) {
  FUNC_1( VAR_2 );
  FUNC_1( VAR_3 );
 } else {
  FUNC_1( VAR_1 );
 }

 if ( VAR_5->integer ) {
  VAR_6.EndFrame( &VAR_9, &VAR_8 );
 } else {
  VAR_6.EndFrame( ((void*)0), ((void*)0) );
 }

 VAR_10 = 0;
}
