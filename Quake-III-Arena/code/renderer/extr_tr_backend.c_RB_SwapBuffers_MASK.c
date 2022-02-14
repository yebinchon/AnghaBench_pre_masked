
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int swapBuffersCommand_t ;
struct TYPE_9__ {long c_overDraw; } ;
struct TYPE_16__ {int projection2D; TYPE_1__ pc; } ;
struct TYPE_15__ {int vidWidth; int vidHeight; } ;
struct TYPE_14__ {int finishCalled; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {unsigned char* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned char*) ;} ;
struct TYPE_10__ {scalar_t__ numIndexes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_8__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int,int,int ,int ,unsigned char*) ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__ VAR_8 ;
 unsigned char* FUNC_6 (int) ;
 int FUNC_7 (unsigned char*) ;
 TYPE_2__ VAR_9 ;

const void *FUNC_8( const void *VAR_10 ) {
 const swapBuffersCommand_t *VAR_11;


 if ( VAR_9.numIndexes ) {
  FUNC_2();
 }


 if ( VAR_7->integer ) {
  FUNC_3();
 }

 VAR_11 = (const swapBuffersCommand_t *)VAR_10;



 if ( VAR_6->integer ) {
  int VAR_12;
  long VAR_13 = 0;
  unsigned char *VAR_14;

  VAR_14 = VAR_8.Hunk_AllocateTempMemory( VAR_3.vidWidth * VAR_3.vidHeight );
  FUNC_5( 0, 0, VAR_3.vidWidth, VAR_3.vidHeight, VAR_0, VAR_1, VAR_14 );

  for ( VAR_12 = 0; VAR_12 < VAR_3.vidWidth * VAR_3.vidHeight; VAR_12++ ) {
   VAR_13 += VAR_14[VAR_12];
  }

  VAR_2.pc.c_overDraw += VAR_13;
  VAR_8.Hunk_FreeTempMemory( VAR_14 );
 }


 if ( !VAR_4.finishCalled ) {
  FUNC_4();
 }

 FUNC_1( "***************** RB_SwapBuffers *****************\n\n\n" );

 FUNC_0();

 VAR_2.projection2D = VAR_5;

 return (const void *)(VAR_11 + 1);
}
