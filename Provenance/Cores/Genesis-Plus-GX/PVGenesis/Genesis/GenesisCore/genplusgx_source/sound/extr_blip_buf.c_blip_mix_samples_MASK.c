
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int buf_t ;
struct TYPE_5__ {int offset; int integrator; } ;
typedef TYPE_1__ blip_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int VAR_2 ;

int FUNC_5( blip_t* VAR_3, short VAR_4 [], int VAR_5)
{
  {
  buf_t const* VAR_6 = FUNC_2( VAR_3 );
  buf_t const* VAR_7 = VAR_6 + VAR_5;
  int VAR_8 = VAR_3->integrator;
  do
  {

   int VAR_9 = FUNC_0( VAR_8, VAR_1 );

   VAR_8 += *VAR_6++;


   VAR_8 -= VAR_9 << (VAR_1 - VAR_0);


            VAR_9 += *VAR_4;

   FUNC_1( VAR_9 );

   *VAR_4 = VAR_9;
   VAR_4 += 2;
  }
  while ( VAR_6 != VAR_7 );
  VAR_3->integrator = VAR_8;

  FUNC_4( VAR_3, VAR_5 );
 }

 return VAR_5;
}
