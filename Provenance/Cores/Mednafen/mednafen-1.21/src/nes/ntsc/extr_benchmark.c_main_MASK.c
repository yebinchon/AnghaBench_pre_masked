
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data_t {int** in; int * out; int ntsc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct data_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int*,int,int ,int,int,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int VAR_2 ;
 scalar_t__ FUNC_7 () ;

int FUNC_8()
{
 struct data_t* VAR_3 = (struct data_t*) FUNC_2( sizeof *VAR_3 );
 if ( VAR_3 )
 {

  int VAR_4;
  for ( VAR_4 = 0; VAR_4 < VAR_0; VAR_4++ )
  {
   int VAR_5;
   for ( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ )
    VAR_3->in [VAR_4] [VAR_5] = FUNC_6() >> 4 & 0x1F;
  }

  FUNC_5( "Timing nes_ntsc...\n" );
  FUNC_0( VAR_2 );

  FUNC_4( &VAR_3->ntsc, 0 );


  while ( FUNC_7() )
  {
   FUNC_3( &VAR_3->ntsc, VAR_3->in [0], VAR_1, 0,
    VAR_1, VAR_0, VAR_3->out [0], sizeof VAR_3->out [0] );
  }

  FUNC_1( VAR_3 );
 }

 return 0;
}
