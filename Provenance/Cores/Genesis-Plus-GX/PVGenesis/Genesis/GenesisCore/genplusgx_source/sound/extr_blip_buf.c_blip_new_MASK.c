
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int buf_t ;
struct TYPE_4__ {int factor; int size; } ;
typedef TYPE_1__ blip_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;

blip_t* FUNC_4( int VAR_3 )
{
 blip_t* VAR_4;




 VAR_4 = (blip_t*) FUNC_3( sizeof *VAR_4 + (VAR_3 + VAR_1) * sizeof (buf_t) );
 if ( VAR_4 )
 {
  VAR_4->factor = VAR_2 / VAR_0;
  VAR_4->size = VAR_3;
  FUNC_1( VAR_4 );



  }
 return VAR_4;
}
