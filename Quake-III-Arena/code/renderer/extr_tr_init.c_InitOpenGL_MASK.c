
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vidWidth; scalar_t__ maxTextureSize; int renderer_string; } ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7( void )
{
 char VAR_2[1024];
 if ( VAR_1.vidWidth == 0 )
 {
  GLint VAR_3;

  FUNC_1();

  FUNC_6( VAR_2, VAR_1.renderer_string );
  FUNC_3( VAR_2 );


  FUNC_5( VAR_0, &VAR_3 );
  VAR_1.maxTextureSize = VAR_3;


  if ( VAR_1.maxTextureSize <= 0 )
  {
   VAR_1.maxTextureSize = 0;
  }
 }


 FUNC_4();


 FUNC_2();


 FUNC_0();
}
