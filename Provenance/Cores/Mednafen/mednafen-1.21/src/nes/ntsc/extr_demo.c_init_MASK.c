
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nes_ntsc_t ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (unsigned char*,long,scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *) ;
 unsigned char* VAR_1 ;
 long VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_6()
{

 FILE* VAR_5 = FUNC_2( "nes.raw", "rb" );
 if ( !VAR_5 )
  FUNC_0( "Couldn't open image file" );
 VAR_1 = (unsigned char*) FUNC_4( (long) VAR_0 * VAR_2 );
 if ( !VAR_1 )
  FUNC_0( "Out of memory" );
 FUNC_3( VAR_1, VAR_2, VAR_0, VAR_5 );
 FUNC_1( VAR_5 );


 VAR_3 = (nes_ntsc_t*) FUNC_4( sizeof (nes_ntsc_t) );
 if ( !VAR_3 )
  FUNC_0( "Out of memory" );
 FUNC_5( VAR_3, &VAR_4 );
}
