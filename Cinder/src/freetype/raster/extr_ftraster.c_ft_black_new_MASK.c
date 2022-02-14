
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* black_PRaster ;
struct TYPE_5__ {int memory; } ;
typedef int FT_Memory ;
typedef int FT_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
  FUNC_2( FT_Memory VAR_0,
                black_PRaster *VAR_1 )
  {
    FT_Error VAR_2;
    black_PRaster VAR_3 = ((void*)0);


    *VAR_1 = 0;
    if ( !FUNC_0( VAR_3 ) )
    {
      VAR_3->memory = VAR_0;
      FUNC_1( VAR_3 );

      *VAR_1 = VAR_3;
    }

    return VAR_2;
  }
