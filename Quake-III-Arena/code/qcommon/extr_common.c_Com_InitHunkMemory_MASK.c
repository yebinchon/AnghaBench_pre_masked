
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
typedef TYPE_1__ cvar_t ;
typedef int byte ;
struct TYPE_5__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_2 ;
 int FUNC_2 (char*,int,int) ;
 TYPE_1__* FUNC_3 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_6 (int,int) ;
 TYPE_2__* VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;

void FUNC_7( void ) {
 cvar_t *VAR_13;
 int VAR_14;
 char *VAR_15 = ((void*)0);





 if (FUNC_4() != 0) {
  FUNC_1( VAR_4, "Hunk initialization failed. File system load stack not zero");
 }


 VAR_13 = FUNC_3( "com_hunkMegs", VAR_3, VAR_1 | VAR_0 );


 if (VAR_10 && VAR_10->integer) {
  VAR_14 = VAR_8;
  VAR_15 = "Minimum com_hunkMegs for a dedicated server is %i, allocating %i megs.\n";
 }
 else {
  VAR_14 = VAR_7;
  VAR_15 = "Minimum com_hunkMegs is %i, allocating %i megs.\n";
 }

 if ( VAR_13->integer < VAR_14 ) {
  VAR_12 = 1024 * 1024 * VAR_14;
     FUNC_2(VAR_15, VAR_14, VAR_12 / (1024 * 1024));
 } else {
  VAR_12 = VAR_13->integer * 1024 * 1024;
 }



 VAR_11 = FUNC_6( VAR_12 + 31, 1 );
 if ( !VAR_11 ) {
  FUNC_1( VAR_4, "Hunk data failed to allocate %i megs", VAR_12 / (1024*1024) );
 }

 VAR_11 = (byte *) ( ( (int)VAR_11 + 31 ) & ~31 );
 FUNC_5();

 FUNC_0( "meminfo", VAR_2 );







}
