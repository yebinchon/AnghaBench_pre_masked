
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* palette_out; } ;
typedef int FILE ;


 int * FUNC_0 (char*,char*) ;
 int FUNC_1 (unsigned char*,int,int,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3()
{
 FILE* VAR_1 = FUNC_0( "nes.pal", "wb" );
 if ( VAR_1 )
 {
  unsigned char VAR_2 [64 * 3];
  VAR_0.palette_out = VAR_2;
  FUNC_2( 0, &VAR_0 );
  FUNC_1( VAR_2, sizeof VAR_2, 1, VAR_1 );
 }
}
